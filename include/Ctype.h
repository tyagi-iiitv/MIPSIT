/*****************************************************************/
/*                      ctype.h standard header                  */
/*                      copyright (c) 1990 by IDT                */
/*****************************************************************/
#ifndef __CTYPE_H__
#define __CTYPE_H__
#define  _IS_LOWER  0x01
#define  _IS_UPPER  0x02
#define  _IS_DIGIT  0x04
#define  _IS_XDIGIT 0x08
#define  _IS_PUNCT  0x10
#define  _IS_CNTRL  0x20
#define  _IS_SPACE  0x40
#define  _IS_BLANK  0x80

#define  _IS_ALPHA  0x03
#define  _IS_ALNUM  0x07
#define  _IS_GRAPH  0x1f
#define  _IS_PRINT  0x9f

extern int _CTYPE_TAB[];
extern int _TOLOW_TAB[];
extern int _TOUP_TAB[];

#define isalpha(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_ALPHA)
#define isupper(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_UPPER)
#define islower(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_LOWER)
#define isgraph(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_GRAPH)
#define isprint(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_PRINT)
#define isdigit(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_DIGIT)
#define isxdigit(c)   (_CTYPE_TAB[1+(int)(c)] & _IS_XDIGIT)
#define isalnum(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_ALNUM)
#define iscntrl(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_CNTRL)
#define isspace(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_SPACE)
#define ispunct(c)    (_CTYPE_TAB[1+(int)(c)] & _IS_PUNCT)
#define tolower(c)    (_TOLOW_TAB[1+(int)(c)])
#define toupper(c)    (_TOUP_TAB[1+(int)(c)])
#endif /* __CTYPE_H__ */
