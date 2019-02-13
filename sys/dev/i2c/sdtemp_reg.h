/*	$NetBSD: sdtemp_reg.h,v 1.13 2018/02/22 10:09:12 msaitoh Exp $	*/

/*
 * Copyright (c) 2009 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Paul Goyette.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _DEV_I2C_SDTEMPREG_H
#define _DEV_I2C_SDTEMPREG_H

/*
 * Following definitions derived from JEDEC Standard 21-C section 4.7
 * available at http://www.jedec.org/download/search/4_07R15.pdf
 */
#define	SDTEMP_ADDRMASK			0x3f8
#define	SDTEMP_ADDR			0x18	/* I2C address 001 1xxx */

#define	SDTEMP_REG_CAPABILITY		0x00
#define	SDTEMP_REG_CONFIG		0x01
#define	SDTEMP_REG_UPPER_LIM		0x02
#define	SDTEMP_REG_LOWER_LIM		0x03
#define	SDTEMP_REG_CRIT_LIM		0x04
#define	SDTEMP_REG_AMBIENT_TEMP		0x05
#define	SDTEMP_REG_MFG_ID		0x06
#define	SDTEMP_REG_DEV_REV		0x07

#define	SDTEMP_CAP_HAS_ALARM		0x0001
#define	SDTEMP_CAP_ACCURACY_1C		0x0002
#define	SDTEMP_CAP_WIDER_RANGE		0x0004
#define	SDTEMP_CAP_RESOLUTION		0x0018
#define		SDTEMP_CAP_RESOLUTION_MAX	0x0003 /* 0.0625C */
#define	SDTEMP_CAP_VHV			0x0020
#define	SDTEMP_CAP_TMOUT		0x0040
#define	SDTEMP_CAP_EVSD			0x0080


#define	SDTEMP_CONFIG_EVENT_MODE	0x0001
#define	SDTEMP_CONFIG_EVENT_POL_AH	0x0002
#define	SDTEMP_CONFIG_EVENT_CRIT_ONLY	0x0004
#define	SDTEMP_CONFIG_EVENT_ENABLED	0x0008
#define	SDTEMP_CONFIG_EVENT_STATUS	0x0010
#define	SDTEMP_CONFIG_INT_CLEAR		0x0020
#define	SDTEMP_CONFIG_WINDOW_LOCKED	0x0040
#define	SDTEMP_CONFIG_CRITICAL_LOCKED	0x0080
#define	SDTEMP_CONFIG_SHUTDOWN_MODE	0x0100
#define	SDTEMP_CONFIG_HYSTERESIS	0x0600

#define	SDTEMP_HYSTERESIS_NONE		0x0000
#define	SDTEMP_HYSTERESIS_15		0x0200
#define	SDTEMP_HYSTERESIS_30		0x0400
#define	SDTEMP_HYSTERESIS_60		0x0600

/*
 * Temperature is a 13-bit value in the range of -256 <= x < +256 degrees.
 * Maximum resolution is 0.0625C (1/16th degree, 4 bits), but some devices
 * may have only 0.2500C or 0.1250C (1 or 2 bits), and some devices may not
 * be able to represent negative values (not that we'd expect them, anyway).
 */
#define	SDTEMP_TEMP_MASK		0x0FFF
#define	SDTEMP_TEMP_NEGATIVE		0x1000
#define	SDTEMP_TEMP_SIGN_EXT		0xF000

/*
 * Status bits set in SDTEMP_REG_AMBIENT_TEMP only
 */
#define	SDTEMP_ABOVE_CRIT		0x8000
#define	SDTEMP_ABOVE_UPPER		0x4000
#define	SDTEMP_BELOW_LOWER		0x2000

/*
 * Devices known to conform to JEDEC JC42.4
 */

/* TSE2004av definitions (JEDEC Standard No. 21-C Page 4.1.6) */
#define TSE2004AV_ID			0x2200
#define TSE2004AV_MASK			0xff00	/* ID is upper 8bits */
#define TSE2004AV_REV			0x00ff	/* Revision is lower 8bits */
#define SDTEMP_IS_TSE2004AV(dev)	(((dev) & TSE2004AV_MASK) == TSE2004AV_ID)

/* Atmel */
#define	AT_MANUFACTURER_ID		0x001f
#define	AT_30TS00_DEVICE_ID		0x8201 /* Also matches 002A and 002B */
#define	AT_30TS00_MASK			0xFFFF

#define	AT2_MANUFACTURER_ID		0x1114
#define	AT2_30TSE004_DEVICE_ID		0x2200
#define	AT2_30TSE004_MASK		0xFFFF

/* Giantec Semiconductor */
#define	GT_MANUFACTURER_ID		0x1C68
#define	GT_30TS00_DEVICE_ID		0x2201
#define	GT_30TS00_MASK			0xFFFF

#define	GT2_MANUFACTURER_ID		0x132D
#define	GT2_34TS02_DEVICE_ID		0x3300
#define	GT2_34TS02_MASK			0xFFFF

/* Maxim */
#define	MAXIM_MANUFACTURER_ID		0x004D
#define	MAX_6604_DEVICE_ID		0x3E00
#define	MAX_6604_2_DEVICE_ID		0x5400
#define	MAX_6604_MASK			0xFFFF

/* Microchip */
#define	MCP_MANUFACTURER_ID		0x0054
#define	MCP_9804_DEVICE_ID		0x0200
#define	MCP_9804_MASK			0xFFFC
#define	MCP_9805_DEVICE_ID		0x0000	/* Also matches MCP9843 */
#define	MCP_9805_MASK			0xFFFE
#define	MCP_98242_DEVICE_ID		0x2000
#define	MCP_98242_MASK			0xFFFC
#define	MCP_98243_DEVICE_ID		0x2100
#define	MCP_98243_MASK			0xFFFC
#define	MCP_98244_DEVICE_ID		0x2200
#define	MCP_98244_MASK			0xFFFC
#define	MCP2_MANUFACTURER_ID		0x1055	/* PCI-SIG manufacturer ID */
#define	MCP2_EMC1501_DEVICE_ID		0x0842
#define	MCP2_EMC1501_MASK		0xFFFF

#define	SDTEMP_REG_MCP_RESOLUTION_9804	0x08 /* 9804, 9824[23] */
#define	SDTEMP_REG_MCP_RESOLUTION_98244	0x09 /* 98244 */

/* NXP Semiconductors */
/* According to datasheets, SE97 and SE98 have same ID */
#define	NXP_MANUFACTURER_ID		0x1131
#define	NXP_SE98_DEVICE_ID		0xA100
#define	NXP_SE98_MASK			0xFFFC
#define	NXP_SE97_DEVICE_ID		0xA200
#define	NXP_SE97_MASK			0xFFFC

/* Analog Devices */
#define	ADT_MANUFACTURER_ID		0x11D4
#define	ADT_7408_DEVICE_ID		0x0800	/* e.g. 0x0801 */
#define	ADT_7408_MASK			0xFFF0

/* IDT */
#define	IDT_MANUFACTURER_ID		0x00B3
#define	IDT_TS3000B3_DEVICE_ID		0x2903	/* Also matches TSE2002B3 */
#define	IDT_TS3000B3_MASK		0xFFFF
#define	IDT_TS3000GB0_DEVICE_ID		0x2913
#define	IDT_TS3000GB0_MASK		0xFFFF
#define	IDT_TS3000GB2_DEVICE_ID		0x2912	/* Also matched TSE2002GB2 */
#define	IDT_TS3000GB2_MASK		0xFFFF
#define	IDT_TS3001GB2_DEVICE_ID		0x3001
#define	IDT_TS3001GB2_MASK		0xFFFF
#define	IDT_TSE2004GB2_DEVICE_ID	0x2214
#define	IDT_TSE2004GB2_MASK		0xFFFF

#define	SDTEMP_REG_IDT_RESOLUTION	0x08 /* 2002 */

/* STmicroelectronics */
#define	STTS_MANUFACTURER_ID		0x104A
#define	STTS_424_DEVICE_ID		0x0101
#define	STTS_424_MASK			0xFFFF
#define	STTS_424E_DEVICE_ID		0x0000
#define	STTS_424E_MASK			0xFFFE
#define	STTS_3000_DEVICE_ID		0x0200
#define	STTS_3000_MASK			0xFFFF
#define	STTS_2002_DEVICE_ID		0x0300
#define	STTS_2002_MASK			0xFFFF
#define	STTS_2004_DEVICE_ID		0x2201
#define	STTS_2004_MASK			0xFFFF

/* On Semiconductor (Catalyst) */
/* According to datasheets, both the CAT6095 and CAT34TS02 have the same ID */
#define	CAT_MANUFACTURER_ID		0x1B09
#define	CAT_34TS02_DEVICE_ID		0x0800
#define	CAT_34TS02_MASK			0xFFE0
#define	CAT_34TS02C_DEVICE_ID		0x0a00
#define	CAT_34TS02C_MASK		0xFFFE
#define	CAT_34TS04_DEVICE_ID		0x2200
#define	CAT_34TS04_MASK			0xFFFF

#endif	/* _DEV_I2C_SDTEMPREG_H */
