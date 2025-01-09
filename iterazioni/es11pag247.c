/*scrivi un programma che dati in input n numeri interi e un numero x
determini: 1)quanti numeri sono maggiori di x
           2) quanti numeri sono minori di x
           3) quanti numeri sono uguali a x*/
#include <stdio.h>
int main(){
    int num, n, x, cnt1=0, cnt2=0, cnt3=0;
    printf("Inserisci un numero di valori da inserire: ");
    scanf("%d", &n);
    printf("Inserisci un numero x");
    scanf("%d", &x);
    for(int i=1; i<=n; i++){
        do{
            printf("Inserisci un numero: ");
            scanf("%d", &num);
        }while(i<0 || i>20);
        if(num>x){
            cnt1++;
        }
        if(num<x){
            cnt2++;
        }
        if(num==x){
            cnt3++;
        }
    }
    printf("I numeri maggiori di x sono %d", cnt1);
    printf("I numeri minori di x sono %d", cnt2);
    printf("I numeri uguali a x sono %d", cnt3);

    
}