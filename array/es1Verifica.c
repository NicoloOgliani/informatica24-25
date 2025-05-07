/*1) DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI UTILIZZANDO
3 FUNZIONI: CARICA VETTORE, STAMPA E PARIDISPARI*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void caricaVettore(int vett[], int dim);
void stampaVettore(int vett[], int dim);
void pariDispari(int vett[], int dim);
int main() {
    int vettore[DIM];
    srand(time(NULL));
    caricaVettore(vettore, DIM);
    stampaVettore(vettore, DIM);
    pariDispari(vettore, DIM);
    return 0;
}
void caricaVettore(int vett[], int dim) {
    for (int i = 0; i < dim; i++) {
        vett[i] = rand() % 100;
    }
}
void stampaVettore(int vett[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vett[i]);
    }
    printf("\n");
}
void pariDispari(int vett[], int dim) {
    int cntp=0, cntd=0;
    for (int i = 0; i < dim; i++) {
        if (vett[i] % 2 == 0) {
            cntp++;
        } else {
            cntd++;
        }
    }
    printf("Pari: %d, Dispari: %d\n", cntp, cntd);
}