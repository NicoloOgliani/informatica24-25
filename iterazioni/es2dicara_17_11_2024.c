/*Scrivi un programma che legge una sequenza
di numeri interi terminanti con uno 0
(cioè il programma termina quando viene inserito 0)
e ne ricerca il valore minimo visualizzandolo sullo schermo*/
#include <stdio.h>
int main(){
    int num, min;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    min=num;
    while(num!=0){
        printf("Inserisci un altro numero: ");
        scanf("%d", &num);
        if(num<min);
        min=num;
        }
        printf("Il numero minore è %d", min);
    
}