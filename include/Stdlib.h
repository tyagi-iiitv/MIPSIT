/*
 *	stdlib.h	
 *
 */
#ifndef __STDLIB_H__
#define __STDLIB_H__

#define EXIT_FAILURE 0
#define EXIT_SUCCESS 1
#define RAND_MAX 4294967295

typedef struct divt {
	int quot;
	int rem;
}div_t;



typedef struct ldivt {
	long quot;
	long rem;
}ldiv_t;


extern double atof();
extern double atof_1();
extern double strtod();
extern int atoi();
extern long atol();
extern long strtol();
extern unsigned long strtoul();
extern unsigned int rand();
extern void srand();
extern void *bsearch();
extern void qsort();
extern int abs();
extern long labs();
extern div_t div();
extern ldiv_t ldiv();
extern int exit();
extern int atexit();
extern int abort();
extern char *malloc();
extern char *realloc();
extern char *calloc();
extern int free();
#endif /* __STDLIB_H__ */
