<center>**_strToUInt()_**</center>
=================================
-----------------------------------


## **1. Dichiarazione**
```c
   MYRETURN strToUInt(const char* stringa, unsigned int* result)
```

<p style="page-break-before: always;">&nbsp;</p>

## **2. Descrizione**

> Verifica che l'immissione da tastiera sia effettivamente un intero senza segno e non vi siano lettere o altri caratteri non numerici (Non accetta  i simboli **'+'** e **'-'** come indicazione del segno).

## **3. Header**
```c
  #include "verInput.h"
```

## **4. Parametri**
| IN/OUT | Type            | Name      | Description                                    |
| ------ | --------------- | --------- | ---------------------------------------------- |
| _in_   | **const char*** | _stringa_ | Puntatore alla stringa da convertire           |
| _out_  | **unsigned***   | _result_  | Puntatore ad unsigned per il numero convertito |


## **5. Valore di ritorno**
Tipo di ritorno: **MYRETURN** (vedere ENUM::MYRETURN )

| Valore | Descrizione                          |
|:------:| ------------------------------------ |
|   -1   | Funzione non eseguita                |
|   0    | Funzione riuscita con esito positivo |
|   1    | Funzione riuscita con esito negativo |
>Il valore di ritorno indica solamente la riuscita o meno della funzione. Un valore negativo indica che la funzione non è stata eseguita per il verificarsi di un qualche errore che ne ha reso impossibili il completamento di essa. Il valore 0 indica che la funzione è stata eseguita e che il numero immesso è un intero con segno nel range dei valori possibili. Un valore maggiore di 0 indica che la funzione è stata svolta, ma l'input non è un intero con segno


## **6. Compilabile**
Windows:
- [x] Visual Studio 2017
- [x] MinGW 132
- [x] CygWin 132

Linux
- [x] GCC 7.8
