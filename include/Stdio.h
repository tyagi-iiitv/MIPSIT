#ifndef __STDIO_H__
#define __STDIO_H__
#define NULL 0
#define EOF -1
#define BUFSIZ 256
#define FOPEN_MAX 25
#define TMP_MAX 25

#define _IOWRT    0x0001
#define _IOSTRG   0x0002
#define _IONBF    0x0004
#define _IORW     0x0008
#define _IOEOF    0x0010
#define _IOREAD   0x0020
#define _IOLBF    0x0040
#define _IOSTDO   0x0080
#define _IOSTR    0x0100
#define _IOFBF    0x0200

#define F_OPEN 0x0200
#define F_READ 0x0400

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

#define L_tmpnam 32

typedef struct {
	int _fd;
	int _flag;
	char *_ptr;
	int _cnt;
	char *_base;
	int _bufsiz;
	char *path;
} FILE;

typedef int fpos_t;

#define bcopy(x,y,n)	memcpy(y,x,n)

extern  FILE _fps[];

#define stdin (&_fps[0])
#define stdout (&_fps[1])
#define stderr (&_fps[2])

#define ungetc(c,fp)	_un_get_c(c,fp)	
#define getc(fp)	_get_c(fp)
#define getchar()	_get_c(&_fps[0])
#define putc(c,fp)	_put_c(c,fp)
#define putchar(c)	_put_c(c,&_fps[1])

int printf();
int sprintf();
int scanf();
int sscanf();
FILE *fopen();
char *tmpnam();
FILE *tmpfile();
int fclose();
FILE *freopen();
int fflush(FILE *fp);
int fscanf(FILE *, const char *,...);
int fputs(char *, FILE *);
#endif /* __STDIO_H__ */

