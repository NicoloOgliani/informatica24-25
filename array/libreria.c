/*sviluppiam,o le funzioni*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"//prototipi funzioni
void richiediValori(int vett[], int dim){
    int n=0, i=0;
    while(i<dim){
        printf("Inserisci un valore: ");
        scanf("%d", &n);
        if(n%2==0){
        vett[i]=n;
        i++;
        }
    }
}
void stampaVett(int vett[],int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vett[i], sep);
    }

}
void caricaVettoreRandom(int vett[], int dim, int min, int max){
    for(int i=0; i<dim; i++){
        vett[i]=rand()%(max-min+1)+min;
    }
}
int somma(int vett[], int dim){
    int s=0;
    for(int i=0; i<dim; i++){
        s+=vett[i];
    }
    return s;
}
float media(int vett[], int dim){
    return (float)somma(vett, dim)/dim;
}
int contaValore(int vett[], int dim, int val){
    int cnt=0;
    for(int i=0; i<dim; i++){
        if(vett[i]==val){
            cnt++;
        }
    }
    return cnt;
}
