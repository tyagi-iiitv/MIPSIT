/*
** idtcpu.h -- cpu related defines
*/
#ifndef _IDTCPU_H__
#define _IDTCPU_H__

/*
** memory configuration and mapping
*/
#define K0BASE	0x80000000
#define K0SIZE	0x20000000
#define K1BASE	0xa0000000
#define K1SIZE	0x20000000
#define K2BASE	0xc0000000
#define K2SIZE	0x20000000

#define KUBASE	0
#define KUSIZE	0x80000000

/*
** Exception Vectors
*/
#define	UT_VEC	K0BASE			/* utlbmiss vector */
#define E_VEC	(K0BASE+0x80)		/* exception vevtor */
#define	R_VEC	(K1BASE+0x1fc00000)	/* reset vector */

/*
** Address conversion macros
*/
#define	K0_TO_K1(x)	((unsigned)(x)|0xA0000000)	/* kseg0 to kseg1 */
#define	K1_TO_K0(x)	((unsigned)(x)&0x9FFFFFFF)	/* kseg1 to kseg0 */
#define	K0_TO_PHYS(x)	((unsigned)(x)&0x1FFFFFFF)	/* kseg0 to physical */
#define	K1_TO_PHYS(x)	((unsigned)(x)&0x1FFFFFFF)	/* kseg1 to physical */
#define	PHYS_TO_K0(x)	((unsigned)(x)|0x80000000)	/* physical to kseg0 */
#define	PHYS_TO_K1(x)	((unsigned)(x)|0xA0000000)	/* physical to kseg1 */

/*
**	Cache size constants
*/
#define	MINCACHE	0x200		/* 512 bytes for R3041   */
#define	MAXCACHE	0x40000		/* 256*1024   256k */	

/*
** TLB resourse defines
*/
#define	N_TLB_ENTRIES	64
#define TLB_PGSIZE	0x1000
#define RANDBASE	8
#define	TLBLO_PFNMASK	0xfffff000
#define	TLBLO_PFNSHIFT	12
#define	TLBLO_N		0x800	/* non-cacheable */
#define	TLBLO_D		0x400	/* writeable */
#define	TLBLO_V		0x200	/* valid bit */
#define	TLBLO_G		0x100	/* global access bit */

#define	TLBHI_VPNMASK	0xfffff000
#define	TLBHI_VPNSHIFT	12
#define	TLBHI_PIDMASK	0xfc0
#define	TLBHI_PIDSHIFT	6
#define	TLBHI_NPID	64

#define	TLBINX_PROBE	0x80000000
#define	TLBINX_INXMASK	0x00003f00
#define	TLBINX_INXSHIFT	8

#define	TLBRAND_RANDMASK	0x00003f00
#define	TLBRAND_RANDSHIFT	8

#define	TLBCTXT_BASEMASK	0xffe00000
#define	TLBCTXT_BASESHIFT	21

#define	TLBCTXT_VPNMASK		0x001ffffc
#define	TLBCTXT_VPNSHIFT	2

#define	SR_CUMASK	0xf0000000	/* coproc usable bits */
#define	SR_CU3		0x80000000	/* Coprocessor 3 usable */
#define	SR_CU2		0x40000000	/* Coprocessor 2 usable */
#define	SR_CU1		0x20000000	/* Coprocessor 1 usable */
#define	SR_CU0		0x10000000	/* Coprocessor 0 usable */

#define	SR_BEV		0x00400000	/* use boot exception vectors */

/* Cache control bits */
#define	SR_TS		0x00200000	/* TLB shutdown */
#define	SR_PE		0x00100000	/* cache parity error */
#define	SR_CM		0x00080000	/* cache miss */
#define	SR_PZ		0x00040000	/* cache parity zero */
#define	SR_SWC		0x00020000	/* swap cache */
#define	SR_ISC		0x00010000	/* Isolate data cache */

/*
**	status register interrupt masks and bits
*/

#define	SR_IMASK	0x0000ff00	/* Interrupt mask */
#define	SR_IMASK8	0x00000000	/* mask level 8 */
#define	SR_IMASK7	0x00008000	/* mask level 7 */
#define	SR_IMASK6	0x0000c000	/* mask level 6 */
#define	SR_IMASK5	0x0000e000	/* mask level 5 */
#define	SR_IMASK4	0x0000f000	/* mask level 4 */
#define	SR_IMASK3	0x0000f800	/* mask level 3 */
#define	SR_IMASK2	0x0000fc00	/* mask level 2 */
#define	SR_IMASK1	0x0000fe00	/* mask level 1 */
#define	SR_IMASK0	0x0000ff00	/* mask level 0 */

#define	SR_IBIT8	0x00008000	/* bit level 8 */
#define	SR_IBIT7	0x00004000	/* bit level 7 */
#define	SR_IBIT6	0x00002000	/* bit level 6 */
#define	SR_IBIT5	0x00001000	/* bit level 5 */
#define	SR_IBIT4	0x00000800	/* bit level 4 */
#define	SR_IBIT3	0x00000400	/* bit level 3 */
#define	SR_IBIT2	0x00000200	/* bit level 2 */
#define	SR_IBIT1	0x00000100	/* bit level 1 */

#define	SR_KUO		0x00000020	/* old kernel/user, 0 => k, 1 => u */
#define	SR_IEO		0x00000010	/* old interrupt enable, 1 => enable */
#define	SR_KUP		0x00000008	/* prev kernel/user, 0 => k, 1 => u */
#define	SR_IEP		0x00000004	/* prev interrupt enable, 1 => enable */
#define	SR_KUC		0x00000002	/* cur kernel/user, 0 => k, 1 => u */
#define	SR_IEC		0x00000001	/* cur interrupt enable, 1 => enable */

#define	SR_IMASKSHIFT	8


/*
 * Cause Register
 */
#define	CAUSE_BD	0x80000000	/* Branch delay slot */
#define	CAUSE_CEMASK	0x30000000	/* coprocessor error */
#define	CAUSE_CESHIFT	28


#define	CAUSE_IPMASK	0x0000FF00	/* Pending interrupt mask */
#define	CAUSE_IPSHIFT	8

#define	CAUSE_EXCMASK	0x0000003C	/* Cause code bits */
#define	CAUSE_EXCSHIFT	2

/*
**  Coprocessor 0 registers
*/
#define	C0_INX		$0		/* tlb index */
#define	C0_RAND		$1		/* tlb random */
#define	C0_TLBLO	$2		/* tlb entry low */

#define	C0_CTXT		$4		/* tlb context */

#define	C0_BADVADDR	$8		/* bad virtual address */

#define	C0_TLBHI	$10		/* tlb entry hi */

#define	C0_SR		$12		/* status register */
#define	C0_CAUSE	$13		/* exception cause */
#define	C0_EPC		$14		/* exception pc */
#define	C0_PRID		$15		/* revision identifier */
#endif /* _IDTCPU_H__ */
