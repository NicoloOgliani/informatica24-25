/* - Deposito di denaro (passando il saldo per riferimento).
 - Prelievo di denaro (passando il saldo per riferimento, con controllo di saldo sufficiente).
 - Visualizzazione del saldo (passando il saldo per valore).
 - Esci dal programma.*/
#include <stdio.h>
#include <stdlib.h>

void deposita(float *_saldo, float _importo);
void preleva(float *_saldo, float _importo);
void mostraSaldo(float _saldo, int _decimali);
void mostraMenu();

int main(){
    float saldo, importo, decimali;

    do{
        printf("Inserisci un importo: ");
        scanf("%f", &importo);
        
    }while(importo<=0);

    mostraSaldo(&saldo, &decimali);
    mostraMenu();
}
void deposita(float *_saldo, float _importo){
    *_saldo+=_importo;
}
void preleva(float *_saldo, float _importo){
    if(*_saldo<=_importo){
        printf("Non puoi permetteterti questo prelievo ");
    }
    else{
        *_saldo-=importo;
    }
}
void mostraSaldo(float _saldo, int _decimali){
    switch(_decimali){
        case 0:
            printf("Il saldo è %.0f\n", _saldo);
            break;
        case 1: 
            printf("Il saldo è %.1f\n", _saldo);
            break;
        case 2: 
            printf("Il saldo è %.2f\n", _saldo);
            break;
        default: 
            printf("Il numero dei decimali non è corretto\n");
    }
}