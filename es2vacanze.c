/*Esercizio 2
Scrivi un programma per la rappresentazione del rettangolo “a spirale”, 
che contiene numeri naturali, definito riempiendo le righe del rettangolo 
con numeri consecutivi e partendo da 1 nell’angolo in alto a sinistra.
*/
#include <stdio.h>
int main(){
    int n, val=1;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);

    }while(n<0);

    for(int i=1; i<=n; i++){
        if(i>=2){
            if(i%2==0){
                cifra=cifra+n-1;
            }
            else{
                cifra=cifra+n+1;
            }
        }
        if(i%2==1){
            for(int j=1; j<=n; j++){
                printf("%d", cifra);
                cifra++;
            }
        }
        else{
            for(int j=1; j<=n; j++){
                printf("%d", cifra);
                cifra--;
            }
        }
        printf("\n");
    }
    
}
