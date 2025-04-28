/*creiamo un menù di richieste
1) caricare un array
2) stampare l'array
3) ordina l'array tramite la tecnica dei bubble sort
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 5
int main(){
    int vett[DIM];
    int scelta;

    do{
    printf("MENU");
    printf("\n1) Carica l'array");
    printf("\n2) Stampa l'array");
    printf("\n3) Ordina l'array tramite bubble sort");
    printf("\nDigita 0 per terminare\n");
    scanf("%d", &scelta);

    switch (scelta){
        case 1:{
            riempiVettore(vett, DIM);
            break;
        }
        case 2:{
            stampaVettore( vett, DIM, '-');
            break;

        }
        case 3:{
            bubbleSortC( vett, DIM);
            stampaVettore(vett, DIM, '-');
            break;
        }
        default:
        break;

    }
    }while(scelta!=0);


}