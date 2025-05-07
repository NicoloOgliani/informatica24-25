/*Dato un array ordinato inserire un nuovo elemento all'interno dell'array mantenendolo ordinato*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5
void caricaArray(int vett[], int dim, int minimo, int massimo){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vett[i]=(rand()%(massimo-minimo+1)+minimo);
        printf(" %d", vett[i]);
    }
}
void inserisci(int vett[], int dim, int num){
    int i=0;
    while(i<dim && vett[i]<num){
        i++;
    }
    for(int j=dim; j>i; j--){
        vett[j]=vett[j-1];
    }
    vett[i]=num;
}
void bubbleSortC(int vett[], int dim){
    for(int i=0; i<dim-1; i++){
        for(int j=i+1; j<dim; j++){
            if(vett[i]>vett[j]){
                int temp=vett[i];
                vett[i]=vett[j];
                vett[j]=temp;
            }
        }
    }
}
void stampa(int vett[], int dim){
    for(int i=0; i<dim; i++){
        printf(" \n%d", vett[i]);
    }
}
int main(){
    int vettore[DIM+1], num;
    caricaArray(vettore, DIM, 0, 100);
    printf("\nInserisci un numero: ");
    scanf("%d", &num);
    inserisci(vettore, DIM, num);
    bubbleSortC(vettore, DIM+1);
    stampa(vettore, DIM+1);
    return 0;
}

