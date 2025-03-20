/*Crea i file necessari per una libreria che
contenga le funzioni principali degli array
(come quella fatta in classe). Quindi scrivi
un programma che permetta di riempire un vettore
di 30 elementi con valori casuali compresi tra
0 e 10 e una funzione che restituisca il numero
di volte in cui compare un valore
 (compreso tra 0 e 10) scelto dall'utente.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"
#define DIM 30
int main(){
    int vett[DIM];
    int n;
    srand(time(NULL));
    caricaVettoreRandom(vett, DIM, 0, 10);
    stampaVett(vett, DIM, ' ');
    printf("Inserisci un valore: ");
    scanf("%d", &n);
    printf("Il valore %d compare %d volte\n", n, contaValore(vett, DIM, n));
    return 0;
}