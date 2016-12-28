/*
**	idtmon.h - General header file for the IDT Prom Monitor
**
**	Copyright 1989  Integrated Device Technology, Inc.
**	All Rights Reserved.
**
**	June 1989 - D.Cahoon
*/
#ifndef __IDTMON_H__
#define __IDTMON_H__

/*
** P_STACKSIZE is the size of the Prom Stack. 
** the prom stack grows downward 
*/
#define	P_STACKSIZE	0x2000   /* sets stack size to 8k */

/*
** this is the default value for the number of bytes to add in calculating
** the checksums in the checksum command
*/
#define CHK_SUM_CNT	0x20000	     /* number of bytes to calc chksum for */

/*
** Monitor modes
*/
#define	MODE_MONITOR	5	/* IDT Prom Monitor is executing */
#define	MODE_USER	0xa	/* USER is executing */

/*
** memory reference widths
*/
#define	SW_BYTE		1
#define	SW_HALFWORD	2
#define	SW_WORD		4
#define SW_TRIBYTEL	12
#define SW_TRIBYTER	20

#ifdef CLANGUAGE
typedef struct {
	unsigned int	mem_size;
	unsigned int	icache_size;
	unsigned int	dcache_size;
	} mem_config;

#endif CLANGUAGE

/*
** general equates for diagnostics and boolean functions
*/
#define	PASS			0
#define	FAIL			1

#ifndef	TRUE
#define	TRUE			1
#endif	TRUE
#ifndef	NULL
#define	NULL			0
#endif	NULL

#ifndef	FALSE
#define	FALSE			0
#endif	FALSE


/*
**	portablility equates
*/

#ifndef	BOOL
#define BOOL	unsigned int
#endif	BOOL

#ifndef GLOBAL
#define GLOBAL	/**/
#endif  GLOBAL

#ifndef MLOCAL
#define MLOCAL	static
#endif  MLOCAL


#define CONST

#define u_char	unsigned char
#define u_short unsigned short
#define u_int	unsigned int

#define sllv sll
#define srlv srl
/*
**	debugger macros for assembly language routines. Allows the 
**	programmer to set up the necessary stack frame info
**	required by debuggers to do stack traces.
*/

#define	FRAME(name,frm_reg,offset,ret_reg)	\
	.globl	name;				\
	.ent	name;				\
name:;						\
	.frame	frm_reg,offset,ret_reg
#define ENDFRAME(name) 				\
	.end name
#endif /* __IDTMON_H__ */
