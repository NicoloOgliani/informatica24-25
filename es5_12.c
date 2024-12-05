/*calcolare il quoziente tra due numeri applicando il metodo 
delle sottrazioni successive*/
#include <stdio.h>
int main(){
    int num1, num2, magg, min, quoz, cnt=0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("inserisci il secondo numero: ");
        scanf("%d", &num2);
    }while(num1<=0 && num2<=0);
    if(num1>num2){
        printf("Il numero maggiore è %d", num1);
        magg=num1;
        min=num2;
    }
    else if(num2>num1){
        printf("Il numero maggiore è %d", num2);
        magg=num2;
        min=num1;
    }
    else{
        printf("I due numeri sono uguali");
    }
    quoz=magg;
    while(quoz>=min){
        quoz=(quoz-min);
        cnt++;
    }
        if(quoz==0){
            printf("\tIl risultato è %d con resto 0", cnt);
        }
        else{
            printf("\tIl risultato è %d con resto %d", cnt, quoz);
        }
    

}