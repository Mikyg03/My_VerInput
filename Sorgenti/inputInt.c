
#include "MYVerInput.h" 

MYRETURN inputInt( int *result )
{
    if( result == NULL ) return MYER_PTRN( 1 );


    unsigned int tmp = 0; // Variabile temporanea unsigned
    unsigned int unit;    // Rappresentare le unita' dei valori limiti
    int segno;            // Variabile per il segno del numero
    int c = getchar();    // Variabile temporanea per il carattere 
    *result = 0;
    segno = ( c == '-' ) ? -1 : 1;
    unit = ( segno == 1 ) ? UNITAP : UNITAN;
    c = ( ( c == '-' ) || ( c == '+' ) ) ? getchar() : c;

    if( c != '\n' ) {// Controllo la pressione del tasto INVIO senza altro input 
        do {
            if( isdigit( c ) ) {

/****************************** VERIFICA OVERFLOW *****************************/
                if( ( DECIMO_INT < tmp ) ||
                    ( ( DECIMO_INT == tmp ) && ( unit < (unsigned)( c - '0' ) ) ) ) {
                    SBUFFER;
                    result = NULL;
                    return INSUCCESS;
/******************************************************************************/

                } else // !(DECIMO_INT < *result) || . . .
                    tmp = ( tmp * 10 ) + ( c - '0' );

            } else { // !isdigit( c )
                SBUFFER;
                result = NULL;
                return MYER_EGEN( 0 );
            }
        } while( ( c = getchar() ) != '\n' );
        *result = (int)tmp * segno;
        return SUCCESS;
    } else { // Se si preme invio senza altro input esce con errore
        result = NULL;
        return MYER_EGEN( 0 );
    }
}