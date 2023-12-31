// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x0C53C8A0, 0x00000002, 0x00000002,/* MP0_DCM_CFG8 */
	0x0D01A070, 0x00000001, 0x00000001,/* ATB_CON */
	0x0D0A002C, 0x00000001, 0x00000001,/* DBGBUSCLK_EN */
	0x0D0A0030, 0x00000001, 0x00000001,/* DBGSYSCLK_EN */
	0x0D0A0070, 0x00000001, 0x00000001,/* ATB_CON */
	0x10000000, 0x00000F00, 0x00000000,/* CLK_MODE */
	0x10000010, 0x80808080, 0x00800000,/* CLK_CFG_0 */
	0x10000020, 0x80808080, 0x80808080,/* CLK_CFG_1 */
	0x10000030, 0x80808080, 0x80808080,/* CLK_CFG_2 */
	0x10000050, 0x80800000, 0x80800000,/* CLK_CFG_4 */
	0x10000060, 0x80808080, 0x80808080,/* CLK_CFG_5 */
	0x10000070, 0x80808080, 0x80808080,/* CLK_CFG_6 */
	0x10000080, 0x80808080, 0x80808080,/* CLK_CFG_7 */
	0x10000090, 0x80808080, 0x00800000,/* CLK_CFG_8 */
	0x100000A0, 0x80808080, 0x80808080,/* CLK_CFG_9 */
	0x100000B0, 0x80808080, 0x80808080,/* CLK_CFG_10 */
	0x100000C0, 0x80808080, 0x80808080,/* CLK_CFG_11 */
	0x100000D0, 0x80808080, 0x80808080,/* CLK_CFG_12 */
	0x100000E0, 0x80008080, 0x80008080,/* CLK_CFG_13 */
	0x10000100, 0x00800000, 0x00000000,/* CLK_CFG_15 */
	0x10000110, 0x00008000, 0x00008000,/* CLK_CFG_16 */
	0x10000140, 0x00003030, 0x00003000,/* CLK_MISC_CFG_0 */
	0x10000320, 0x000007FF, 0x000007FF,/* CLK_AUDDIV_0 */
	0x10001070, 0x00000004, 0x00000000,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BEFFFFF, 0x9BEFFFF0,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BEFFFFF, 0x00000000,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0xFF9FFFD6, 0x7F9FBB56,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0xFF9FFFD7, 0x00000000,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0xFFFFFEFF, 0xFFFFFEFF,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0xFFFFFEFF, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0xFFFFCFFF, 0xFFFFCFFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0xFFFFCFFF, 0x00300000,/* MODULE_SW_CG_3_CLR */
	0x100010E0, 0xFFFF007F, 0xFFFF007F,/* MODULE_SW_CG_4_SET */
	0x100010E4, 0xFFFF007F, 0x01000000,/* MODULE_SW_CG_4_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x10006B00, 0x0100001E, 0x01000000,/* MD32PCM_CK_EN */
	0x10006B04, 0x0000001E, 0x00000000,/* MD32PCM_CKCTRL_FORCE_CK_ON */
	0x1000C014, 0x00030B78, 0x00000020,/* AP_PLL_CON5 */
	0x1000C200, 0x00000FFF, 0x00000FA0,/* AP_PLLGP1_CON0 */
	0x1000C208, 0x00000001, 0x00000001,/* ARMPLL_LL_CON0 */
	0x1000C218, 0x00000001, 0x00000001,/* ARMPLL_BL0_CON0 */
	0x1000C228, 0x00000001, 0x00000001,/* ARMPLL_BL1_CON0 */
	0x1000C238, 0x00000001, 0x00000001,/* ARMPLL_BL2_CON0 */
	0x1000C248, 0x00000001, 0x00000001,/* ARMPLL_BL3_CON0 */
	0x1000C258, 0x00000001, 0x00000001,/* CCIPLL_CON0 */
	0x1000C268, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C300, 0xC60003FF, 0x06000184,/* AP_PLLGP2_CON0 */
	0x1000C304, 0x0FFA0000, 0x0FFA0000,/* AP_PLLGP2_CON1 */
	0x1000C308, 0xFF000001, 0xFC000000,/* UNIVPLL_CON0 */
	0x1000C318, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C32C, 0x00000001, 0x00000000,/* APLL2_CON0 */
	0x1000C340, 0x7F000001, 0x7C000001,/* MAINPLL_CON0 */
	0x1000C350, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C360, 0xFF000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C370, 0xFF000001, 0x00000000,/* ADSPPLL_CON0 */
	0x1000C380, 0x00000001, 0x00000000,/* TVDPLL_CON0 */
	0x1000C390, 0x00000001, 0x00000001,/* MPLL_CON0 */
	0x1000C3A0, 0xFF000001, 0x00000000,/* APUPLL_CON0 */
	0x1000C3B4, 0xFF000001, 0x00000000,/* NPUPLL_CON0 */
	0x10012000, 0x00000001, 0x00000000,/* DVFSRC_BASIC_CONTROL */
	0x1020EB00, 0x00000007, 0x00000000,/* BUS_MON_CKEN */
	0x1021C210, 0x0000000F, 0x00000000,/* BUS_MEM_MON_CKEN */
	0x102280F0, 0x00010000, 0x00010000,/* GCE_CTL_INT0 */
	0x1022D468, 0x0000003F, 0x00000000,/* CG_EN */
	0x10801000, 0x00000CFB, 0x00000000,/* ADSP_CK_EN */
	0x10801010, 0x00000001, 0x00000000,/* ADSP_UART_CTRL */
	0x10943000, 0x00001000, 0x00000000,/* SSPM_CK_EN */
	0x10943004, 0x00000100, 0x00000100,/* SSPM_MCLK_DIV */
	0x10943010, 0x00000001, 0x00000000,/* SSPM_UART_CTRL */
	0x1094703C, 0x00000002, 0x00000002,/* LPIF_DFD_DBUG_0 */
	0x11007E00, 0x00000003, 0x00000003,/* AP_CLOCK_CG_CEN_STA */
	0x11007E04, 0x00000003, 0x00000000,/* AP_CLOCK_CG_CEN_CLR */
	0x11007E08, 0x00000003, 0x00000003,/* AP_CLOCK_CG_CEN_SET */
	0x1100B0E4, 0x00000001, 0x00000000,/* LVTSCLKEN_0 */
	0x1100B1E4, 0x00000001, 0x00000000,/* LVTSCLKEN_1 */
	0x1100B2E4, 0x00000001, 0x00000000,/* LVTSCLKEN_2 */
	0x1100B3E4, 0x00000001, 0x00000000,/* LVTSCLKEN_3 */
	0x1100BF00, 0x800F0000, 0x00000000,/*  */
	0x112300B4, 0x00400000, 0x00000000,/* PATCH_BIT1 */
	0x11CB1E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_STA */
	0x11CB1E04, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_CLR */
	0x11CB1E08, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_SET */
	0x11D02E00, 0x00000003, 0x00000003,/* AP_CLOCK_CG_SOU_STA */
	0x11D02E04, 0x00000003, 0x00000000,/* AP_CLOCK_CG_SOU_CLR */
	0x11D02E08, 0x00000003, 0x00000003,/* AP_CLOCK_CG_SOU_SET */
	0x11D23E00, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WEST_SOU_STA */
	0x11D23E04, 0x00000007, 0x00000000,/* AP_CLOCK_CG_WEST_SOU_CLR */
	0x11D23E08, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WEST_SOU_SET */
	0x11E03E00, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WST_STA */
	0x11E03E04, 0x00000007, 0x00000000,/* AP_CLOCK_CG_WST_CLR */
	0x11E03E08, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WST_SET */
	0x11E40380, 0x00000001, 0x00000000,/* U2PHYBC12C */
	0x11F01E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_STA */
	0x11F01E04, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_CLR */
	0x11F01E08, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_SET */
	0x13FBF004, 0x00000001, 0x00000001,/* MFG_CG_SET */
	0x13FBF008, 0x00000001, 0x00000000,/* MFG_CG_CLR */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x14000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON1 */
	0x140001A0, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON2 */
	0x15020000, 0x00001007, 0x00001007,/* IMG_CG_CON */
	0x15820000, 0x000011C3, 0x000011C3,/* IMG_CG_CON */
	0x1602F000, 0x00000001, 0x00000000,/* VDEC_CKEN_SET */
	0x1602F004, 0x00000001, 0x00000001,/* VDEC_CKEN_CLR */
	0x1602F008, 0x00000001, 0x00000000,/* LARB_CKEN_CON_SET */
	0x1602F00C, 0x00000001, 0x00000001,/* LARB_CKEN_CON_CLR */
	0x1602F200, 0x00000001, 0x00000000,/* LAT_CKEN_SET */
	0x1602F204, 0x00000001, 0x00000001,/* LAT_CKEN_CLR */
	0x17000000, 0x10000111, 0x00000000,/* VENCSYS_CG_CON */
	0x17000004, 0x10000111, 0x00000000,/* VENCSYS_CG_SET */
	0x17000008, 0x10000111, 0x10000111,/* VENCSYS_CG_CLR */
	0x1A000000, 0x000FFDCF, 0x000FFDCF,/* CAMSYS_CG_CON */
	0x1A04F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1A06F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1B000000, 0x0000017F, 0x0000017F,/* IMG_CG_CON */
	0x1F000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON0 */
	0x1F000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON1 */
	0x1F000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON2 */
	0x1F000130, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON3 */
	0x1F000140, 0xFFFFFFFF, 0xFFFFFFFF /* MDPSYS_CG_CON4 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_dpidle =
		AP_CG_Golden_Setting_tcl_gs_dpidle_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_len = 363;

const unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x0C53C8A0, 0x00000002, 0x00000002,/* MP0_DCM_CFG8 */
	0x0D01A070, 0x00000001, 0x00000001,/* ATB_CON */
	0x0D0A002C, 0x00000001, 0x00000000,/* DBGBUSCLK_EN */
	0x0D0A0030, 0x00000001, 0x00000000,/* DBGSYSCLK_EN */
	0x0D0A0070, 0x00000001, 0x00000000,/* ATB_CON */
	0x10000000, 0x00000F00, 0x00000000,/* CLK_MODE */
	0x10000010, 0x80808080, 0x00800000,/* CLK_CFG_0 */
	0x10000020, 0x80808080, 0x80808080,/* CLK_CFG_1 */
	0x10000030, 0x80808080, 0x80808080,/* CLK_CFG_2 */
	0x10000050, 0x80800000, 0x80800000,/* CLK_CFG_4 */
	0x10000060, 0x80808080, 0x80808080,/* CLK_CFG_5 */
	0x10000070, 0x80808080, 0x80808080,/* CLK_CFG_6 */
	0x10000080, 0x80808080, 0x80808080,/* CLK_CFG_7 */
	0x10000090, 0x80808080, 0x00800080,/* CLK_CFG_8 */
	0x100000A0, 0x80808080, 0x80808080,/* CLK_CFG_9 */
	0x100000B0, 0x80808080, 0x80808080,/* CLK_CFG_10 */
	0x100000C0, 0x80808080, 0x80808080,/* CLK_CFG_11 */
	0x100000D0, 0x80808080, 0x80808080,/* CLK_CFG_12 */
	0x100000E0, 0x80008080, 0x80008080,/* CLK_CFG_13 */
	0x10000100, 0x00800000, 0x00000000,/* CLK_CFG_15 */
	0x10000110, 0x00008000, 0x00008000,/* CLK_CFG_16 */
	0x10000140, 0x00003030, 0x00003000,/* CLK_MISC_CFG_0 */
	0x10000320, 0x000007FF, 0x000007FF,/* CLK_AUDDIV_0 */
	0x10001070, 0x00000004, 0x00000000,/* INFRA_BUS_DCM_CTRL */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BEFFFFF, 0x9BEFFFF0,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BEFFFFF, 0x00000000,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0xFF9FFFD6, 0x7F9FBB56,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0xFF9FFFD7, 0x00000000,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0xFFFFFEFF, 0xFFFFFEFF,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0xFFFFFEFF, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0xFFFFCFFF, 0xFFFFCFFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0xFFFFCFFF, 0x00300000,/* MODULE_SW_CG_3_CLR */
	0x100010E0, 0xFFFF007F, 0xFFFF007F,/* MODULE_SW_CG_4_SET */
	0x100010E4, 0xFFFF007F, 0x01000000,/* MODULE_SW_CG_4_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x10006B00, 0x0100001E, 0x01000000,/* MD32PCM_CK_EN */
	0x10006B04, 0x0000001E, 0x00000000,/* MD32PCM_CKCTRL_FORCE_CK_ON */
	0x1000C014, 0x00030B78, 0x00000020,/* AP_PLL_CON5 */
	0x1000C200, 0x00000FFF, 0x00000FA0,/* AP_PLLGP1_CON0 */
	0x1000C208, 0x00000001, 0x00000001,/* ARMPLL_LL_CON0 */
	0x1000C218, 0x00000001, 0x00000001,/* ARMPLL_BL0_CON0 */
	0x1000C228, 0x00000001, 0x00000001,/* ARMPLL_BL1_CON0 */
	0x1000C238, 0x00000001, 0x00000001,/* ARMPLL_BL2_CON0 */
	0x1000C248, 0x00000001, 0x00000001,/* ARMPLL_BL3_CON0 */
	0x1000C258, 0x00000001, 0x00000001,/* CCIPLL_CON0 */
	0x1000C268, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C300, 0xC60003FF, 0x06000184,/* AP_PLLGP2_CON0 */
	0x1000C304, 0x0FFA0000, 0x0FFA0000,/* AP_PLLGP2_CON1 */
	0x1000C308, 0xFF000001, 0xFC000000,/* UNIVPLL_CON0 */
	0x1000C318, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C32C, 0x00000001, 0x00000000,/* APLL2_CON0 */
	0x1000C340, 0x7F000001, 0x7C000001,/* MAINPLL_CON0 */
	0x1000C350, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C360, 0xFF000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C370, 0xFF000001, 0x00000000,/* ADSPPLL_CON0 */
	0x1000C380, 0x00000001, 0x00000000,/* TVDPLL_CON0 */
	0x1000C390, 0x00000001, 0x00000001,/* MPLL_CON0 */
	0x1000C3A0, 0xFF000001, 0x00000000,/* APUPLL_CON0 */
	0x1000C3B4, 0xFF000001, 0x00000000,/* NPUPLL_CON0 */
	0x10012000, 0x00000001, 0x00000000,/* DVFSRC_BASIC_CONTROL */
	0x1020EB00, 0x00000007, 0x00000000,/* BUS_MON_CKEN */
	0x1021C210, 0x0000000F, 0x00000000,/* BUS_MEM_MON_CKEN */
	0x102280F0, 0x00010000, 0x00010000,/* GCE_CTL_INT0 */
	0x1022D468, 0x0000003F, 0x00000000,/* CG_EN */
	0x10801000, 0x00000CFB, 0x00000000,/* ADSP_CK_EN */
	0x10801010, 0x00000001, 0x00000000,/* ADSP_UART_CTRL */
	0x10943000, 0x00001000, 0x00000000,/* SSPM_CK_EN */
	0x10943004, 0x00000100, 0x00000100,/* SSPM_MCLK_DIV */
	0x10943010, 0x00000001, 0x00000000,/* SSPM_UART_CTRL */
	0x1094703C, 0x00000002, 0x00000002,/* LPIF_DFD_DBUG_0 */
	0x11007E00, 0x00000003, 0x00000003,/* AP_CLOCK_CG_CEN_STA */
	0x11007E04, 0x00000003, 0x00000000,/* AP_CLOCK_CG_CEN_CLR */
	0x11007E08, 0x00000003, 0x00000003,/* AP_CLOCK_CG_CEN_SET */
	0x1100B0E4, 0x00000001, 0x00000000,/* LVTSCLKEN_0 */
	0x1100B1E4, 0x00000001, 0x00000000,/* LVTSCLKEN_1 */
	0x1100B2E4, 0x00000001, 0x00000000,/* LVTSCLKEN_2 */
	0x1100B3E4, 0x00000001, 0x00000000,/* LVTSCLKEN_3 */
	0x1100BF00, 0x800F0000, 0x00000000,/*  */
	0x112300B4, 0x00400000, 0x00000000,/* PATCH_BIT1 */
	0x11CB1E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_STA */
	0x11CB1E04, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_CLR */
	0x11CB1E08, 0x00000001, 0x00000001,/* AP_CLOCK_CG_EST_SET */
	0x11D02E00, 0x00000003, 0x00000003,/* AP_CLOCK_CG_SOU_STA */
	0x11D02E04, 0x00000003, 0x00000000,/* AP_CLOCK_CG_SOU_CLR */
	0x11D02E08, 0x00000003, 0x00000003,/* AP_CLOCK_CG_SOU_SET */
	0x11D23E00, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WEST_SOU_STA */
	0x11D23E04, 0x00000007, 0x00000000,/* AP_CLOCK_CG_WEST_SOU_CLR */
	0x11D23E08, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WEST_SOU_SET */
	0x11E03E00, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WST_STA */
	0x11E03E04, 0x00000007, 0x00000000,/* AP_CLOCK_CG_WST_CLR */
	0x11E03E08, 0x00000007, 0x00000007,/* AP_CLOCK_CG_WST_SET */
	0x11E40380, 0x00000001, 0x00000000,/* U2PHYBC12C */
	0x11F01E00, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_STA */
	0x11F01E04, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_CLR */
	0x11F01E08, 0x00000001, 0x00000001,/* AP_CLOCK_CG_NOR_SET */
	0x13FBF004, 0x00000001, 0x00000001,/* MFG_CG_SET */
	0x13FBF008, 0x00000001, 0x00000000,/* MFG_CG_CLR */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x14000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON1 */
	0x140001A0, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON2 */
	0x15020000, 0x00001007, 0x00001007,/* IMG_CG_CON */
	0x15820000, 0x000011C3, 0x000011C3,/* IMG_CG_CON */
	0x1602F000, 0x00000001, 0x00000000,/* VDEC_CKEN_SET */
	0x1602F004, 0x00000001, 0x00000001,/* VDEC_CKEN_CLR */
	0x1602F008, 0x00000001, 0x00000000,/* LARB_CKEN_CON_SET */
	0x1602F00C, 0x00000001, 0x00000001,/* LARB_CKEN_CON_CLR */
	0x1602F200, 0x00000001, 0x00000000,/* LAT_CKEN_SET */
	0x1602F204, 0x00000001, 0x00000001,/* LAT_CKEN_CLR */
	0x17000000, 0x10000111, 0x00000000,/* VENCSYS_CG_CON */
	0x17000004, 0x10000111, 0x00000000,/* VENCSYS_CG_SET */
	0x17000008, 0x10000111, 0x10000111,/* VENCSYS_CG_CLR */
	0x1A000000, 0x000FFDCF, 0x000FFDCF,/* CAMSYS_CG_CON */
	0x1A04F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1A06F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1B000000, 0x0000017F, 0x0000017F,/* IMG_CG_CON */
	0x1F000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON0 */
	0x1F000110, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON1 */
	0x1F000120, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON2 */
	0x1F000130, 0xFFFFFFFF, 0xFFFFFFFF,/* MDPSYS_CG_CON3 */
	0x1F000140, 0xFFFFFFFF, 0xFFFFFFFF /* MDPSYS_CG_CON4 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_suspend =
		AP_CG_Golden_Setting_tcl_gs_suspend_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_len = 363;

const unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_data[] = {
/*	Address		Mask		Golden Setting Value */
	0x0D01A070, 0x00000001, 0x00000001,/* ATB_CON */
	0x0D0A002C, 0x00000001, 0x00000001,/* DBGBUSCLK_EN */
	0x0D0A0030, 0x00000001, 0x00000001,/* DBGSYSCLK_EN */
	0x0D0A0070, 0x00000001, 0x00000001,/* ATB_CON */
	0x10012000, 0x00000001, 0x00000001,/* DVFSRC_BASIC_CONTROL */
	0x1022D468, 0x0000003F, 0x00000000,/* CG_EN */
	0x112300B4, 0x00400000, 0x00400000,/* PATCH_BIT1 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
	0x14000110, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON1 */
	0x140001A0, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON2 */
	0x15020000, 0x00001007, 0x00001007,/* IMG_CG_CON */
	0x15820000, 0x000011C3, 0x000011C3,/* IMG_CG_CON */
	0x1602F000, 0x00000001, 0x00000001,/* VDEC_CKEN_SET */
	0x1602F004, 0x00000001, 0x00000000,/* VDEC_CKEN_CLR */
	0x1602F008, 0x00000001, 0x00000001,/* LARB_CKEN_CON_SET */
	0x1602F00C, 0x00000001, 0x00000000,/* LARB_CKEN_CON_CLR */
	0x1602F200, 0x00000001, 0x00000001,/* LAT_CKEN_SET */
	0x1602F204, 0x00000001, 0x00000000,/* LAT_CKEN_CLR */
	0x17000000, 0x10000111, 0x00000000,/* VENCSYS_CG_CON */
	0x17000004, 0x10000111, 0x00000000,/* VENCSYS_CG_SET */
	0x17000008, 0x10000111, 0x10000111,/* VENCSYS_CG_CLR */
	0x1A000000, 0x000FFDCF, 0x000FFDCF,/* CAMSYS_CG_CON */
	0x1A04F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1A06F000, 0x00000007, 0x00000007,/* CAMSYS_CG_CON */
	0x1B000000, 0x0000017F, 0x0000017F,/* IMG_CG_CON */
	0x1F000100, 0xFFFFFFFF, 0x00000000,/* MDPSYS_CG_CON0 */
	0x1F000110, 0xFFFFFFFF, 0x00000000,/* MDPSYS_CG_CON1 */
	0x1F000120, 0xFFFFFFFF, 0x00000000,/* MDPSYS_CG_CON2 */
	0x1F000130, 0xFFFFFFFF, 0x00000000,/* MDPSYS_CG_CON3 */
	0x1F000140, 0xFFFFFFFF, 0x00000000 /* MDPSYS_CG_CON4 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_sodi =
		AP_CG_Golden_Setting_tcl_gs_sodi_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_len = 90;
