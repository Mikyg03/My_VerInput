# <center><b>CONTROLLO INPUT</b></center>

###### <center><i>Copyright (c) 2017,2018 Cannavo Michele</i></center>

--------------------------------------------------------------------------------

<!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [<center><b>CONTROLLO INPUT</b></center>](#centerbcontrollo-inputbcenter)
					- [<center><i>Copyright (c) 2017 Cannavo Michele</i></center>](#centericopyright-c-2017-cannavo-micheleicenter)
	- [1) DESCRIZIONE](#1-descrizione)
	- [2) FILE](#2-file)

<!-- /TOC -->

## 1) DESCRIZIONE

> Libreria di funzioni che hanno il compito di verificare la validità di un input da tastiera. Le funzioni verificano che il dato immesso da tastiera sia del tipo richiesto. Ad esempio, per un intero, verifica che non siano stati immessilettere o caratteri speciali. Le ultime funzioni convertono le stringhe in interi per completare le funzioni.

Tutte le funzioni sono del tipo:

```c
    MYRETURN nameFunction( param[in], param[out] )
```


| _Tipo_             | _Descrizione_ |
| ------             | ------------- |
| **_MYRETURN_**     | Valore di ritorno, rappresenta la riuscita o meno ella funzione |                      |
| **_namefunction_** | Nome della funzione                                              |     |                    |     |                                                                  |
| **_param[in]_**    | Eventuali parametri d'ingresso                                   |     |                    |     |                                                                  |
| **_param[out]_**   | Eventuali variabili di ritorno                                   |     |                    |     |                                                                  |

## 2) FILE

La libreria contiene attualmenti i seguenti file

|Tipe       | Name        | Brief                                              | Version | Date
| --------- | ----------- | -------------------------------------------------- | :-----: | ---------- |
|**Header** |            	|                                                    |         |	          |
|1)         | MYHeader.h  | Header generico                                    |   1.0   | 22/09/2017 |
|2)         | verInput.h  | Header proprio della libreria                      |   1.0   | 22/09/2017 |
|3)         | MYPrint.h   | Header generico                                    |   1.0   | 22/09/2017 |
|4)         | MySal.h     | Header proprio della libreria                      |   1.0   | 22/09/2017 |
|**Source** |             |  																									 |         |	          |
| 1)        | inputInt.c  | Funzione per la verifica di un input intero       | 1.0 | 22/09/2017 |
| 2)        | inputUint.c | Funzione per la verifica di un intero senza segno | 1.0 | 22/09/2017 |
| 3)        | selectSN.c  | Verifica che la scelta immessa si V o F           | 1.0 | 22/09/2017 |
| 4)        | selectVF.c  | Verifica che la scelta immessa si V o F           | 1.0 | 22/09/2017 |
| 5)        | selectVF.c  | Verifica che la scelta immessa si V o F           | 1.0 | 22/09/2017 |
| 6)        | strToUint.c | Converte una stringa in intero senza segno        | 1.0 | 22/09/2017 |
| **Altro** |             |                                                   |     |            |
|           | LICENSE     | File/Cartella contenente le licenze               | 1.0 | 22/09/2017 |
|           | README      | Piccolo file                                      | 1.0 | 22/09/2017 |
|           | BOOK        | Guida per l'uso della libreria                    | 1.0 | 22/09/2017 |
