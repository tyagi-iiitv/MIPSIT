#ident "$Header: setjmp.h,v 1.1 87/08/18 16:34:11 mdove Exp $"
/*	%Q%	%I%	%M%	*/

/*
 * Copyright 1985 by MIPS Computer Systems, Inc.
 */
#ifndef __SETJUMP_H__
#define __SETJUMP_H__
/*
 * jmp_buf indices
 */
#define	JB_PC		0
#define	JB_SP		1
#define	JB_FP		2
#define	JB_S0		3
#define	JB_S1		4
#define	JB_S2		5
#define	JB_S3		6
#define	JB_S4		7
#define	JB_S5		8
#define	JB_S6		9
#define	JB_S7		10

#define	JB_SIZE		11

#ifdef CLANGUAGE 
typedef int jmp_buf[JB_SIZE];	/* caller saved regs, sp, pc */
#endif
#endif /* __SETJUMP_H__ */
