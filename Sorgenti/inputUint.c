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

MYRETURN inputUInt( unsigned int *result )
{
    if( result == NULL ) return MYER_PTRN( 1 );

    int   c = getchar();
    *result = 0;

    if( c != '\n' ){// testo il 1° carattere
        do{// 
            if( isdigit( c ) ) {
/****************************** VERIFICA OVERFLOW *****************************/
                if((DECIMO_UINT < *result) ||
                    ((DECIMO_UINT == *result) && (UNITA_UINT < (c - '0')))) {
                    SBUFFER;
                    result = NULL;
                    return MYER_EGEN( 0 );
/****************************** VERIFICA OVERFLOW *****************************/

                }else //- !(DECIMO_INT < *result) || . . .
                    *result = ( *result * 10 ) + (unsigned)( c - '0' );

            } else{ //- !isdigit( c )
                SBUFFER;
                result = NULL;
                return MYER_EGEN( 0 );
            }
        } while( ( c = getchar() ) != '\n' );
        return SUCCESS;

    } else{ //- Se si preme invio senza altro input esce con errore
        result = NULL;
        return MYER_EGEN( 0 );
    }
}
/*******************************************************************************
 * Immetto un numero da tastiera e lo inserisco in un int un carattere (cifra)
 * alla volta in modo da simulare migliaia,centinaia,decine,unità ecc..
 * Ex: mettiamo che il range vada da 0 a 126 il 127 sarebbe già in overflow.
 * L'idea è di prevedere lo sforamento in anticipo, uno step prima.
 * Se, ad esempio, *result è 13 , x10 diverrebbe 130 già in overflow quindi 
 * posso supporre che con decimo<*result, sarei sempre in overflow. 
 * Con decimo >*result (Ex *result 11) avremo *result x10 = 110 che al massimo
 * diverrebbe 119, sicuramente non in overflow. Bisogna verificare il caso 
 * decimo=*result, questo potrebbe dare overflow o non darlo.Con *result = 12,
 * avremo *resultx10=120 + l'ultimo carattere. Basterà confrontare il nuovo
 * carattere nel buffer con l unità di UINT_MAX . Se UNITA e' minore del 
 * carattere numerico del buffer, ci sarà overflow. Nel caso contrario non 
 * ci sarà overflow perché al massimo saremo nei numero limite permesso.
 ******************************************************************************/