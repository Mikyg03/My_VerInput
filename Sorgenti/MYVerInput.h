/**
 *  \file   MYVerInput.h
 *  \brief  Header Generico per la libreria MYVerInput
 * 
 * \date        04/01/2018    
 * \author      Cannavo' Michele
 * \copyright   Copyright (C) 2017, 2018 Cannavo' Michele
 * \licens     GNU GPL 3.0
 * \version     1.3.0
 * \todo
 * \test
 * \bug
 * \deprecated 
 */
#ifndef MYVERINPUT_H
#define MYVERINPUT_H
#if _MSC_VER > 1200
#pragma once
#pragma warning(disable:4706)
#endif

#pragma region HEADER
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

#include "MYHeader.h"
#include "MYErrno.h"
#include "mySAL.h"
#pragma endregion

#pragma region MACRO
/**
 * \def     DECIMO_UINT
 * \brief   1/10 del valore di UNIT_MAX
 *      
 * \def     UNITA_UINT
 * \brief   Valore dell'unita' di UINT_MAX
 *
 * \def     DECIMO_INT
 * \brief   1/10 del valore di INT_MAX
 *
 * \def     UNITAP
 * \brief   Valore dell'unita' di INT_MAX
 *   
 * \def     UNITAN
 * \brief   Valore dell'unita' di INT_MIN
 *
 * \def     __ACCEPT
 * \brief   Alias per il "SI"
 *       
 * \def     __DECLINE
 * \brief   Alias per il "NO"
 */
#define DECIMO_UINT ((UINT_MAX)/10) 
#define UNITA_UINT  ((UINT_MAX)-((DECIMO_UINT)*10))
#define DECIMO_INT  (INT_MAX / 10)
#define UNITAP      ((INT_MAX) - (DECIMO_INT *10))
#define UNITAN      (UNITAP + 1)

#define __ACCEPT  (unsigned char)'S'
#define __DECLINE (unsigned char)'N'
#pragma endregion

#pragma region PROTOTIPI


/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */
MYRETURN inputInt( int* result);

/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */                  
MYRETURN inputUInt(unsigned int* result);

/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */
MYRETURN  selectSN(int* decision);

/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */
MYRETURN  selectVF(
    _In_  int  accept,
    _In_  int  decline,
    _Out_ int* decision
);

/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */
MYRETURN  strToInt(
    _In_  const char* string,
    _Out_        int* result
);

/**
 * \fn      MYRETURN  inputInt( int* result);
 * \brief   Verifica che l'input da tastiera sia effettivamente un intero con segno
 *  
 * \details     Se ritorna un valore minore di 0. La funzione e' fallita (il valore e' un codice di errore).
 *              *result viene impostato a NULL, ed non e' utilizzabile. Se il valore e' maggiore di 0, indica
 *              che il dato immesso da tastiera non era un alore intero. Imposta sempre result a NULL. 
 *              Se ritorna 0, la funzione e' stata eseguita con successo e *retusl asssume il valore del 
 *              dato immesso rappresentandolo come \b signed \b int.
 *  
 * \param[out]  result      Puntatore ad il valore numerico.
 * 
 * \return                  Validita' o meno della funzione.
 * \retval      <0          FUNZIONE FALLITA.
 * \retval      =0          IL DATO IMMESSO E' UN INTERO CON SEGNO.
 * \retval      >0          IL DATO IMMESSO NON E' UN INTERO CON SEGNO.
 */
MYRETURN strToUInt(
    _In_  const char* string,
    _Out_   unsigned* result
);
#pragma endregion

#endif // !1