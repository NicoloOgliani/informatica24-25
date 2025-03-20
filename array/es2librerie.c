/*caricato un vettore con valori random
calcolare la media dei valori*/
#include <stdio.h>
#include "libreria.c"
#include "libreria.h"
int main(){
    int vett[10];
    caricaVettoreRandom(vett, 10, 1, 100);
    stampaVett(vett, 10, ' ');
    printf("La media dei valori del vettore e': %.2f\n", media(vett, 10));
    return 0;
}
