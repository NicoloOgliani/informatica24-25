/*scrivi un programma che ordini un vettore in modo decrescente 
utilizzando la funzione bubbleSortD*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.c"
#define DIM 10
int main(){
    int vett[DIM];
    riempiVettoreCasuale(vett, DIM, 1, 30);

    printf("vettore casuale: ");
    stampaVettore(vett, DIM, ' ');
    
    bubbleSortD(vett, DIM);
    printf("\nvettore ordinato in modo decrescente: ");
    stampaVettore(vett, DIM, ' ');
    return 0;
}

