/*	$NetBSD: xcall.h,v 1.7 2018/08/27 07:10:15 riastradh Exp $	*/

/*-
 * Copyright (c) 2007 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Andrew Doran.
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

#ifndef _SYS_XCALL_H_
#define	_SYS_XCALL_H_

#ifdef _KERNEL

#include <sys/types.h>

#define XC_HIGHPRI		0x01	/* high priority */
#define XC_HIGHPRI_IPL(ipl)	(XC_HIGHPRI | xc_encode_ipl(ipl))

typedef void (*xcfunc_t)(void *, void *);

struct cpu_info;

void		xc_init_cpu(struct cpu_info *);
void		xc_send_ipi(struct cpu_info *);
void		xc_ipi_handler(void);

void		xc__highpri_intr(void *);

uint64_t	xc_broadcast(u_int, xcfunc_t, void *, void *);
uint64_t	xc_unicast(u_int, xcfunc_t, void *, void *, struct cpu_info *);
void		xc_wait(uint64_t);

unsigned int	xc_encode_ipl(int);

#endif	/* _KERNEL */

#endif	/* _SYS_XCALL_H_ */
