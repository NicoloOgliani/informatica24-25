/*sviluppiam,o le funzioni*/
#include <stdio.h>
#include "libreria.h"//prototipi funzioni
void richiediValori(int vett[], int dim){
    int n=0, i=0;
    while(i<dim){
        printf("Inserisci un valore: ");
        scanf("%d", &n);
        vett[i]=n;
        i++;
    }
}
void stampaVett(int vett[],int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vett[i], sep);
    }

}

