/*LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA E DETERMINARE QUANTI 
NUMERI SONO STATI INSERITI. TERMINA APPENA ARRIVA UNO 0*/
#include <stdio.h>

int main(){
    int num=0;
    int cnt=0;

    printf("\nInserisci un numero:\t");
    scanf("%d", &num);
    cnt++;

    while(num!=0){
        printf(" Il valore inserito è: %d", num);
        printf("\tInserisci un numero:\t");
        scanf("%d", &num);
        cnt++;

    }
    printf("I valori inseriti sono: %d", cnt);


    


}