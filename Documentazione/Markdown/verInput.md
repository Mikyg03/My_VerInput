# **VERINPUT.H**
------------


## **1) DESCRIZIONE**
Questo è l Header della libreria verInput che serve a verificare la coretta immissione da tastiera


## **2) MACRO**
Breve elenco delle macro contenute nell header.

| **NOME**          | **DEFINIZIONE**                    | **DESCRIZIONE**                                        |
| ----------------- | ---------------------------------- | ------------------------------------------------------ |
| **`DECIMO_UINT`** | `(UINT_MAX / 10)`                  | Rapresenta un decimo del valore massimo **`UINT_MAX`** |
| **`UNITA_UINT`**  | `((UINT_MAX) - (DECIMO_UINT *10))` | Rapresenta il valore dell'unità di **`UINT_MAX`**      |
| **`DECIMO_INT`**  | `(INT_MAX / 10)`                   | Rapresenta un decimo del valore massimo **`INT_MAX`**  |
| **`UNITAP`**      | `((INT_MAX) - (DECIMO_INT *10))`   | Rapresenta il valore dell'unità di **`INT_MAX`**       |
| **`UNITAN`**      | `(UNITAP + 1)`                     | Rapresenta il valore dell'unità di **`INT_MIN`**       |


## **3) PROTOTIPI**
| NOME                                                            | DESCRIZIONE                  |
| --------------------------------------------------------------- | ---------------------------- |
| `MYRETURN inputInt( int* risultato )`                          | Ritorno delle varie funzioni |
| `MYRETURN inputUInt( unsigned int* risultato )`                | Simula le variabili booleane |
| `MYRETURN selectSN( int* )`                                    |                              |
| `MYRETURN selectVF( int veroS, int falsoN, int* )`            |                              |
| `MYRETURN strToInt( const char* stringa, int* risultato )`    |                              |
| `MYRETURN strToUInt( const char* stringa, unsigned* result )` |                              |
|                                                                 |                              |


## **4) COMPILABILE**
Windows:
- [x] VS 2017
- [x] MinGW
- [x] CygWin

Linux:
- [x] GCC 7.2
