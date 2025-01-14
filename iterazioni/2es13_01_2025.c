/*Scrivi un programma che visualizzi la somma dei quadrati
 dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main(){
    int inizio, quantita, somma = 0;
    printf("inserisci il valore iniziale: ");
    scanf("%d", &inizio);
    do{
    printf("inserisci la quantità di numeri: ");
    scanf("%d", &quantita);
    }while(quantita <= 0);
    for (int i = inizio+1; i <= inizio+quantita; i++){
        somma += i * i;
    }
    printf("La somma dei quadrati dei 12 numeri successivi al numero inserito è: %d\n", somma);
    return 0;
}