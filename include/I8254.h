/* Copyright 1990 by Integrated Device Technology, Inc.
**
** i8254.h - timer/counter driver header file
*/
#ifndef __I8254_H__
#define __I8254_H__

#define TIMERCLR0 0x10
#define TIMERCLR1 0x14

#define TIM_CNTRL	0xc	/* control word offset */
#define TIM_MODE0	0
#define TIM_MODE1	2
#define TIM_MODE2	4
#define TIM_MODE3	6
#define TIM_MODE4	8
#define TIM_MODE5	0xa
#define TIM_CNTR0	0x00
#define TIM_CNTR1	0x40
#define TIM_CNTR2	0x80
#define TIM_ADDR0	0
#define TIM_ADDR1	4
#define TIM_ADDR2	8
#define TIM_RW0		0x10
#define TIM_RW1		0x20

typedef volatile struct {
	u_char	pad0[3]; u_char	timer0;
	u_char	pad1[3]; u_char	timer1;
	u_char	pad2[3]; u_char timer2;
	u_char	pad3[3]; u_char control;
	int	 clrint0;
	int	 clrint1;
	  } TIMER;
/*
** 8254 ioctl's
*/
#define CIOCMODE0	(('i'<<8)|1)	/* set mode 0 oper  */
#define CIOCMODE2	(('i'<<8)|2)	/* set mode 2 oper  */
#define CIOCMODE3	(('i'<<8)|3)	/* set mode 3 oper  */
#define CIOCMODE4	(('i'<<8)|4)	/* set mode 4 oper  */
#define CIOCINTENAB	(('i'<<8)|5)	/* enable interrupts  */
#define CIOCINTDISAB	(('i'<<8)|6)	/* disable interrupts */
#define CIOCCLRINT	(('i'<<8)|7)	/* clear the interrupt */

#define LDCOUNT	1

#endif /* __I8254_H__ */

