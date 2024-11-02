/*Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
La Direzione decide di applicare sui prodotti di ciascun reparto
sconti con percentuali differenziate:-  reparto
   1 = nessuno sconto -  reparto
   2 = sconto 3%-  reparto
   3 = sconto 2%-  reparto
   4 = sconto 5%
Dati
reparto di appartenenza e prezzo di un prodotto, calcolare e
visualizzare il prezzo scontato.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int nrep;
    float prezzo, prezzoscontato;
    printf("inserisci il prezzo dell'articolo");
    scanf("%f.02", prezzo);
    srand(time(NULL));
    nrep = rand() % 4 + 1;
    if(nrep==1){
        printf("il prezzo rimane uguale");
    }
    else if(nrep==1){
        prezzoscontato=(prezzo*3)/100;
        printf("il prezzo è %f",prezzoscontato);
    }
    else if(nrep==1){
        prezzoscontato=(prezzo*2)/100;
        printf("il prezzo è %f",prezzoscontato);//x:prezzo=sconto:100
    }
    else if(nrep==4){
        prezzoscontato=(prezzo*5)/100;
        printf("il prezzo è %f", prezzoscontato);
    }
}