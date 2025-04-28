/*creiamo un menù di richieste
1) caricare un array
2) stampare l'array
3) ordina l'array tramite la tecnica dei bubble sort
*/
#include <stdio.h>
#include "libreria.c"
#define DIM 5

void bubbleSort(int vett[], int dim){
    int temp=0;
    int flag=0;
    int i=0;
    while(flag==0){
        flag==1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j]>vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
    }
}
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