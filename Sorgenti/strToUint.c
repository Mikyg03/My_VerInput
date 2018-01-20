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
#include <ctype.h>     // for isdigit
#include "MYHeader.h"  // for MYRETURN

MYRETURN strToUInt(const char* stringa, unsigned *result) {
    unsigned int tmp = 0;           //<! Variabile temporanea unsigned

    if( !stringa || !(*stringa) ) // Stringa nulla o vuota
        return-1;

/****************************** VERIFICA OVERFLOW *****************************/
    while( *stringa != '\0' ){
        if( isdigit( *stringa ) ){
            if( (DECIMO_UINT < tmp) ||
                ((DECIMO_UINT == tmp) && (UNITA_UINT < (unsigned)((*stringa) - '0'))) ){

                *result = 0;
                return 1;
/******************************************************************************/
            } else // !  (DECIM O < *result) || . . .
                tmp = (tmp * 10) + ((*stringa++) - '0');

        } else{ // ! isdigit( c )
            return -1;  // INPUT NON VALIDO!!!!
        }
    }
    *result = tmp;
    return 0;
}