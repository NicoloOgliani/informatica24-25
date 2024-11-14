/*LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA.
SI TERMINA APPENA ARRIVA UNO 0*/
#include <stdio.h>

int main(){
    int num=0;

    printf("\nInserisci un numero:\t");
    scanf("%d", &num);

    while(num=0){
        printf(" Il valore inserito è: %d", num);
        printf("Inserisci un numero:\t");
        scanf("%d", &num);
    }


    


}