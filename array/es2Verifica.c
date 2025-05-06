/*2) DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void caricaVettore(int v, int dim){
    for (int i = 0; i < dim; i++) {
        v[i] = rand() % 100;
    }
}
void stampaVettore(int v, int dim){
    for (int i = 0; i < dim; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
void mediaVettore(int v, int dim, float media){
    int somma = 0;
    for (int i = 0; i < dim; i++) {
        somma += v[i];
    }
    media = (float)somma / dim;
    printf("Media: %.2f\n", media);
}
int main() {
    int vett[DIM];
    float media = 0.0;
    srand(time(NULL));
    caricaVettore(vett, DIM);
    stampaVettore(vett, DIM);
    mediaVettore(vett, DIM, media);
    return 0;
}