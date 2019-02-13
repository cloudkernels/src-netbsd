/*	$NetBSD: qcom,gcc-msm8660.h,v 1.1.1.1 2017/06/15 20:14:23 jmcneill Exp $	*/

/*
 * Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_MSM_GCC_8660_H
#define _DT_BINDINGS_CLK_MSM_GCC_8660_H

#define AFAB_CLK_SRC				0
#define AFAB_CORE_CLK				1
#define SCSS_A_CLK				2
#define SCSS_H_CLK				3
#define SCSS_XO_SRC_CLK				4
#define AFAB_EBI1_CH0_A_CLK			5
#define AFAB_EBI1_CH1_A_CLK			6
#define AFAB_AXI_S0_FCLK			7
#define AFAB_AXI_S1_FCLK			8
#define AFAB_AXI_S2_FCLK			9
#define AFAB_AXI_S3_FCLK			10
#define AFAB_AXI_S4_FCLK			11
#define SFAB_CORE_CLK				12
#define SFAB_AXI_S0_FCLK			13
#define SFAB_AXI_S1_FCLK			14
#define SFAB_AXI_S2_FCLK			15
#define SFAB_AXI_S3_FCLK			16
#define SFAB_AXI_S4_FCLK			17
#define SFAB_AHB_S0_FCLK			18
#define SFAB_AHB_S1_FCLK			19
#define SFAB_AHB_S2_FCLK			20
#define SFAB_AHB_S3_FCLK			21
#define SFAB_AHB_S4_FCLK			22
#define SFAB_AHB_S5_FCLK			23
#define SFAB_AHB_S6_FCLK			24
#define SFAB_ADM0_M0_A_CLK			25
#define SFAB_ADM0_M1_A_CLK			26
#define SFAB_ADM0_M2_A_CLK			27
#define ADM0_CLK				28
#define ADM0_PBUS_CLK				29
#define SFAB_ADM1_M0_A_CLK			30
#define SFAB_ADM1_M1_A_CLK			31
#define SFAB_ADM1_M2_A_CLK			32
#define MMFAB_ADM1_M3_A_CLK			33
#define ADM1_CLK				34
#define ADM1_PBUS_CLK				35
#define IMEM0_A_CLK				36
#define MAHB0_CLK				37
#define SFAB_LPASS_Q6_A_CLK			38
#define SFAB_AFAB_M_A_CLK			39
#define AFAB_SFAB_M0_A_CLK			40
#define AFAB_SFAB_M1_A_CLK			41
#define DFAB_CLK_SRC				42
#define DFAB_CLK				43
#define DFAB_CORE_CLK				44
#define SFAB_DFAB_M_A_CLK			45
#define DFAB_SFAB_M_A_CLK			46
#define DFAB_SWAY0_H_CLK			47
#define DFAB_SWAY1_H_CLK			48
#define DFAB_ARB0_H_CLK				49
#define DFAB_ARB1_H_CLK				50
#define PPSS_H_CLK				51
#define PPSS_PROC_CLK				52
#define PPSS_TIMER0_CLK				53
#define PPSS_TIMER1_CLK				54
#define PMEM_A_CLK				55
#define DMA_BAM_H_CLK				56
#define SIC_H_CLK				57
#define SPS_TIC_H_CLK				58
#define SLIMBUS_H_CLK				59
#define SLIMBUS_XO_SRC_CLK			60
#define CFPB_2X_CLK_SRC				61
#define CFPB_CLK				62
#define CFPB0_H_CLK				63
#define CFPB1_H_CLK				64
#define CFPB2_H_CLK				65
#define EBI2_2X_CLK				66
#define EBI2_CLK				67
#define SFAB_CFPB_M_H_CLK			68
#define CFPB_MASTER_H_CLK			69
#define SFAB_CFPB_S_HCLK			70
#define CFPB_SPLITTER_H_CLK			71
#define TSIF_H_CLK				72
#define TSIF_INACTIVITY_TIMERS_CLK		73
#define TSIF_REF_SRC				74
#define TSIF_REF_CLK				75
#define CE1_H_CLK				76
#define CE2_H_CLK				77
#define SFPB_H_CLK_SRC				78
#define SFPB_H_CLK				79
#define SFAB_SFPB_M_H_CLK			80
#define SFAB_SFPB_S_H_CLK			81
#define RPM_PROC_CLK				82
#define RPM_BUS_H_CLK				83
#define RPM_SLEEP_CLK				84
#define RPM_TIMER_CLK				85
#define MODEM_AHB1_H_CLK			86
#define MODEM_AHB2_H_CLK			87
#define RPM_MSG_RAM_H_CLK			88
#define SC_H_CLK				89
#define SC_A_CLK				90
#define PMIC_ARB0_H_CLK				91
#define PMIC_ARB1_H_CLK				92
#define PMIC_SSBI2_SRC				93
#define PMIC_SSBI2_CLK				94
#define SDC1_H_CLK				95
#define SDC2_H_CLK				96
#define SDC3_H_CLK				97
#define SDC4_H_CLK				98
#define SDC5_H_CLK				99
#define SDC1_SRC				100
#define SDC2_SRC				101
#define SDC3_SRC				102
#define SDC4_SRC				103
#define SDC5_SRC				104
#define SDC1_CLK				105
#define SDC2_CLK				106
#define SDC3_CLK				107
#define SDC4_CLK				108
#define SDC5_CLK				109
#define USB_HS1_H_CLK				110
#define USB_HS1_XCVR_SRC			111
#define USB_HS1_XCVR_CLK			112
#define USB_HS2_H_CLK				113
#define USB_HS2_XCVR_SRC			114
#define USB_HS2_XCVR_CLK			115
#define USB_FS1_H_CLK				116
#define USB_FS1_XCVR_FS_SRC			117
#define USB_FS1_XCVR_FS_CLK			118
#define USB_FS1_SYSTEM_CLK			119
#define USB_FS2_H_CLK				120
#define USB_FS2_XCVR_FS_SRC			121
#define USB_FS2_XCVR_FS_CLK			122
#define USB_FS2_SYSTEM_CLK			123
#define GSBI_COMMON_SIM_SRC			124
#define GSBI1_H_CLK				125
#define GSBI2_H_CLK				126
#define GSBI3_H_CLK				127
#define GSBI4_H_CLK				128
#define GSBI5_H_CLK				129
#define GSBI6_H_CLK				130
#define GSBI7_H_CLK				131
#define GSBI8_H_CLK				132
#define GSBI9_H_CLK				133
#define GSBI10_H_CLK				134
#define GSBI11_H_CLK				135
#define GSBI12_H_CLK				136
#define GSBI1_UART_SRC				137
#define GSBI1_UART_CLK				138
#define GSBI2_UART_SRC				139
#define GSBI2_UART_CLK				140
#define GSBI3_UART_SRC				141
#define GSBI3_UART_CLK				142
#define GSBI4_UART_SRC				143
#define GSBI4_UART_CLK				144
#define GSBI5_UART_SRC				145
#define GSBI5_UART_CLK				146
#define GSBI6_UART_SRC				147
#define GSBI6_UART_CLK				148
#define GSBI7_UART_SRC				149
#define GSBI7_UART_CLK				150
#define GSBI8_UART_SRC				151
#define GSBI8_UART_CLK				152
#define GSBI9_UART_SRC				153
#define GSBI9_UART_CLK				154
#define GSBI10_UART_SRC				155
#define GSBI10_UART_CLK				156
#define GSBI11_UART_SRC				157
#define GSBI11_UART_CLK				158
#define GSBI12_UART_SRC				159
#define GSBI12_UART_CLK				160
#define GSBI1_QUP_SRC				161
#define GSBI1_QUP_CLK				162
#define GSBI2_QUP_SRC				163
#define GSBI2_QUP_CLK				164
#define GSBI3_QUP_SRC				165
#define GSBI3_QUP_CLK				166
#define GSBI4_QUP_SRC				167
#define GSBI4_QUP_CLK				168
#define GSBI5_QUP_SRC				169
#define GSBI5_QUP_CLK				170
#define GSBI6_QUP_SRC				171
#define GSBI6_QUP_CLK				172
#define GSBI7_QUP_SRC				173
#define GSBI7_QUP_CLK				174
#define GSBI8_QUP_SRC				175
#define GSBI8_QUP_CLK				176
#define GSBI9_QUP_SRC				177
#define GSBI9_QUP_CLK				178
#define GSBI10_QUP_SRC				179
#define GSBI10_QUP_CLK				180
#define GSBI11_QUP_SRC				181
#define GSBI11_QUP_CLK				182
#define GSBI12_QUP_SRC				183
#define GSBI12_QUP_CLK				184
#define GSBI1_SIM_CLK				185
#define GSBI2_SIM_CLK				186
#define GSBI3_SIM_CLK				187
#define GSBI4_SIM_CLK				188
#define GSBI5_SIM_CLK				189
#define GSBI6_SIM_CLK				190
#define GSBI7_SIM_CLK				191
#define GSBI8_SIM_CLK				192
#define GSBI9_SIM_CLK				193
#define GSBI10_SIM_CLK				194
#define GSBI11_SIM_CLK				195
#define GSBI12_SIM_CLK				196
#define SPDM_CFG_H_CLK				197
#define SPDM_MSTR_H_CLK				198
#define SPDM_FF_CLK_SRC				199
#define SPDM_FF_CLK				200
#define SEC_CTRL_CLK				201
#define SEC_CTRL_ACC_CLK_SRC			202
#define SEC_CTRL_ACC_CLK			203
#define TLMM_H_CLK				204
#define TLMM_CLK				205
#define MARM_CLK_SRC				206
#define MARM_CLK				207
#define MAHB1_SRC				208
#define MAHB1_CLK				209
#define SFAB_MSS_S_H_CLK			210
#define MAHB2_SRC				211
#define MAHB2_CLK				212
#define MSS_MODEM_CLK_SRC			213
#define MSS_MODEM_CXO_CLK			214
#define MSS_SLP_CLK				215
#define MSS_SYS_REF_CLK				216
#define TSSC_CLK_SRC				217
#define TSSC_CLK				218
#define PDM_SRC					219
#define PDM_CLK					220
#define GP0_SRC					221
#define GP0_CLK					222
#define GP1_SRC					223
#define GP1_CLK					224
#define GP2_SRC					225
#define GP2_CLK					226
#define PMEM_CLK				227
#define MPM_CLK					228
#define EBI1_ASFAB_SRC				229
#define EBI1_CLK_SRC				230
#define EBI1_CH0_CLK				231
#define EBI1_CH1_CLK				232
#define SFAB_SMPSS_S_H_CLK			233
#define PRNG_SRC				234
#define PRNG_CLK				235
#define PXO_SRC					236
#define LPASS_CXO_CLK				237
#define LPASS_PXO_CLK				238
#define SPDM_CY_PORT0_CLK			239
#define SPDM_CY_PORT1_CLK			240
#define SPDM_CY_PORT2_CLK			241
#define SPDM_CY_PORT3_CLK			242
#define SPDM_CY_PORT4_CLK			243
#define SPDM_CY_PORT5_CLK			244
#define SPDM_CY_PORT6_CLK			245
#define SPDM_CY_PORT7_CLK			246
#define PLL0					247
#define PLL0_VOTE				248
#define PLL5					249
#define PLL6					250
#define PLL6_VOTE				251
#define PLL8					252
#define PLL8_VOTE				253
#define PLL9					254
#define PLL10					255
#define PLL11					256
#define PLL12					257

#endif
