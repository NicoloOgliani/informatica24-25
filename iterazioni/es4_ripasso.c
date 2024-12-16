/*chiesti all'utente n(positivo) numeri stampare la somma di quelli pari e di quelli dispari*/
#include <stdio.h>
int main(){
    int n, val, sommap=0, sommad=0;
    do{
        printf("Inserisci un numero di valori da inserire: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=1; i<=n; i++ ){
        printf("Inserisci un numero: ");
        scanf("%d", &val);
        if(val%2==0){
            sommap+=val;
        }
        else{
            sommad+=val;
        }
    }
    printf("La sommad è %d e la sommap è %d", sommad, sommap);
}