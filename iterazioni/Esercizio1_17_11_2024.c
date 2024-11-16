/*Leggere una sequenza di numeri.
Terminare la lettura quando si incontra
un numero dispari e stampare quanti numeri sono stati letti.*/
#include <stdio.h>
int main(){
    int num, cnt=0;
    printf("Inserisci un numero:\t");
    scanf("%d", &num);
    cnt++;
    while((num%2)==0){
        printf("Inserisci un altro numero: ");
        scanf("%d", &num);
        cnt++;
    }
    printf("Il numero di tentativi è: %d", cnt);
}