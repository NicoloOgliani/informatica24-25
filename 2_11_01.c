/*Supponete che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data una somma di denaro calcolare il controvalore.*/
#include <stdio.h>
int main(){
    float valore, controvalore, dollari, euro;
    printf("dollari_euro=1 \n  euro_dollari=2")
    printf("scegli un valore dal menu");
    scanf("%f", &valore);
    if(valore==1){
        controvalore=(valore/1.23);
        printf("il controvalore è: %f", controvalore);
    }
    else{
        controvalore=(valore*1.23);
        printf("il controvalore è: %f", controvalore);
    }
}