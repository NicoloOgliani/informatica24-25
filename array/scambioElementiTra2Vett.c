/*Dati 2 vettori v1 e v2 eseguire lo scambio dei valori
 dei due vettori dopo averli riempiti casualmente*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"
#include "libreria.c"
#define DIM 10
int main(){
    int v1[DIM], v2[DIM], temp;
    srand(time(NULL));
    riempiVettoreCasuale(v1, DIM, 1, 10);
    riempiVettoreCasuale(v2, DIM, 11, 100);
    printf("v1: ");
    stampaVettore(v1, DIM, ' ');
    printf("\nv2: ");
    stampaVettore(v2, DIM, ' ');
    for(int i=0; i<DIM; i++){
        temp = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
    printf("\nv1: ");
    stampaVettore(v1, DIM, ' ');
    printf("\nv2: ");
    stampaVettore(v2, DIM, ' ');
    return 0;

}