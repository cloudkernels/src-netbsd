/*	$NetBSD: tegra210-mc.h,v 1.1.1.3 2018/06/27 16:27:08 jmcneill Exp $	*/

/* SPDX-License-Identifier: GPL-2.0 */
#ifndef DT_BINDINGS_MEMORY_TEGRA210_MC_H
#define DT_BINDINGS_MEMORY_TEGRA210_MC_H

#define TEGRA_SWGROUP_PTC	0
#define TEGRA_SWGROUP_DC	1
#define TEGRA_SWGROUP_DCB	2
#define TEGRA_SWGROUP_AFI	3
#define TEGRA_SWGROUP_AVPC	4
#define TEGRA_SWGROUP_HDA	5
#define TEGRA_SWGROUP_HC	6
#define TEGRA_SWGROUP_NVENC	7
#define TEGRA_SWGROUP_PPCS	8
#define TEGRA_SWGROUP_SATA	9
#define TEGRA_SWGROUP_MPCORE	10
#define TEGRA_SWGROUP_ISP2	11
#define TEGRA_SWGROUP_XUSB_HOST	12
#define TEGRA_SWGROUP_XUSB_DEV	13
#define TEGRA_SWGROUP_ISP2B	14
#define TEGRA_SWGROUP_TSEC	15
#define TEGRA_SWGROUP_A9AVP	16
#define TEGRA_SWGROUP_GPU	17
#define TEGRA_SWGROUP_SDMMC1A	18
#define TEGRA_SWGROUP_SDMMC2A	19
#define TEGRA_SWGROUP_SDMMC3A	20
#define TEGRA_SWGROUP_SDMMC4A	21
#define TEGRA_SWGROUP_VIC	22
#define TEGRA_SWGROUP_VI	23
#define TEGRA_SWGROUP_NVDEC	24
#define TEGRA_SWGROUP_APE	25
#define TEGRA_SWGROUP_NVJPG	26
#define TEGRA_SWGROUP_SE	27
#define TEGRA_SWGROUP_AXIAP	28
#define TEGRA_SWGROUP_ETR	29
#define TEGRA_SWGROUP_TSECB	30

#define TEGRA210_MC_RESET_AFI		0
#define TEGRA210_MC_RESET_AVPC		1
#define TEGRA210_MC_RESET_DC		2
#define TEGRA210_MC_RESET_DCB		3
#define TEGRA210_MC_RESET_HC		4
#define TEGRA210_MC_RESET_HDA		5
#define TEGRA210_MC_RESET_ISP2		6
#define TEGRA210_MC_RESET_MPCORE	7
#define TEGRA210_MC_RESET_NVENC		8
#define TEGRA210_MC_RESET_PPCS		9
#define TEGRA210_MC_RESET_SATA		10
#define TEGRA210_MC_RESET_VI		11
#define TEGRA210_MC_RESET_VIC		12
#define TEGRA210_MC_RESET_XUSB_HOST	13
#define TEGRA210_MC_RESET_XUSB_DEV	14
#define TEGRA210_MC_RESET_A9AVP		15
#define TEGRA210_MC_RESET_TSEC		16
#define TEGRA210_MC_RESET_SDMMC1	17
#define TEGRA210_MC_RESET_SDMMC2	18
#define TEGRA210_MC_RESET_SDMMC3	19
#define TEGRA210_MC_RESET_SDMMC4	20
#define TEGRA210_MC_RESET_ISP2B		21
#define TEGRA210_MC_RESET_GPU		22
#define TEGRA210_MC_RESET_NVDEC		23
#define TEGRA210_MC_RESET_APE		24
#define TEGRA210_MC_RESET_SE		25
#define TEGRA210_MC_RESET_NVJPG		26
#define TEGRA210_MC_RESET_AXIAP		27
#define TEGRA210_MC_RESET_ETR		28
#define TEGRA210_MC_RESET_TSECB		29

#endif
