//Scrivi un programma che riceva in ingresso un numero minore di 10.000 e dica da quante cifre è formato, quindi separi le migliaia dalle centinaia dalle decine e dalle unità visualizzandole separatamente sullo schermo
#include <stdio.h>
int main(){
    int n, u, da, h, k;
    printf("inserisci un numero compreso tra 0 e 10000: ");
    scanf("%d", &n);
    if(n<=0 || n>=10000){
        printf("il numero inserito non va bene");
    }
    else{
        u=n%10;
        da=(n%100-u)/10;
        h=(n%1000-da-u)/100;
        k=(n%10000-h-da-u)/1000;
        if(k!=0){
            printf("il numero ha 4 cifre");
        }
        if(k==0){
            pritf("il  numero ha 3 cifre");
        }
        if(K==0 && h==0){
            printf("il numero ha 2 cifre");
        }
        if(k==0&&h==0&&da==0){
            printf("il numero ha 1 cifra");
        }
        printf("le cifre sono: %d, %d, %d, %d", k, h, da, u);
    }
      
}