/*DATI 5 VALORI STAMPARLI*/
#include <stdio.h>

int main(){
    int num=0, cnt=0;//5 variabili

    while(cnt<5){
        printf("\tInserire un numero:\t ");
        scanf("%d", &num);
        cnt++;//cnt=cnt+1
        printf("Il valore inserito è:\n %d", num);
    }



}