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

MYRETURN selectVF(int confirm, int negation, int *caracter )
{
////////////////////////////// VERIFICA ARGOMENTI //////////////////////////////
    if( caracter == NULL )       return MYER_PTRN( 3 );

    if( isalpha( confirm ) ) {
        caracter = NULL;
        return MYER_SIZZ( 1 );
    }
    if( isalpha( negation ) ) {
        caracter = NULL;
        return MYER_SIZZ( 2 );
    }
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

    int tmp = toupper( getchar() );  // char temporanea di supporto

    if( (tmp == toupper( confirm )) || (tmp == toupper( negation )) ) {
        *caracter = tmp;
        if(  getchar() == '\n' ){
            return SUCCESS;
        }
    }
    if( tmp != '\n' )// Controllo nel caso si premesse invio senza input
        SBUFFER;

    caracter = NULL;
    return MYER_EGEN(0);
}
