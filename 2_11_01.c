/*Supponete che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data una somma di denaro calcolare il controvalore.*/
#include <stdio.h>
int main(){
    float valore, controvalore, dollari, euro;
    printf("inserisci un valore di denaro in dollari o in euro");
    scanf("%f", &valore);
    if(valore==dollari){
        controvalore=(valore/1.23);
        printf("il controvalore è: %f", controvalore);
    }
    else{
        controvalore=(valore*1.23);
        printf("il controvalore è: %f", controvalore);
    }
}