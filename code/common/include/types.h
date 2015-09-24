#ifndef _TYPES_H_
#define _TYPES_H_

typedef unsigned char BYTE;
typedef char CHAR;
typedef unsigned short WORD16;
typedef short SWORD16;
typedef unsigned int WORD32;
typedef int SWORD32;
typedef unsigned long long WORD64;
typedef long long SWORD64;

typedef void VOID;
typedef BYTE BOOL;

#ifdef TRUE
#undef TRUE
#define TRUE (1)

#ifdef FALSE
#undef FALSE
#define FALSE (0)

#endif