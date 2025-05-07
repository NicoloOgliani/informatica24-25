/*3) DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI;*/
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

void sommaPN(int vett[], int dim){
    int sommaP=0, sommaN=0;
    for(int i=0; i<dim; i++){
        if(vett[i]<0){
            sommaN++;
        }
        else{
            sommaP++;
        }
    }
    printf("SommaPositivi: %d, somma Negativi: %d", sommaP, sommaN);
}
int main(){
    int vettore[DIM], massimo=200, minimo=-100;
    caricaArray(vettore, DIM, massimo, minimo);
    
    sommaPN(vettore, DIM);
    return 0;
}
