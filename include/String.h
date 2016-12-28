/*******************************************************************/
/*			string.h library functions                 */
/*                                                                 */
/*******************************************************************/
#ifndef __STRING_H__
#define __STRING_H__

extern char 
	*strcpy(), *strncpy(), *strcat(), *strncat(), *strchr(),
	*strrchr(), *strpbrk(), *strtok(), *strdup();
extern int
	strcmp(), strncmp(), strlen(), strspn(), strcspn();

extern void 
	*memchr(), *memcpy(), *memset(), *memmove();

extern int memcmp();
#endif /* __STRING_H__ */
