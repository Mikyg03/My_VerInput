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

MYRETURN strToInt( const char* stringa, int *result )
{

    if( stringa == NULL ) return MYER_STRN( 1 );
    if( *stringa == '\0' ) return MYER_STRE( 1 );

    unsigned int   tmp = 0; //! Variabile temporanea
    unsigned int unita = 0; //! Unita' dei valori limiti
             int segno = 1; //! Segno del numero: +1(positivo), -1(negativo)

    if( *stringa == '-' || *stringa == '+' )
        segno = ( *stringa++ == '-' ) ? -1 : 1;

    unita = ( segno == -1 ) ? UNITAN : UNITAP;

    /****************************** VERIFICA OVERFLOW *****************************/
    while( *stringa != '\0' ) {
        if( isdigit( *stringa ) ) {
            if( ( DECIMO_INT < tmp ) ||
                ( ( DECIMO_INT == tmp ) && ( unita < (unsigned)( ( *stringa ) - '0' ) ) ) ) {
                *result = 0;
                return INSUCCESS;
            } else //- !(DECIM O < *result) || . . .
                tmp = ( tmp * 10 ) + ( ( *stringa++ ) - '0' );

        } else { //- !isdigit( c )
            return INSUCCESS;
        }
    }
    *result = tmp * segno;
    return SUCCESS;
}