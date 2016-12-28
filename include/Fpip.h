/*
**	fpip.h - header file for floating point exception handler
**
**	Copyright 1990 Integrated Device Technology, Inc.
**	All Rights Reserved
**
*/

/*
**
**			USER SPECIFIC DEFINITIONS
**
*/

/*
**		     CP1 => FLOATING POINT REGISTERS			 
*/
#ifndef __FPIP_H__
#define  __FPIP_H__

#define FP_IRR		$0		/* implementation/revision register */
#define FP_CSR		$31		/* control/status register          */

#define fNaN		0x7fbfffff	/* single precision Not a Number    */
#define dNaN		0x7ff7ffffffffffff   /* double precision            */
#define wNaN		0x7fffffff	     /* word			    */
		
/*
**     	FLOATING POINT EXCEPTION CAUSES in Control/Status Register 	
**		shifted right to positions 0..5
*/

#define	INEXACT 	0x1
#define	UNDERFLOW 	0x2
#define OVERFLOW	0x4 
#define ZERODIV		0x8 
#define INVALID		0x10
#define UNIMPLEMENTED   0x20

/*
**     	FLOATING POINT EXCEPTION BITS in Control/Status Register 	
*/

#define	ExINEXACT 	0x1000
#define	ExUNDERFLOW 	0x2000
#define ExOVERFLOW	0x4000
#define ExZERODIV	0x8000 
#define ExINVALID	0x10000
#define ExUNIMPL	0x20000
#define AllExceptions   0x3F000		/* all Exceptions in fp csr   */

/*
**     	FLOATING POINT TRAP ENABLE BITS in Control/Status Register 	
*/

#define	TrINEXACT 	0x80
#define	TrUNDERFLOW 	0x100
#define TrOVERFLOW	0x200 
#define TrZERODIV	0x400 
#define TrINVALID	0x800
#define EnableAll       0xF80	/* all Traps in fp csr              */

/*
**	FLOATING POINT STICKY BITS in Control/Status Register
*/

#define	StINEXACT 	0x4
#define	StUNDERFLOW 	0x8
#define StOVERFLOW	0x10 
#define StZERODIV	0x20 
#define StINVALID	0x40
#define AllSticky       0x7C		/* all Sticky bits in fp csr        */

/*
**	ROUNDING MODE bits in Control/Status Register
*/

#define fpRN		0x0		/* Rounds result to nearest value   */
#define fpRZ		0x1		/* Rounds result toward zero	    */
#define fpRP		0x2		/* Rounds result to + INFINITY      */
#define fpRM		0x3		/* Rounds result to - INFINITY      */
	
/*
**	Offset in Signal Handler Table for Exceptions
*/

#define INEXACTsig	0x0
#define UNDERFLsig	0x1
#define OVERFLsig	0x2
#define ZERODIVsig	0x3
#define INVALIDsig	0x4
#define UNIMPLsig	0x5

#ifdef CLANGUAGE
typedef struct exc_regs{
	unsigned int	CAUSE_Reg;
	unsigned int	STATUS_Reg;
	unsigned int	EPC_Reg;
	unsigned int	FPCSR_Reg;
	unsigned int	sav_FPCSR;
       }keep_regs;
#endif CLANGUAGE
#endif /*  __FPIP_H__ */
