/*Scrivi un programma che legge un numero NUM
strettamente positivo e visualizza tutti i numeri
pari inferiori a tale numero fino a 0*/
#include <stdio.h>
int main(){
    int num, cnt=0, pari;
    do{
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    }
    while(num<0);
    cnt=num-1;
    while(cnt>0){
        pari=cnt%2;
        if(pari==0){
            printf("%d", cnt);
        }
        cnt=cnt-1;
    }
}