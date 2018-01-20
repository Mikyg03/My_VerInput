# MYHEADER.H
------------
<!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [MYHEADER.H](#myheaderh)
	- [**1) DESCRIZIONE**](#1-descrizione)
	- [**2) MACRO**](#2-macro)
	- [**3) TYPEDEF**](#3-typedef)
	- [**4) ENUM**](#4-enum)
	- [**5) COMPILABILE**](#5-compilabile)

<!-- /TOC -->

## **1) DESCRIZIONE**
Questo è un Header generico, da usare con tutte le varie librerie (non serve includerlo, in quanto è gia incluso in ogni altro header delle mie varie librerie). Può essere utilizzato anche in altri progetti (in questo caso è bene includerlo), non ha nessuna dipendenza con altri Header o sorgenti. E' studiato per essere multipiattaforma


## **2) MACRO**
Breve elenco delle macro contenute nell header.
| **NOME**        | **DESCRIZIONE**                          |
| --------------- | ---------------------------------------- |
| **`CLRSCR()`**  | Macro per cancellare la console          |
| **`SBUFFER()`** | Macro per svuotare il buffer **`stdin`** |



## **3) TYPEDEF**
| TYPEDEF     | TIPO              | DESCRIZIONE                    |
| ----------- | ----------------- | ------------------------------ |
| **`UCHAR`** | *`unsigned char`* | Tipo per caratteri ASCII 0-255 |
| **`INDEX`** | *`unsigned int`*  | Tipo per gli indici fino a 255 |



## **4) ENUM**
| NOME         | DESCRIZIONE                  |
| ------------ | ---------------------------- |
| **MYRETURN** | Ritorno delle varie funzioni |
| **MYBOOL**   | Simula le variabili booleane |



## **5) COMPILABILE**
Windows:
- [x] VS 2017
- [x] MinGW
- [x] CygWin

Linux:
- [x] GCC 7.2
