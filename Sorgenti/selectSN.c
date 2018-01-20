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

MYRETURN selectSN( int *caracter )
{
    if( caracter == NULL ) return MYER_PTRN( 1 );

    int tmp = 0;		//!< char temporanea di supporto

    switch( tmp = toupper( getchar() ) ) {
        case __ACCEPT:
        case __DECLINE:
            *caracter = tmp;
            tmp = getchar();

            if( tmp == '\n' )
                return SUCCESS;
            else 
                break;
        default:
            break;
    }
    if( tmp != '\n' )
        SBUFFER;

    caracter = NULL;
    return INSUCCESS;
}