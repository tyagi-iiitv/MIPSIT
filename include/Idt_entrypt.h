
/** Copyright 1989 by IDT Integrated Device Tecnology, Inc.
**
** idt_entrypt.h Header file used to link standalone programs
**		 with the IDT prom monitor.
**
** these routines access IDT prom monitor routines, and may be used
** by standalone programs that would like to use prom io
*/

/*
** PROM_LINK -- link to prom entry point
*/
#ifndef __IDT_ENTRYPT_H__
#define __IDT_ENTRYPT_H__

#define	PROM_LINK(name,entry)		\
	.globl	name;			\
	.ent	name;			\
name:	la	$2,+entry;		\
	j	$2;			\
	.end name	

#define CPU_R3000

#define	PROM_ENTRY(x)	(0xbfc00000+((x)*8))
#define PROM_RESET	PROM_ENTRY(0)
#define PROM_NOT_IMP	PROM_ENTRY(1)
#define PROM_RESTART	PROM_ENTRY(2)
#define PROM_REINIT	PROM_ENTRY(3)
#define	PROM_OPEN	PROM_ENTRY(6)
#define	PROM_READ	PROM_ENTRY(7)
#define	PROM_WRITE	PROM_ENTRY(8)
#define	PROM_IOCTL	PROM_ENTRY(9)
#define	PROM_CLOSE	PROM_ENTRY(10)
#define	PROM_GETCHAR	PROM_ENTRY(11)
#define	PROM_PUTCHAR	PROM_ENTRY(12)
#define	PROM_SHOWCHAR	PROM_ENTRY(13)
#define	PROM_GETS	PROM_ENTRY(14)
#define	PROM_PUTS	PROM_ENTRY(15)
#define	PROM_PRINTF	PROM_ENTRY(16)
#define	PROM_RETURN	PROM_ENTRY(17)
#define	PROM_RFILEINIT	PROM_ENTRY(18)
#define	PROM_ROPEN	PROM_ENTRY(19)
#define	PROM_RCLOSE	PROM_ENTRY(20)
#define	PROM_RREAD	PROM_ENTRY(21)
#define	PROM_RWRITE	PROM_ENTRY(22)
#define	PROM_RLSEEK	PROM_ENTRY(23)
#define	PROM_RPRINTF	PROM_ENTRY(24)

#define	PROM_RGETS	PROM_ENTRY(25)
#define PROM_FLUSHCACHE	PROM_ENTRY(28)
#define PROM_CLEARCACHE	PROM_ENTRY(29)
#define PROM_SETJMP	PROM_ENTRY(30)
#define PROM_LONGJMP	PROM_ENTRY(31)
#if defined(CPU_R3000)
#define PROM_UTLBEXC	PROM_ENTRY(32)
#endif
#define PROM_ATOB	PROM_ENTRY(35)
#define PROM_STRCMP	PROM_ENTRY(36)
#define PROM_STRLEN	PROM_ENTRY(37)
#define PROM_STRCPY	PROM_ENTRY(38)
#define PROM_STRCAT	PROM_ENTRY(39)
#define PROM_CMDPARSE	PROM_ENTRY(40)
#define PROM_GETRANGE	PROM_ENTRY(41)
#define PROM_TOKEN	PROM_ENTRY(42)
#define PROM_HELP	PROM_ENTRY(43)
#define PROM_TIMER_START PROM_ENTRY(44)
#define PROM_TIMER_STOP  PROM_ENTRY(45)
#define PROM_TIMERSTART PROM_ENTRY(44)
#define PROM_TIMERSTOP  PROM_ENTRY(45)
#if defined(CPU_R3000)
#define PROM_NORMEXC	PROM_ENTRY(48)
#endif
#define PROM_GETMCONF	PROM_ENTRY(55)
#define PROM_SETMCONF	PROM_ENTRY(56)
#if defined(CPU_R4000)
#define PROM_TLBEXC	PROM_ENTRY(64)
#define PROM_UTLBEXC	PROM_ENTRY(64)	/* r3000 compat */
#endif
#define PROM_NEWDEV	PROM_ENTRY(65)
#define PROM_FASTINT	PROM_ENTRY(66)
#define PROM_NORMINT	PROM_ENTRY(67)
#define PROM_NEWCMD	PROM_ENTRY(68)	/* <-- moved from 64 */

#if defined(CPU_R4000)
/* R4000 specific exception vectors */
#define PROM_XTLBEXC	PROM_ENTRY(80)
#define PROM_CACHEEXC	PROM_ENTRY(96)
#define PROM_NORMEXC	PROM_ENTRY(112)
#endif

/* Network related entrypoints */
#define PROM_TFTPOPEN	PROM_ENTRY(69)
#define PROM_TFTPCLOSE	PROM_ENTRY(70)
#define PROM_TFTPREAD	PROM_ENTRY(71)
#define PROM_TFTPWRITE	PROM_ENTRY(72)
#define PROM_TFTPLSEEK	PROM_ENTRY(73)
#define PROM_SOCSYSCALL	PROM_ENTRY(74) /* indirect socket "system calls" */

#endif /* __IDT_ENTRYPT_H__ */

