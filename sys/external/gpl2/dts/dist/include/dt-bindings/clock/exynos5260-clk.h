/*	$NetBSD: exynos5260-clk.h,v 1.1.1.1 2017/06/15 20:14:23 jmcneill Exp $	*/

/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 * Author: Rahul Sharma <rahul.sharma@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Provides Constants for Exynos5260 clocks.
*/

#ifndef _DT_BINDINGS_CLK_EXYNOS5260_H
#define _DT_BINDINGS_CLK_EXYNOS5260_H

/* Clock names: <cmu><type><IP> */

/* List Of Clocks For CMU_TOP */

#define TOP_FOUT_DISP_PLL				1
#define TOP_FOUT_AUD_PLL				2
#define TOP_MOUT_AUDTOP_PLL_USER			3
#define TOP_MOUT_AUD_PLL				4
#define TOP_MOUT_DISP_PLL				5
#define TOP_MOUT_BUSTOP_PLL_USER			6
#define TOP_MOUT_MEMTOP_PLL_USER			7
#define TOP_MOUT_MEDIATOP_PLL_USER			8
#define TOP_MOUT_DISP_DISP_333				9
#define TOP_MOUT_ACLK_DISP_333				10
#define TOP_MOUT_DISP_DISP_222				11
#define TOP_MOUT_ACLK_DISP_222				12
#define TOP_MOUT_DISP_MEDIA_PIXEL			13
#define TOP_MOUT_FIMD1					14
#define TOP_MOUT_SCLK_PERI_SPI0_CLK			15
#define TOP_MOUT_SCLK_PERI_SPI1_CLK			16
#define TOP_MOUT_SCLK_PERI_SPI2_CLK			17
#define TOP_MOUT_SCLK_PERI_UART0_UCLK			18
#define TOP_MOUT_SCLK_PERI_UART2_UCLK			19
#define TOP_MOUT_SCLK_PERI_UART1_UCLK			20
#define TOP_MOUT_BUS4_BUSTOP_100			21
#define TOP_MOUT_BUS4_BUSTOP_400			22
#define TOP_MOUT_BUS3_BUSTOP_100			23
#define TOP_MOUT_BUS3_BUSTOP_400			24
#define TOP_MOUT_BUS2_BUSTOP_400			25
#define TOP_MOUT_BUS2_BUSTOP_100			26
#define TOP_MOUT_BUS1_BUSTOP_100			27
#define TOP_MOUT_BUS1_BUSTOP_400			28
#define TOP_MOUT_SCLK_FSYS_USB				29
#define TOP_MOUT_SCLK_FSYS_MMC0_SDCLKIN_A		30
#define TOP_MOUT_SCLK_FSYS_MMC1_SDCLKIN_A		31
#define TOP_MOUT_SCLK_FSYS_MMC2_SDCLKIN_A		32
#define TOP_MOUT_SCLK_FSYS_MMC0_SDCLKIN_B		33
#define TOP_MOUT_SCLK_FSYS_MMC1_SDCLKIN_B		34
#define TOP_MOUT_SCLK_FSYS_MMC2_SDCLKIN_B		35
#define TOP_MOUT_ACLK_ISP1_266				36
#define TOP_MOUT_ISP1_MEDIA_266				37
#define TOP_MOUT_ACLK_ISP1_400				38
#define TOP_MOUT_ISP1_MEDIA_400				39
#define TOP_MOUT_SCLK_ISP1_SPI0				40
#define TOP_MOUT_SCLK_ISP1_SPI1				41
#define TOP_MOUT_SCLK_ISP1_UART				42
#define TOP_MOUT_SCLK_ISP1_SENSOR2			43
#define TOP_MOUT_SCLK_ISP1_SENSOR1			44
#define TOP_MOUT_SCLK_ISP1_SENSOR0			45
#define TOP_MOUT_ACLK_MFC_333				46
#define TOP_MOUT_MFC_BUSTOP_333				47
#define TOP_MOUT_ACLK_G2D_333				48
#define TOP_MOUT_G2D_BUSTOP_333				49
#define TOP_MOUT_ACLK_GSCL_FIMC				50
#define TOP_MOUT_GSCL_BUSTOP_FIMC			51
#define TOP_MOUT_ACLK_GSCL_333				52
#define TOP_MOUT_GSCL_BUSTOP_333			53
#define TOP_MOUT_ACLK_GSCL_400				54
#define TOP_MOUT_M2M_MEDIATOP_400			55
#define TOP_DOUT_ACLK_MFC_333				56
#define TOP_DOUT_ACLK_G2D_333				57
#define TOP_DOUT_SCLK_ISP1_SENSOR2_A			58
#define TOP_DOUT_SCLK_ISP1_SENSOR1_A			59
#define TOP_DOUT_SCLK_ISP1_SENSOR0_A			60
#define TOP_DOUT_ACLK_GSCL_FIMC				61
#define TOP_DOUT_ACLK_GSCL_400				62
#define TOP_DOUT_ACLK_GSCL_333				63
#define TOP_DOUT_SCLK_ISP1_SPI0_B			64
#define TOP_DOUT_SCLK_ISP1_SPI0_A			65
#define TOP_DOUT_ACLK_ISP1_400				66
#define TOP_DOUT_ACLK_ISP1_266				67
#define TOP_DOUT_SCLK_ISP1_UART				68
#define TOP_DOUT_SCLK_ISP1_SPI1_B			69
#define TOP_DOUT_SCLK_ISP1_SPI1_A			70
#define TOP_DOUT_SCLK_ISP1_SENSOR2_B			71
#define TOP_DOUT_SCLK_ISP1_SENSOR1_B			72
#define TOP_DOUT_SCLK_ISP1_SENSOR0_B			73
#define TOP_DOUTTOP__SCLK_HPM_TARGETCLK			74
#define TOP_DOUT_SCLK_DISP_PIXEL			75
#define TOP_DOUT_ACLK_DISP_222				76
#define TOP_DOUT_ACLK_DISP_333				77
#define TOP_DOUT_ACLK_BUS4_100				78
#define TOP_DOUT_ACLK_BUS4_400				79
#define TOP_DOUT_ACLK_BUS3_100				80
#define TOP_DOUT_ACLK_BUS3_400				81
#define TOP_DOUT_ACLK_BUS2_100				82
#define TOP_DOUT_ACLK_BUS2_400				83
#define TOP_DOUT_ACLK_BUS1_100				84
#define TOP_DOUT_ACLK_BUS1_400				85
#define TOP_DOUT_SCLK_PERI_SPI1_B			86
#define TOP_DOUT_SCLK_PERI_SPI1_A			87
#define TOP_DOUT_SCLK_PERI_SPI0_B			88
#define TOP_DOUT_SCLK_PERI_SPI0_A			89
#define TOP_DOUT_SCLK_PERI_UART0			90
#define TOP_DOUT_SCLK_PERI_UART2			91
#define TOP_DOUT_SCLK_PERI_UART1			92
#define TOP_DOUT_SCLK_PERI_SPI2_B			93
#define TOP_DOUT_SCLK_PERI_SPI2_A			94
#define TOP_DOUT_ACLK_PERI_AUD				95
#define TOP_DOUT_ACLK_PERI_66				96
#define TOP_DOUT_SCLK_FSYS_MMC0_SDCLKIN_B		97
#define TOP_DOUT_SCLK_FSYS_MMC0_SDCLKIN_A		98
#define TOP_DOUT_SCLK_FSYS_USBDRD30_SUSPEND_CLK		99
#define TOP_DOUT_ACLK_FSYS_200				100
#define TOP_DOUT_SCLK_FSYS_MMC2_SDCLKIN_B		101
#define TOP_DOUT_SCLK_FSYS_MMC2_SDCLKIN_A		102
#define TOP_DOUT_SCLK_FSYS_MMC1_SDCLKIN_B		103
#define TOP_DOUT_SCLK_FSYS_MMC1_SDCLKIN_A		104
#define TOP_SCLK_FIMD1					105
#define TOP_SCLK_MMC2					106
#define TOP_SCLK_MMC1					107
#define TOP_SCLK_MMC0					108
#define PHYCLK_DPTX_PHY_CH3_TXD_CLK			109
#define PHYCLK_DPTX_PHY_CH2_TXD_CLK			110
#define PHYCLK_DPTX_PHY_CH1_TXD_CLK			111
#define PHYCLK_DPTX_PHY_CH0_TXD_CLK			112
#define phyclk_hdmi_phy_tmds_clko			113
#define PHYCLK_HDMI_PHY_PIXEL_CLKO			114
#define PHYCLK_HDMI_LINK_O_TMDS_CLKHI			115
#define PHYCLK_MIPI_DPHY_4L_M_TXBYTECLKHS		116
#define PHYCLK_DPTX_PHY_O_REF_CLK_24M			117
#define PHYCLK_DPTX_PHY_CLK_DIV2			118
#define PHYCLK_MIPI_DPHY_4L_M_RXCLKESC0			119
#define PHYCLK_USBHOST20_PHY_PHYCLOCK			120
#define PHYCLK_USBHOST20_PHY_FREECLK			121
#define PHYCLK_USBHOST20_PHY_CLK48MOHCI			122
#define PHYCLK_USBDRD30_UDRD30_PIPE_PCLK		123
#define PHYCLK_USBDRD30_UDRD30_PHYCLOCK			124
#define TOP_NR_CLK					125


/* List Of Clocks For CMU_EGL */

#define EGL_FOUT_EGL_PLL				1
#define EGL_FOUT_EGL_DPLL				2
#define EGL_MOUT_EGL_B					3
#define EGL_MOUT_EGL_PLL				4
#define EGL_DOUT_EGL_PLL				5
#define EGL_DOUT_EGL_PCLK_DBG				6
#define EGL_DOUT_EGL_ATCLK				7
#define EGL_DOUT_PCLK_EGL				8
#define EGL_DOUT_ACLK_EGL				9
#define EGL_DOUT_EGL2					10
#define EGL_DOUT_EGL1					11
#define EGL_NR_CLK					12


/* List Of Clocks For CMU_KFC */

#define KFC_FOUT_KFC_PLL				1
#define KFC_MOUT_KFC_PLL				2
#define KFC_MOUT_KFC					3
#define KFC_DOUT_KFC_PLL				4
#define KFC_DOUT_PCLK_KFC				5
#define KFC_DOUT_ACLK_KFC				6
#define KFC_DOUT_KFC_PCLK_DBG				7
#define KFC_DOUT_KFC_ATCLK				8
#define KFC_DOUT_KFC2					9
#define KFC_DOUT_KFC1					10
#define KFC_NR_CLK					11


/* List Of Clocks For CMU_MIF */

#define MIF_FOUT_MEM_PLL				1
#define MIF_FOUT_MEDIA_PLL				2
#define MIF_FOUT_BUS_PLL				3
#define MIF_MOUT_CLK2X_PHY				4
#define MIF_MOUT_MIF_DREX2X				5
#define MIF_MOUT_CLKM_PHY				6
#define MIF_MOUT_MIF_DREX				7
#define MIF_MOUT_MEDIA_PLL				8
#define MIF_MOUT_BUS_PLL				9
#define MIF_MOUT_MEM_PLL				10
#define MIF_DOUT_ACLK_BUS_100				11
#define MIF_DOUT_ACLK_BUS_200				12
#define MIF_DOUT_ACLK_MIF_466				13
#define MIF_DOUT_CLK2X_PHY				14
#define MIF_DOUT_CLKM_PHY				15
#define MIF_DOUT_BUS_PLL				16
#define MIF_DOUT_MEM_PLL				17
#define MIF_DOUT_MEDIA_PLL				18
#define MIF_CLK_LPDDR3PHY_WRAP1				19
#define MIF_CLK_LPDDR3PHY_WRAP0				20
#define MIF_CLK_MONOCNT					21
#define MIF_CLK_MIF_RTC					22
#define MIF_CLK_DREX1					23
#define MIF_CLK_DREX0					24
#define MIF_CLK_INTMEM					25
#define MIF_SCLK_LPDDR3PHY_WRAP_U1			26
#define MIF_SCLK_LPDDR3PHY_WRAP_U0			27
#define MIF_NR_CLK					28


/* List Of Clocks For CMU_G3D */

#define G3D_FOUT_G3D_PLL				1
#define G3D_MOUT_G3D_PLL				2
#define G3D_DOUT_PCLK_G3D				3
#define G3D_DOUT_ACLK_G3D				4
#define G3D_CLK_G3D_HPM					5
#define G3D_CLK_G3D					6
#define G3D_NR_CLK					7


/* List Of Clocks For CMU_AUD */

#define AUD_MOUT_SCLK_AUD_PCM				1
#define AUD_MOUT_SCLK_AUD_I2S				2
#define AUD_MOUT_AUD_PLL_USER				3
#define AUD_DOUT_ACLK_AUD_131				4
#define AUD_DOUT_SCLK_AUD_UART				5
#define AUD_DOUT_SCLK_AUD_PCM				6
#define AUD_DOUT_SCLK_AUD_I2S				7
#define AUD_CLK_AUD_UART				8
#define AUD_CLK_PCM					9
#define AUD_CLK_I2S					10
#define AUD_CLK_DMAC					11
#define AUD_CLK_SRAMC					12
#define AUD_SCLK_AUD_UART				13
#define AUD_SCLK_PCM					14
#define AUD_SCLK_I2S					15
#define AUD_NR_CLK					16


/* List Of Clocks For CMU_MFC */

#define MFC_MOUT_ACLK_MFC_333_USER			1
#define MFC_DOUT_PCLK_MFC_83				2
#define MFC_CLK_MFC					3
#define MFC_CLK_SMMU2_MFCM1				4
#define MFC_CLK_SMMU2_MFCM0				5
#define MFC_NR_CLK					6


/* List Of Clocks For CMU_GSCL */

#define GSCL_MOUT_ACLK_CSIS				1
#define GSCL_MOUT_ACLK_GSCL_FIMC_USER			2
#define GSCL_MOUT_ACLK_M2M_400_USER			3
#define GSCL_MOUT_ACLK_GSCL_333_USER			4
#define GSCL_DOUT_ACLK_CSIS_200				5
#define GSCL_DOUT_PCLK_M2M_100				6
#define GSCL_CLK_PIXEL_GSCL1				7
#define GSCL_CLK_PIXEL_GSCL0				8
#define GSCL_CLK_MSCL1					9
#define GSCL_CLK_MSCL0					10
#define GSCL_CLK_GSCL1					11
#define GSCL_CLK_GSCL0					12
#define GSCL_CLK_FIMC_LITE_D				13
#define GSCL_CLK_FIMC_LITE_B				14
#define GSCL_CLK_FIMC_LITE_A				15
#define GSCL_CLK_CSIS1					16
#define GSCL_CLK_CSIS0					17
#define GSCL_CLK_SMMU3_LITE_D				18
#define GSCL_CLK_SMMU3_LITE_B				19
#define GSCL_CLK_SMMU3_LITE_A				20
#define GSCL_CLK_SMMU3_GSCL0				21
#define GSCL_CLK_SMMU3_GSCL1				22
#define GSCL_CLK_SMMU3_MSCL0				23
#define GSCL_CLK_SMMU3_MSCL1				24
#define GSCL_SCLK_CSIS1_WRAP				25
#define GSCL_SCLK_CSIS0_WRAP				26
#define GSCL_NR_CLK					27


/* List Of Clocks For CMU_FSYS */

#define FSYS_MOUT_PHYCLK_USBHOST20_PHYCLK_USER		1
#define FSYS_MOUT_PHYCLK_USBHOST20_FREECLK_USER		2
#define FSYS_MOUT_PHYCLK_USBHOST20_CLK48MOHCI_USER	3
#define FSYS_MOUT_PHYCLK_USBDRD30_PIPE_PCLK_USER	4
#define FSYS_MOUT_PHYCLK_USBDRD30_PHYCLOCK_USER		5
#define FSYS_CLK_TSI					6
#define FSYS_CLK_USBLINK				7
#define FSYS_CLK_USBHOST20				8
#define FSYS_CLK_USBDRD30				9
#define FSYS_CLK_SROMC					10
#define FSYS_CLK_PDMA					11
#define FSYS_CLK_MMC2					12
#define FSYS_CLK_MMC1					13
#define FSYS_CLK_MMC0					14
#define FSYS_CLK_RTIC					15
#define FSYS_CLK_SMMU_RTIC				16
#define FSYS_PHYCLK_USBDRD30				17
#define FSYS_PHYCLK_USBHOST20				18
#define FSYS_NR_CLK					19


/* List Of Clocks For CMU_PERI */

#define PERI_MOUT_SCLK_SPDIF				1
#define PERI_MOUT_SCLK_I2SCOD				2
#define PERI_MOUT_SCLK_PCM				3
#define PERI_DOUT_I2S					4
#define PERI_DOUT_PCM					5
#define PERI_CLK_WDT_KFC				6
#define PERI_CLK_WDT_EGL				7
#define PERI_CLK_HSIC3					8
#define PERI_CLK_HSIC2					9
#define PERI_CLK_HSIC1					10
#define PERI_CLK_HSIC0					11
#define PERI_CLK_PCM					12
#define PERI_CLK_MCT					13
#define PERI_CLK_I2S					14
#define PERI_CLK_I2CHDMI				15
#define PERI_CLK_I2C7					16
#define PERI_CLK_I2C6					17
#define PERI_CLK_I2C5					18
#define PERI_CLK_I2C4					19
#define PERI_CLK_I2C9					20
#define PERI_CLK_I2C8					21
#define PERI_CLK_I2C11					22
#define PERI_CLK_I2C10					23
#define PERI_CLK_HDMICEC				24
#define PERI_CLK_EFUSE_WRITER				25
#define PERI_CLK_ABB					26
#define PERI_CLK_UART2					27
#define PERI_CLK_UART1					28
#define PERI_CLK_UART0					29
#define PERI_CLK_ADC					30
#define PERI_CLK_TMU4					31
#define PERI_CLK_TMU3					32
#define PERI_CLK_TMU2					33
#define PERI_CLK_TMU1					34
#define PERI_CLK_TMU0					35
#define PERI_CLK_SPI2					36
#define PERI_CLK_SPI1					37
#define PERI_CLK_SPI0					38
#define PERI_CLK_SPDIF					39
#define PERI_CLK_PWM					40
#define PERI_CLK_UART4					41
#define PERI_CLK_CHIPID					42
#define PERI_CLK_PROVKEY0				43
#define PERI_CLK_PROVKEY1				44
#define PERI_CLK_SECKEY					45
#define PERI_CLK_TOP_RTC				46
#define PERI_CLK_TZPC10					47
#define PERI_CLK_TZPC9					48
#define PERI_CLK_TZPC8					49
#define PERI_CLK_TZPC7					50
#define PERI_CLK_TZPC6					51
#define PERI_CLK_TZPC5					52
#define PERI_CLK_TZPC4					53
#define PERI_CLK_TZPC3					54
#define PERI_CLK_TZPC2					55
#define PERI_CLK_TZPC1					56
#define PERI_CLK_TZPC0					57
#define PERI_SCLK_UART2					58
#define PERI_SCLK_UART1					59
#define PERI_SCLK_UART0					60
#define PERI_SCLK_SPI2					61
#define PERI_SCLK_SPI1					62
#define PERI_SCLK_SPI0					63
#define PERI_SCLK_SPDIF					64
#define PERI_SCLK_I2S					65
#define PERI_SCLK_PCM1					66
#define PERI_NR_CLK					67


/* List Of Clocks For CMU_DISP */

#define DISP_MOUT_SCLK_HDMI_SPDIF			1
#define DISP_MOUT_SCLK_HDMI_PIXEL			2
#define DISP_MOUT_PHYCLK_MIPI_DPHY_4LMRXCLK_ESC0_USER	3
#define DISP_MOUT_PHYCLK_HDMI_PHY_TMDS_CLKO_USER	4
#define DISP_MOUT_PHYCLK_HDMI_PHY_REF_CLKO_USER		5
#define DISP_MOUT_HDMI_PHY_PIXEL			6
#define DISP_MOUT_PHYCLK_HDMI_LINK_O_TMDS_CLKHI_USER	7
#define DISP_MOUT_PHYCLK_MIPI_DPHY_4L_M_TXBYTE_CLKHS	8
#define DISP_MOUT_PHYCLK_DPTX_PHY_O_REF_CLK_24M_USER	9
#define DISP_MOUT_PHYCLK_DPTX_PHY_CLK_DIV2_USER		10
#define DISP_MOUT_PHYCLK_DPTX_PHY_CH3_TXD_CLK_USER	11
#define DISP_MOUT_PHYCLK_DPTX_PHY_CH2_TXD_CLK_USER	12
#define DISP_MOUT_PHYCLK_DPTX_PHY_CH1_TXD_CLK_USER	13
#define DISP_MOUT_PHYCLK_DPTX_PHY_CH0_TXD_CLK_USER	14
#define DISP_MOUT_ACLK_DISP_222_USER			15
#define DISP_MOUT_SCLK_DISP_PIXEL_USER			16
#define DISP_MOUT_ACLK_DISP_333_USER			17
#define DISP_DOUT_SCLK_HDMI_PHY_PIXEL_CLKI		18
#define DISP_DOUT_SCLK_FIMD1_EXTCLKPLL			19
#define DISP_DOUT_PCLK_DISP_111				20
#define DISP_CLK_SMMU_TV				21
#define DISP_CLK_SMMU_FIMD1M1				22
#define DISP_CLK_SMMU_FIMD1M0				23
#define DISP_CLK_PIXEL_MIXER				24
#define DISP_CLK_PIXEL_DISP				25
#define DISP_CLK_MIXER					26
#define DISP_CLK_MIPIPHY				27
#define DISP_CLK_HDMIPHY				28
#define DISP_CLK_HDMI					29
#define DISP_CLK_FIMD1					30
#define DISP_CLK_DSIM1					31
#define DISP_CLK_DPPHY					32
#define DISP_CLK_DP					33
#define DISP_SCLK_PIXEL					34
#define DISP_MOUT_HDMI_PHY_PIXEL_USER			35
#define DISP_NR_CLK					36


/* List Of Clocks For CMU_G2D */

#define G2D_MOUT_ACLK_G2D_333_USER			1
#define G2D_DOUT_PCLK_G2D_83				2
#define G2D_CLK_SMMU3_JPEG				3
#define G2D_CLK_MDMA					4
#define G2D_CLK_JPEG					5
#define G2D_CLK_G2D					6
#define G2D_CLK_SSS					7
#define G2D_CLK_SLIM_SSS				8
#define G2D_CLK_SMMU_SLIM_SSS				9
#define G2D_CLK_SMMU_SSS				10
#define G2D_CLK_SMMU_MDMA				11
#define G2D_CLK_SMMU3_G2D				12
#define G2D_NR_CLK					13


/* List Of Clocks For CMU_ISP */

#define ISP_MOUT_ISP_400_USER				1
#define ISP_MOUT_ISP_266_USER				2
#define ISP_DOUT_SCLK_MPWM				3
#define ISP_DOUT_CA5_PCLKDBG				4
#define ISP_DOUT_CA5_ATCLKIN				5
#define ISP_DOUT_PCLK_ISP_133				6
#define ISP_DOUT_PCLK_ISP_66				7
#define ISP_CLK_GIC					8
#define ISP_CLK_WDT					9
#define ISP_CLK_UART					10
#define ISP_CLK_SPI1					11
#define ISP_CLK_SPI0					12
#define ISP_CLK_SMMU_SCALERP				13
#define ISP_CLK_SMMU_SCALERC				14
#define ISP_CLK_SMMU_ISPCX				15
#define ISP_CLK_SMMU_ISP				16
#define ISP_CLK_SMMU_FD					17
#define ISP_CLK_SMMU_DRC				18
#define ISP_CLK_PWM					19
#define ISP_CLK_MTCADC					20
#define ISP_CLK_MPWM					21
#define ISP_CLK_MCUCTL					22
#define ISP_CLK_I2C1					23
#define ISP_CLK_I2C0					24
#define ISP_CLK_FIMC_SCALERP				25
#define ISP_CLK_FIMC_SCALERC				26
#define ISP_CLK_FIMC					27
#define ISP_CLK_FIMC_FD					28
#define ISP_CLK_FIMC_DRC				29
#define ISP_CLK_CA5					30
#define ISP_SCLK_SPI0_EXT				31
#define ISP_SCLK_SPI1_EXT				32
#define ISP_SCLK_UART_EXT				33
#define ISP_NR_CLK					34

#endif
