/*4) DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void caricaArray(int vett[], int dim, int minimo, int massimo){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vett[i]=(rand()%(massimo-minimo+1)+minimo);
        printf(" %d", vett[i]);
    }
}
void sostituisciZero(int vett[], int dim){
    int min=vett[0];
    for(int i=0; i<dim; i++){
        if(vett[i]<min){
            min=vett[i];
        }
    }
    for(int i=0; i<dim; i++){
        if(vett[i]==0){
            min=vett[i];
        }
    }
}
void stampa(int vett[], int dim){
    for(int i=0; i<dim; i++){
        printf(" \n%d", vett[i]);
    }
}
int main(){
    int vettore[DIM], minimo, massimo;
    caricaArray(vettore, DIM, 0, 100);
    sostituisciZero(vettore, DIM);
    stampa(vettore, DIM);
    return 0;
}