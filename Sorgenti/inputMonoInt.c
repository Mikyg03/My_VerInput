/*******************************************************************************
    This file is part of Nome-Programma.

    Nome-Programma is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Nome-Programma is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Nome-Programma. If not, see <http://www.gnu.org/licenses/>.
*******************************************************************************/
#include "MYVerInput.h"
#include <ctype.h>
int  isdigit_in( int* caracter )
{
    if( caracter == NULL )   return MYER_PTRN( 1 );

    *caracter = getchar();
    if( isdigit( *caracter ) && getchar() == '\n' ) {
        *caracter -= '0';
        return SUCCESS;
    }

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  islower_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

     *caracter = getchar();
    if( islower( *caracter ) && (getchar() == '\n')  )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isupper_in( int* caracter )
{
   if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter = getchar();
    if( isupper( *caracter ) && (getchar() == '\n') )
            return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isalpha_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter = getchar();
    if( isalpha( *caracter  ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isgraph_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter = getchar();
    if( isgraph( *caracter ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  iscntrl_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter = getchar();
    if( iscntrl( *caracter ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isprint_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter= getchar();
    if( isprint( *caracter ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int isxdigit_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter= getchar();
    if( isxdigit( *caracter ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isspace_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter = getchar();
    if( isspace( *caracter ) && (getchar() == '\n') )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN(0);
}
int  ispunct_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

   *caracter = getchar();
    if( ispunct( *caracter ) && ((getchar() == '\n')) )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isalnum_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter  = getchar();
    if( isalnum( *caracter  ) && ( (getchar() == '\n') ) )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isblank_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter  = getchar();
    if( isblank( *caracter  ) && ( (getchar() == '\n') ) )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
int  isascii_in( int* caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    *caracter  = getchar();
    if( isascii( *caracter  ) && ( (getchar() == '\n') ) )
        return SUCCESS;

    SBUFFER;
    caracter = NULL;
    return MYER_EGEN( 0 );
}
