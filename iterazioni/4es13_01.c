/*Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.
il fattoriale di 4 ad esempio è il prodotto di 1 per 2 per 3 per 4*/
#include <stdio.h>
int main(){
    int num, fattoriale = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        fattoriale *= i;
    }
    printf("Il fattoriale di %d è %d\n", num, fattoriale);
    return 0;
}