**_selectSN()_**
================================



## 1. Dichiarazione

```c
   MYRETURN selectSN(int *caracter)
```

## 2. Descrizione

> Verifica che l'immissione da tastiera sia esclusivamente un valore tra S/s e N/n.

## 3. Header
```c
#include "verInput.h"
```

## 4. Parametri
| Type      | In/Out | Name       | Description                                           |
| --------- | ------ | ---------- | ----------------------------------------------------- |
| **int\*** | _in_   | _caracter_ | Puntatore per la restituzione della variabile immessa |
|           |        |            |                                                       |


## 5. Valore di ritorno
Tipo di ritorno: **MYRETURN** (vedere ENUM::MYRETURN )
| Valore | Descrizione                          |
|:------:| ------------------------------------ |
|   -1   | Funzione non eseguita                |
|   0    | Funzione riuscita con esito positivo |
|   1    | Funzione riuscita con esito negativo |
>Il valore di ritorno indica solamente la riuscita o meno della funzione. Un valore negativo indica che la funzione non è stata eseguita per il verificarsi di un qualche errore che ne ha reso impossibili il completamento di essa. Il valore 0 indica che la funzione è stata eseguita e che il carattere immesso e' `S` o `s`, il valore 1 indica che il carattere immesso e' tra `N` o `n`.


## 6. Compilabile
Windows:
- [x] Visual Studio 2017
- [x] MinGW 132
- [x] CygWin 132

Linux
- [x] GCC 7.8
