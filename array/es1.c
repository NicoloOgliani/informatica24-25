/*inizializzazione- riempimento con valori pari- stampa
creazione di libreria personale*/
#include <stdio.h>
#include "libreria.c"
#define DIM 10
int main(){
    int vettore[DIM]={0};

    richiediValore(vettore, DIM);
    stampaVett(vettore, DIM, sep);

}
