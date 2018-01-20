# **_strToInt()_**



## 1. Dichiarazione
```c
   MYRETURN strToInt(const char* stringa, int* result)
```

<!--sdf!-->

## 2. Descrizione

> Converte una stringa <-in->  un intero con segno. A differenza di altre funzioni simili, accetta in ingresso solamente caratteri numerici ed evewntualmente il simbolo del segno **`-`** o **`+`**.


## 3. Header

```c
  #include "verInput.h"
```
## 4. Parametri
> La funzione ha 2 parametri, il primo è la stringa da convertire, il secondo è una variabile che conterrà il valore convertito. La funzione testa che non sia **`NULL`** o una stringa vuota prima di tentare la conversione. Dopo testa il primo carattere per l'idendificazione dell'eventuale segno. e successivamente tutti gli altri caratteri per verificare che siano numerici. Ha pure un meccanismo per evitare l'overflow. Se la stringa rappresentasse un numero troppo grande, non eseguirebbe la conversione, restituendo :1.
>
> Come valori limiti si rifa' alle macro **`INT_MAX`** e **`INT_MIN`** contenute nell' header **`limit.h`** della libreria standard.

| IN/OUT | Tipo            | Nome      | Descrizione                                                  |
|--------|-----------------|-----------|--------------------------------------------------------------|
| _in_   | **const char*** | _stringa_ | Puntatore alla stringa da convertire                         |
| _out_  | **int***        | _result_  | Puntatore alla vasriabile per contenere il valore convertito |


## 5. Valore di ritorno
Tipo di ritorno: **MYRETURN** (vedere ENUM::MYRETURN )

| Valore | Descrizione                          |
|:------:| ------------------------------------ |
|   -1   | Funzione non eseguita                |
|   0    | Funzione riuscita con esito positivo |
|   1    | Funzione riuscita con esito negativo |
> Il valore di ritorno indica solamente la riuscita o meno della funzione. Un valore negativo indica che la funzione non è stata eseguita per il verificarsi di un qualche errore che ne ha reso impossibili il completamento di essa. Il valore 0 indica che la funzione è stata eseguita e che la stringa esaminata e' stata convertita in un intero. Un valore maggiore di 0 indica che la funzione è stata svolta, ma la stringa presenta qualvche carattere che rende impossibile la conversione.


## 6. Compilabile
Windows:
- [x] Visual Studio 2017
- [x] MinGW 132
- [x] CygWin 132

Linux
- [x] GCC 7.8
