/*
** Copyright 1989 Integrated Device Technology, Inc.
**	All Rights Reserved
*/

/*
** idtio.h -- Header file for monitor i/o functions 
*/
#ifndef __IDTIO_H__
#define __IDTIO_H__
#define	CTRL(x)		(x&0x1f)
#define	INTR		CTRL('C')
#define	DEL		0x7f
#define	BELL		0x7
#define	LINESIZE	128
#define ACK		0x6
#define NAK		0x15
#define DLE		0x10
#define SYN		0x16

#define NICB	8

#ifndef NULL
#define NULL 0
#endif

#ifdef CLANGUAGE
/*
** device switch table - dispatch table for monitor to invoke
**		io function to drivers - one entry per driver
*/
struct dev_sw_tab {
	int	(*d_open)();	/* open routine */
	int	(*d_close)();	/* close routine */
	int	(*d_read)();	/* read doutine */
	int	(*d_write)();	/* write routinre */
	int	(*d_init)();	/* initialization routine */
	int	(*d_strategy)();	/* io startegy rouitne */
	int	(*d_ioctl)();		/* io strategy routine */
	char	*d_driver_name;		/* pointer to driver name */
	};

/*
** device init table - one for each device in the system ( ie.
**		tty0, tty1 )
**
*/
struct dev_init_tab {
	char	*dev_name;
	char	*dev_descrip;
	char	*dev_drv_name;
	int	dev_cntl;
	int	dev_unit;
	int	dev_part;
	int	dev_io_addr;
	};

/*
** io control block - analogous to a file descriptor - contains
**		the necessary information so when io reguests
**		are made (ie read(iocntb,buf,cnt) ) addresses, flags,
**		pointer to device and driver tables will be known.
*/
struct iocntb {
	char	*icb_addr;	/* user buffer address */
	int	icb_count;	/* count of char to transfer */
	int	icb_blkno;	/* random access block number */
	int	icb_errno;	/* return error number */
	int	icb_flags;	/* dev. type and status flags */
	struct dev_init_tab *icb_di; /* pointer to device init tab */
	struct dev_sw_tab *icb_dt; /* pointer to driver table */
	};
		
#endif CLANGUAGE

/*
** io access  flags
*/
#define	O_RDONLY	0
#define	O_WRONLY	1
#define	O_RDWR		2
#define	O_APPEND	0010	/* append (writes guaranteed at the end) */
#define	O_CREAT		0400
#define	O_TRUNC		01000
#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2

/*
** Request codes
*/
#define	READ	1
#define	WRITE	2

/*
** general ioctl's
*/
#define	FIOCNBLOCK	(('f'<<8)|1)	/* set non-blocking io */
#define	FIOCSCAN	(('f'<<8)|2)	/* scan device for pending input */
#define	FIOCINTBRK	(('f'<<8)|3)	/* enable break interrupt */
#define	FIOCINTBRKNOT	(('f'<<8)|4)	/* disable break interrupt */
#define FIOCCLRINT	(('f'<<8)|5)	/* clear external interrupt */

/*
** "tty" ioctl's
*/
#define	TIOCRAW		(('t'<<8)|1)	/* no special chars on char devices */
#define	TIOCFLUSH	(('t'<<8)|2)	/* flush input */
#define	TIOCPROTO	(('t'<<8)|3)	/* control pseudo console access */
#define	TIOCREOPEN	(('t'<<8)|4)	/* reopen to effect baud rate chg */
#define	TIOCBAUD	(('t'<<8)|5)	/* baud rate chg */
#endif /* __IDTIO_H__ */
