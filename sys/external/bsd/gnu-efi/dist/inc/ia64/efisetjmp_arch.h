/*	$NetBSD: efisetjmp_arch.h,v 1.2 2018/08/16 18:24:36 jmcneill Exp $	*/

#ifndef GNU_EFI_IA64_SETJMP_H
#define GNU_EFI_IA64_SETJMP_H

#define JMPBUF_ALIGN 0x10

typedef struct {
	UINT64	F2[2];
	UINT64	F3[2];
	UINT64	F4[2];
	UINT64	F5[2];
	UINT64	F16[2];
	UINT64	F17[2];
	UINT64	F18[2];
	UINT64	F19[2];
	UINT64	F20[2];
	UINT64	F21[2];
	UINT64	F22[2];
	UINT64	F23[2];
	UINT64	F24[2];
	UINT64	F25[2];
	UINT64	F26[2];
	UINT64	F27[2];
	UINT64	F28[2];
	UINT64	F29[2];
	UINT64	F30[2];
	UINT64	F31[2];
	UINT64	R4;
	UINT64	R5;
	UINT64	R6;
	UINT64	R7;
	UINT64	SP;
	UINT64	BR0;
	UINT64	BR1;
	UINT64	BR2;
	UINT64	BR3;
	UINT64	BR4;
	UINT64	BR5;
	UINT64	InitialUNAT;
	UINT64	AfterSpillUNAT;
	UINT64	PFS;
	UINT64	BSP;
	UINT64	Predicates;
	UINT64	LoopCount;
	UINT64	FPSR;
} EFI_ALIGN(JMPBUF_ALIGN) jmp_buf;

#endif /* GNU_EFI_IA64_SETJMP_H */
