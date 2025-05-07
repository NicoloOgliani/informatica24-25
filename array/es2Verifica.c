/*2) DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void caricaVettore(int vett[], int dim){
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        vett[i] = rand() % 100;
    }
}
void stampaVettore(int vett[], int dim){
    for (int i = 0; i < dim; i++) {
        printf("%d ", vett[i]);
    }
    printf("\n");
}
void mediaVettore(int vett[], int dim){
    int somma = 0;
    float media=0;
    for (int i = 0; i < dim; i++) {
        somma += vett[i];
        
    }
    media =somma / dim;
    printf("Media: %.2f\n", media);
}
int main() {
    int vettore[DIM];
    caricaVettore(vettore, DIM);
    stampaVettore(vettore, DIM);
    mediaVettore(vettore, DIM);
    return 0;
}