/*Scrivi un programma in C che riempia un vettore di 10 elementi
con numeri casuali compresi tra 0 e 100. Quindi fai in modo che il programma
possa mostrare i due valori maggiori presenti nel vettore.
 Suddividi il programma in funzioni (riempiVettore(), stampaVettore(), stampaDueMax()).*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
void riempiVettore(int dim, int vett[]){
    for(int i=0; i<dim; i++){
        vett[i]=rand()%100;
    }
}
void stampaVettore(int dim, int vett[]){
    for(int i=0; i<dim; i++){
        printf("%d", vett[i]);
    }
}
void StampadueMax(int dim, int vett[], int *MAX1, int *MAX2){
    for(int i=0; i<dim; i++){
        if(vett[i]>*MAX1){
            *MAX2=*MAX1;
            *MAX1=vett[i];
        }
        else if(vett[i]<*MAX1&& vett[i]>*MAX2){
            *MAX2=vett[i];
        }
    }
    printf("I valori maggiori sono %d e %d", *MAX1, *MAX2);
}
int main(){
    int Vett [Dim] MAX1=INT_MIN, MAX1=INT_MIN,
    srand(time(NULL));
    riempiVettore(Dim, Vett);
    stampaVettore(Dim, Vett);
    StampadueMax(Dim, Vett, &MAX1, &MAX2);
    return 0;
}
