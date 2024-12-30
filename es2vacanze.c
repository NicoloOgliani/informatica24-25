/*Esercizio 2
Scrivi un programma per la rappresentazione del rettangolo “a spirale”, 
che contiene numeri naturali, definito riempiendo le righe del rettangolo 
con numeri consecutivi e partendo da 1 nell’angolo in alto a sinistra.
*/
#include <stdio.h>
int main(){
    int n;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<=n; i++){
        if(i==2 || i==4){
        printf("\n     ");
        }
        else{
            printf("\n");
        }
        printf("")
    }
}