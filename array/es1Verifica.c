/*1) DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI UTILIZZANDO
3 FUNZIONI: CARICA VETTORE, STAMPA E PARIDISPARI*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void caricaVettore(int *v, int dim);
void stampaVettore(int *v, int dim);
void pariDispari(int *v, int dim, int *p, int *d);
int main() {
    int v[DIM], dim = DIM, pari = 0, dispari = 0;
    srand(time(NULL));
    caricaVettore(v, dim);
    stampaVettore(v, dim);
    pariDispari(v, dim, &pari, &dispari);
    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);
    return 0;
}
void caricaVettore(int *v, int dim) {
    for (int i = 0; i < dim; i++) {
        v[i] = rand() % 100;
    }
}
void stampaVettore(int *v, int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
void pariDispari(int *v, int dim, int *p, int *d) {
    for (int i = 0; i < dim; i++) {
        if (v[i] % 2 == 0) {
            (*p)++;
        } else {
            (*d)++;
        }
    }
}