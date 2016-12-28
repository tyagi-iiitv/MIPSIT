/*
** excepthdr.h - exception code header file - contains defines
**		 for registers saved and masks required
**
**	Copyright Integrated Device Technology, Inc.
**	All Rights Reserved
*/
#ifndef __EXCEPTIONHDR_H__
#define __EXCEPTIONHDR_H__

#define NORM_EXCEPT	1
#define UTLB_EXCEPT	2
#define BRKPT_EXCEPT	3

#define VEC_CODE_LENGTH	10*4

#define	EXCMASK		0x3c	/* exception code mask - cause reg. */
				/* Hardware exception codes */
#define	EXC_INT		0	/* interrupt */
#define	EXC_MOD		4	/* TLB mod */
#define	EXC_RMISS	8	/* Read TLB Miss */
#define	EXC_WMISS	12	/* Write TLB Miss */
#define	EXC_RADE	16	/* Read Address Error */
#define	EXC_WADE	20	/* Write Address Error */
#define	EXC_IBE		24	/* Instruction Bus Error */
#define	EXC_DBE		28	/* Data Bus Error */
#define	EXC_SYSCALL	32	/* SYSCALL */
#define	EXC_BREAK	36	/* BREAKpoint */
#define	EXC_II		40	/* Illegal Instruction */
#define	EXC_CPU		44	/* CoProcessor Unusable */
#define	EXC_OV		48	/* OVerflow */
/***************************************************************************
**
**	Mnemonics for Interrupt Lines to convert line to level and masks
**
****************************************************************************/

#define SW_INT0		0x0100	/* external software interrupt 0 ~ Level 0 */
#define SW_INT1		0x0200	/* external software interrupt 1 ~ Level 1 */
#define EXT_INT0	0x0400	/* external hardware interrupt 0 ~ Level 2 */
#define EXT_INT1	0x0800	/* external hardware interrupt 1 ~ Level 3 */
#define EXT_INT2	0x1000	/* external hardware interrupt 2 ~ Level 4 */
#define EXT_INT3	0x2000	/* external hardware interrupt 3 ~ Level 5 */
#define EXT_INT4	0x4000	/* external hardware interrupt 4 ~ Level 6 */
#define EXT_INT5	0x8000	/* external hardware interrupt 5 ~ Level 7 */

#define SW_INT0_LN	0x0	/* external software interrupt 0 ~ Level 0 */
#define SW_INT1_LN	0x1	/* external software interrupt 1 ~ Level 1 */
#define EXT_INT0_LN	0x2	/* external hardware interrupt 0 ~ Level 2 */
#define EXT_INT1_LN	0x3	/* external hardware interrupt 1 ~ Level 3 */
#define EXT_INT2_LN	0x4	/* external hardware interrupt 2 ~ Level 4 */
#define EXT_INT3_LN	0x5	/* external hardware interrupt 3 ~ Level 5 */
#define EXT_INT4_LN	0x6	/* external hardware interrupt 4 ~ Level 6 */
#define EXT_INT5_LN	0x7	/* external hardware interrupt 5 ~ Level 7 */

/*
** EXCEPT_SK_SIZ -- size of stack needed by exception handling code
** address of top of stack is in fault_stack
*/
#define	EXCEPT_SK_SIZ	1024

#endif /* __EXCEPTIONHDR_H__ */

