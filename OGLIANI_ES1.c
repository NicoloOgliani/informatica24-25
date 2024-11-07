/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n1=0, K=0, u=0, da=0, h=0, k=0;
    printf("Inserisci il valore di K: ");
    scanf("%d%d%d%d", &k, &h, &da, &u);
    srand(time(NULL));
    K=rand()%9999+0;
    printf("IL valore di K è: %d", K);
    if(n1<=9999 && n1>=0){
        printf("Il numero è accettabile \n");
        if(u>0){
            printf("Il numero è composto da una cifra\n");
            if(k==K || h==K || da==K || u==K){
                printf("K compare una volta");
            }
        }
        else if(da>0){
            printf("Il numero è composto da 2 cifre\n");
            if(k==K || h==K || da==K || u==K){
                printf("K compare una volta");
            }
            else if(k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K ){
                printf("K compare due volte");
        }
        else if(h>0){
            printf("Il numero è composto da 3 cifre\n");
            if(k==K || h==K || da==K || u==K){
                printf("K compare una volta");
            }
            else if(k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K ){
                printf("K compare due volte");
            }
            else if(k==K ||  h==K || da==K || u==K && k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K  ){
                printf("K compare 3 volte");
        }
        else if(k>0){
            printf("Il numero è composto da 4 cifre\n");
            if(k==K || h==K || da==K || u==K){
                printf("K compare una volta");
            }
            else if(k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K ){
                printf("K compare due volte");
            }
            else if(k==K ||  h==K || da==K || u==K && k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K  ){
                printf("K compare 3 volte");
            }
            else if(k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K && k==K || h==K || da==K || u==K){
                printf("K compare quatro volte");
            }
        }
    }
    else{
        printf("Il valore non è accettabile");
    }
    return 0;
}