<center>**_strToInt()_**</center>
===============================


 <!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [Indice](#centerstrtointcenter)
	- [1. Dichiarazione](#1-dichiarazione)
	- [2. Descrizione](#2-descrizione)
	- [3. Header](#3-header)
	- [4. Parametri](#4-parametri)
	- [5. Valore di ritorno](#5-valore-di-ritorno)
	- [6. Compilabile](#6-compilabile)

<!-- /TOC --> 

## 1. Dichiarazione
```c
   MYRETURN selectVF( int confirm, int negation, int *caracter )
```

## 2. Descrizione

> Verifica che l'immissione da tastiera sia effettivamente un intero senza segno e non vi siano lettere o altri caratteri non numerici (NOn accetta  i simboli **'+'** e **'-'** come indicazione del segno numerico visto che non lo ha).

## 3. Header
```c
  #include "verInput.h"
```

## 4. Parametri
| Type     | In/Out | Name       | Description                               |
| -------- | ------ | ---------- | ----------------------------------------- |
| **int**  | _in_   | _confirm_  | Variabile per contenere il numero immesso |
| **int**  | _in_   | _negation_ | Variabile per contenere il numero immesso |
| **int*** | _out_  | _result_   | Variabile per contenere il numero immesso |


## 5. Valore di ritorno
Tipo di ritorno: **MYRETURN** (vedere ENUM::MYRETURN )

| Valore | Descrizione                          |
|:------:| ------------------------------------ |
|   -1   | Funzione non eseguita                |
|   0    | Funzione riuscita con esito positivo |
|   1    | Funzione riuscita con esito negativo |
>Il valore di ritorno indica solamente la riuscita o meno della funzione. Un valore negativo indica che la funzione non è stata eseguita per il verificarsi di un qualche errore che ne ha reso impossibili il completamento di essa. Il valore 0 indica che la funzione è stata eseguita e che il numero immesso è un intero con segno nel range dei valori possibili. Un valore maggiore di 0 indica che la funzione è stata svolta, ma l'input non è un intero con segno


## 6. Compilabile
Windows:
- [x] Visual Studio 2017
- [x] MinGW 132
- [x] CygWin 132

Linux
- [x] GCC 7.8
