#ifndef MYINPUT_H
#define MYINPUT_H
#if _MSC_VER > 1000
#pragma once
#endif

#include <ctype.h>
#include <limits.h>
#include <stdio.h> 
#include "MYHeader.h"

#ifndef UCHAR
#define UCHAR unsigned char
#endif 

#define DECIMO_UINT (UINT_MAX / 10)
#define UNITA_UINT ((UINT_MAX) - (DECIMO_UINT *10))

#define DECIMO_INT (INT_MAX / 10)
#define UNITAP ((INT_MAX) - (DECIMO_INT *10))
#define UNITAN (UNITAP + 1)

#define MYYES 'S'
#define MYNO 'N'

// LISTA PROTOTIPI
MYRETURN inputInt( int *risultato );
MYRETURN inputUInt( unsigned int *risultato );
MYRETURN selectSN( int* );
MYRETURN selectVF( int veroS, int falsoN,int*);
MYRETURN  strToInt( const char* stringa, int *risultato );
MYRETURN strToUInt( const char* stringa, unsigned *result );

#endif