/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/mfd/mt6357/registers.h>
#include <linux/regmap.h>
#include <mtk_spm_internal.h>
//#include <mt-plat/mtk_secure_api.h>

#if IS_ENABLED(CONFIG_MTK_PMIC) || IS_ENABLED(CONFIG_MTK_PMIC_NEW_ARCH)
#include <mt-plat/upmu_common.h>
#endif

#include <mtk_spm.h>
#include <mtk_spm_idle.h>
#include <mtk_spm_sip.h>

#include <mtk_spm_pmic_wrap.h>
//#include "pmic_api_buck.h"
#include <mtk_spm_vcore_dvfs.h>
#include <mtk_spm_resource_req_internal.h>

extern struct regmap *pmic_regmap;

void spm_dpidle_pre_process(unsigned int operation_cond, struct pwr_ctrl *pwrctrl)
{
#if !IS_ENABLED(CONFIG_MTK_TINYSYS_SSPM_SUPPORT)
	/* setup PMIC low power mode */
	spm_pmic_power_mode(PMIC_PWR_DEEPIDLE, 0, 0);
#endif

#if !IS_ENABLED(CONFIG_FPGA_EARLY_PORTING)
	/* vs1 normal voltage voter (AP and CONN) */
	if (spm_read(PWR_STATUS) & PWR_STATUS_CONN)
		//pmic_set_register_value(PMIC_RG_BUCK_VS1_VOTER_EN_SET, 0x01 << 1);
		regmap_update_bits(pmic_regmap, MT6357_BUCK_VS1_VOTER_SET, 0xff << 0, 0x01 << 1);
	else
		//pmic_set_register_value(PMIC_RG_BUCK_VS1_VOTER_EN_CLR, 0x01 << 1);
		regmap_update_bits(pmic_regmap, MT6357_BUCK_VS1_VOTER_CLR, 0xff << 0, 0x01 << 1);

	//pmic_set_register_value(PMIC_RG_BUCK_VS1_VOTER_EN_CLR, 0x01 << 0);
	regmap_update_bits(pmic_regmap, MT6357_BUCK_VS1_VOTER_CLR, 0xff << 0, 0x01 << 0);
#endif

#if 0	/* md no need to pull high vcore request at display off scenario */
	if (__spm_get_md_srcclkena_setting())
		dvfsrc_mdsrclkena_control_nolock(0);
#endif

	__spm_sync_pcm_flags(pwrctrl);
}

void spm_dpidle_post_process(void)
{
#if !IS_ENABLED(CONFIG_FPGA_EARLY_PORTING)
	/* vs1 normal voltage voter (AP and CONN) */
	//pmic_set_register_value(PMIC_RG_BUCK_VS1_VOTER_EN_SET, 0x01 << 0);
	regmap_update_bits(pmic_regmap, MT6357_BUCK_VS1_VOTER_SET, 0xff << 0, 0x01 << 0);
	//pmic_set_register_value(PMIC_RG_BUCK_VS1_VOTER_EN_SET, 0x01 << 1);
	regmap_update_bits(pmic_regmap, MT6357_BUCK_VS1_VOTER_SET, 0xff << 0, 0x01 << 1);
#endif

#if 0	/* md no need to pull high vcore request at display off scenario */
	if (__spm_get_md_srcclkena_setting())
		dvfsrc_mdsrclkena_control_nolock(1);
#endif
}

void spm_dpidle_pcm_setup_before_wfi(bool sleep_dpidle, u32 cpu, struct pcm_desc *pcmdesc,
		struct pwr_ctrl *pwrctrl, u32 operation_cond)
{
	unsigned int resource_usage = 0;

	spm_dpidle_pre_process(operation_cond, pwrctrl);

	/* Get SPM resource request and update reg_spm_xxx_req */
	resource_usage = (!sleep_dpidle) ? spm_get_resource_usage() : 0;

	mt_secure_call(MTK_SIP_KERNEL_SPM_DPIDLE_ARGS,
		pwrctrl->pcm_flags, resource_usage, 0, 0);

	if (sleep_dpidle)
		mt_secure_call(MTK_SIP_KERNEL_SPM_SLEEP_DPIDLE_ARGS,
			pwrctrl->timer_val,
			pwrctrl->wake_src, 0, 0);
}

void spm_deepidle_chip_init(void)
{
}

