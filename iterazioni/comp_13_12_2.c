/*Calcolare la somma dei primi N numeri naturali (N è un numero scelto dall'utente maggiore di 2).
(esempio se N=3, mostrare il risultato di 1+2+3. se N=5, mostrare 1+2+3+4+5)*/
#include <stdio.h>
int main(){
    int n, somma;
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n );
    }
    for(int i=0; i<=n; i++){
        somma=somma+i;
    }
    printf("La somma dei primi numeri N naturali è %d", somma);
}