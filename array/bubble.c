/*scrivi un programma che genera un vettore casuale e lo ordina*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
void bubbleSortC(int vett[], int dim){
    int temp;
    int flag=0;
    int i=0;
    while(flag==0){
        flag=1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j]>vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;
    }
}
int main(){
    int vett[DIM];
    srand(time(NULL));
    for(int i=0; i<DIM; i++){
        vett[i]=rand()%100;
    }
    printf("Vettore casuale:\n");
    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }
    printf("\n");
    bubbleSortC(vett, DIM);
    printf("Vettore ordinato:\n");
    for(int i=0; i<DIM; i++){
        printf("%d ", vett[i]);
    }
    printf("\n");
    return 0;
    
}