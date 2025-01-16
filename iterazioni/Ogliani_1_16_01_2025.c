/*Esercizio1
Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/
#include <stdio.h>
int main(){
    int inizio, fine,  flag;
    do{
    printf("Inserisci il numero che determina l'inizio dell'intervallo: ");
    scanf("%d", &inizio);
    printf("Inserisci il numero che determina la fine dell'intervallo: ");
    scanf("%d", &fine);
    }while(inizio < 1 || inizio > 1000 || fine < 1 || fine > 1000 || inizio > fine);
    for(int i = inizio; i <= fine; i++){
        flag = 0;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d è un numero primo\n", i);
        }
    }
    return 0;

    
}