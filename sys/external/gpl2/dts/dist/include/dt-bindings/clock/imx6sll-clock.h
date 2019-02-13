/*	$NetBSD: imx6sll-clock.h,v 1.1.1.1 2018/04/28 18:25:53 jmcneill Exp $	*/

// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 * Copyright 2017-2018 NXP.
 *
 */

#ifndef __DT_BINDINGS_CLOCK_IMX6SLL_H
#define __DT_BINDINGS_CLOCK_IMX6SLL_H

#define IMX6SLL_CLK_DUMMY		0
#define IMX6SLL_CLK_CKIL		1
#define IMX6SLL_CLK_OSC			2
#define IMX6SLL_PLL1_BYPASS_SRC		3
#define IMX6SLL_PLL2_BYPASS_SRC		4
#define IMX6SLL_PLL3_BYPASS_SRC		5
#define IMX6SLL_PLL4_BYPASS_SRC		6
#define IMX6SLL_PLL5_BYPASS_SRC		7
#define IMX6SLL_PLL6_BYPASS_SRC		8
#define IMX6SLL_PLL7_BYPASS_SRC		9
#define IMX6SLL_CLK_PLL1		10
#define IMX6SLL_CLK_PLL2		11
#define IMX6SLL_CLK_PLL3		12
#define IMX6SLL_CLK_PLL4		13
#define IMX6SLL_CLK_PLL5		14
#define IMX6SLL_CLK_PLL6		15
#define IMX6SLL_CLK_PLL7		16
#define IMX6SLL_PLL1_BYPASS		17
#define IMX6SLL_PLL2_BYPASS		18
#define IMX6SLL_PLL3_BYPASS		19
#define IMX6SLL_PLL4_BYPASS		20
#define IMX6SLL_PLL5_BYPASS		21
#define IMX6SLL_PLL6_BYPASS		22
#define IMX6SLL_PLL7_BYPASS		23
#define IMX6SLL_CLK_PLL1_SYS		24
#define IMX6SLL_CLK_PLL2_BUS		25
#define IMX6SLL_CLK_PLL3_USB_OTG	26
#define IMX6SLL_CLK_PLL4_AUDIO		27
#define IMX6SLL_CLK_PLL5_VIDEO		28
#define IMX6SLL_CLK_PLL6_ENET		29
#define IMX6SLL_CLK_PLL7_USB_HOST	30
#define IMX6SLL_CLK_USBPHY1		31
#define IMX6SLL_CLK_USBPHY2		32
#define IMX6SLL_CLK_USBPHY1_GATE	33
#define IMX6SLL_CLK_USBPHY2_GATE	34
#define IMX6SLL_CLK_PLL2_PFD0		35
#define IMX6SLL_CLK_PLL2_PFD1		36
#define IMX6SLL_CLK_PLL2_PFD2		37
#define IMX6SLL_CLK_PLL2_PFD3		38
#define IMX6SLL_CLK_PLL3_PFD0		39
#define IMX6SLL_CLK_PLL3_PFD1		40
#define IMX6SLL_CLK_PLL3_PFD2		41
#define IMX6SLL_CLK_PLL3_PFD3		42
#define IMX6SLL_CLK_PLL4_POST_DIV	43
#define IMX6SLL_CLK_PLL4_AUDIO_DIV	44
#define IMX6SLL_CLK_PLL5_POST_DIV	45
#define IMX6SLL_CLK_PLL5_VIDEO_DIV	46
#define IMX6SLL_CLK_PLL2_198M		47
#define IMX6SLL_CLK_PLL3_120M		48
#define IMX6SLL_CLK_PLL3_80M		49
#define IMX6SLL_CLK_PLL3_60M		50
#define IMX6SLL_CLK_STEP		51
#define IMX6SLL_CLK_PLL1_SW		52
#define IMX6SLL_CLK_AXI_ALT_SEL		53
#define IMX6SLL_CLK_AXI_SEL		54
#define IMX6SLL_CLK_PERIPH_PRE		55
#define IMX6SLL_CLK_PERIPH2_PRE		56
#define IMX6SLL_CLK_PERIPH_CLK2_SEL	57
#define IMX6SLL_CLK_PERIPH2_CLK2_SEL	58
#define IMX6SLL_CLK_PERCLK_SEL		59
#define IMX6SLL_CLK_USDHC1_SEL		60
#define IMX6SLL_CLK_USDHC2_SEL		61
#define IMX6SLL_CLK_USDHC3_SEL		62
#define IMX6SLL_CLK_SSI1_SEL		63
#define IMX6SLL_CLK_SSI2_SEL		64
#define IMX6SLL_CLK_SSI3_SEL		65
#define IMX6SLL_CLK_PXP_SEL		66
#define IMX6SLL_CLK_LCDIF_PRE_SEL	67
#define IMX6SLL_CLK_LCDIF_SEL		68
#define IMX6SLL_CLK_EPDC_PRE_SEL	69
#define IMX6SLL_CLK_SPDIF_SEL		70
#define IMX6SLL_CLK_ECSPI_SEL		71
#define IMX6SLL_CLK_UART_SEL		72
#define IMX6SLL_CLK_ARM			73
#define IMX6SLL_CLK_PERIPH		74
#define IMX6SLL_CLK_PERIPH2		75
#define IMX6SLL_CLK_PERIPH2_CLK2	76
#define IMX6SLL_CLK_PERIPH_CLK2		77
#define IMX6SLL_CLK_MMDC_PODF		78
#define IMX6SLL_CLK_AXI_PODF		79
#define IMX6SLL_CLK_AHB			80
#define IMX6SLL_CLK_IPG			81
#define IMX6SLL_CLK_PERCLK		82
#define IMX6SLL_CLK_USDHC1_PODF		83
#define IMX6SLL_CLK_USDHC2_PODF		84
#define IMX6SLL_CLK_USDHC3_PODF		85
#define IMX6SLL_CLK_SSI1_PRED		86
#define IMX6SLL_CLK_SSI2_PRED		87
#define IMX6SLL_CLK_SSI3_PRED		88
#define IMX6SLL_CLK_SSI1_PODF		89
#define IMX6SLL_CLK_SSI2_PODF		90
#define IMX6SLL_CLK_SSI3_PODF		91
#define IMX6SLL_CLK_PXP_PODF		92
#define IMX6SLL_CLK_LCDIF_PRED		93
#define IMX6SLL_CLK_LCDIF_PODF		94
#define IMX6SLL_CLK_EPDC_SEL		95
#define IMX6SLL_CLK_EPDC_PODF		96
#define IMX6SLL_CLK_SPDIF_PRED		97
#define IMX6SLL_CLK_SPDIF_PODF		98
#define IMX6SLL_CLK_ECSPI_PODF		99
#define IMX6SLL_CLK_UART_PODF		100

/* CCGR 0 */
#define IMX6SLL_CLK_AIPSTZ1		101
#define IMX6SLL_CLK_AIPSTZ2		102
#define IMX6SLL_CLK_DCP			103
#define IMX6SLL_CLK_UART2_IPG		104
#define IMX6SLL_CLK_UART2_SERIAL	105

/* CCGR 1 */
#define IMX6SLL_CLK_ECSPI1		106
#define IMX6SLL_CLK_ECSPI2		107
#define IMX6SLL_CLK_ECSPI3		108
#define IMX6SLL_CLK_ECSPI4		109
#define IMX6SLL_CLK_UART3_IPG		110
#define IMX6SLL_CLK_UART3_SERIAL	111
#define IMX6SLL_CLK_UART4_IPG		112
#define IMX6SLL_CLK_UART4_SERIAL	113
#define IMX6SLL_CLK_EPIT1		114
#define IMX6SLL_CLK_EPIT2		115
#define IMX6SLL_CLK_GPT_BUS		116
#define IMX6SLL_CLK_GPT_SERIAL		117

/* CCGR2 */
#define IMX6SLL_CLK_CSI			118
#define IMX6SLL_CLK_I2C1		119
#define IMX6SLL_CLK_I2C2		120
#define IMX6SLL_CLK_I2C3		121
#define IMX6SLL_CLK_OCOTP		122
#define IMX6SLL_CLK_LCDIF_APB		123
#define IMX6SLL_CLK_PXP			124

/* CCGR3 */
#define IMX6SLL_CLK_UART5_IPG		125
#define IMX6SLL_CLK_UART5_SERIAL	126
#define IMX6SLL_CLK_EPDC_AXI		127
#define IMX6SLL_CLK_EPDC_PIX		128
#define IMX6SLL_CLK_LCDIF_PIX		129
#define IMX6SLL_CLK_WDOG1		130
#define IMX6SLL_CLK_MMDC_P0_FAST	131
#define IMX6SLL_CLK_MMDC_P0_IPG		132
#define IMX6SLL_CLK_OCRAM		133

/* CCGR4 */
#define IMX6SLL_CLK_PWM1		134
#define IMX6SLL_CLK_PWM2		135
#define IMX6SLL_CLK_PWM3		136
#define IMX6SLL_CLK_PWM4		137

/* CCGR 5 */
#define IMX6SLL_CLK_ROM			138
#define IMX6SLL_CLK_SDMA		139
#define IMX6SLL_CLK_KPP			140
#define IMX6SLL_CLK_WDOG2		141
#define IMX6SLL_CLK_SPBA		142
#define IMX6SLL_CLK_SPDIF		143
#define IMX6SLL_CLK_SPDIF_GCLK		144
#define IMX6SLL_CLK_SSI1		145
#define IMX6SLL_CLK_SSI1_IPG		146
#define IMX6SLL_CLK_SSI2		147
#define IMX6SLL_CLK_SSI2_IPG		148
#define IMX6SLL_CLK_SSI3		149
#define IMX6SLL_CLK_SSI3_IPG		150
#define IMX6SLL_CLK_UART1_IPG		151
#define IMX6SLL_CLK_UART1_SERIAL	152

/* CCGR 6 */
#define IMX6SLL_CLK_USBOH3		153
#define IMX6SLL_CLK_USDHC1		154
#define IMX6SLL_CLK_USDHC2		155
#define IMX6SLL_CLK_USDHC3		156

#define IMX6SLL_CLK_IPP_DI0		157
#define IMX6SLL_CLK_IPP_DI1		158
#define IMX6SLL_CLK_LDB_DI0_SEL		159
#define IMX6SLL_CLK_LDB_DI0_DIV_3_5	160
#define IMX6SLL_CLK_LDB_DI0_DIV_7	161
#define IMX6SLL_CLK_LDB_DI0_DIV_SEL	162
#define IMX6SLL_CLK_LDB_DI0		163
#define IMX6SLL_CLK_LDB_DI1_SEL		164
#define IMX6SLL_CLK_LDB_DI1_DIV_3_5	165
#define IMX6SLL_CLK_LDB_DI1_DIV_7	166
#define IMX6SLL_CLK_LDB_DI1_DIV_SEL	167
#define IMX6SLL_CLK_LDB_DI1		168
#define IMX6SLL_CLK_EXTERN_AUDIO_SEL    169
#define IMX6SLL_CLK_EXTERN_AUDIO_PRED   170
#define IMX6SLL_CLK_EXTERN_AUDIO_PODF   171
#define IMX6SLL_CLK_EXTERN_AUDIO        172

#define IMX6SLL_CLK_END			173

#endif /* __DT_BINDINGS_CLOCK_IMX6SLL_H */
