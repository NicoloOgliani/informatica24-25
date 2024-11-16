/*Leggere una sequenza di numeri interi.
Terminare la letture quando si incontra un valore pari a zero.
Determinare quanti sono stati i valori pari e i valori dispari*/
#include <stdio.h>
int main(){
    int num, cntp=0, cntd=0;
    printf("Inserisci un numero:\t");
    scanf("%d", &num);
    if((num%2)==0){
            cntp++;

        }
        else{
            cntd++;
        }
    while(num!=0){
        printf("Inserisci un altro numero: ");
        scanf("%d", &num);
        if((num%2)==0){
            cntp++;

        }
        else{
            cntd++;
        }
    }
    printf("Il numero di numeri dispari  è: %d, e il numero di numeri pari è %d", cntd, cntp);
}