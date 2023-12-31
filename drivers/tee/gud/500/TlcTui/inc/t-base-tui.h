/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2013-2015 TRUSTONIC LIMITED
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef TBASE_TUI_H
#define TBASE_TUI_H

#define TRUSTEDUI_MODE_OFF                0x00
#define TRUSTEDUI_MODE_ALL                0xff
#define TRUSTEDUI_MODE_TUI_SESSION    0x01
#define TRUSTEDUI_MODE_VIDEO_SECURED  0x02
#define TRUSTEDUI_MODE_INPUT_SECURED  0x04

#if IS_ENABLED(CONFIG_TRUSTONIC_TRUSTED_UI)

int trustedui_blank_inc(void);
int trustedui_blank_dec(void);
int trustedui_blank_get_counter(void);
void trustedui_blank_set_counter(int counter);

int trustedui_get_current_mode(void);
void trustedui_set_mode(int mode);
int trustedui_set_mask(int mask);
int trustedui_clear_mask(int mask);

#endif /* CONFIG_TRUSTONIC_TRUSTED_UI */

#endif /* TBASE_TUI_H */
