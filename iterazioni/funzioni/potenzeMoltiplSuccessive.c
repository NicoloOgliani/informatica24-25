/*Scrivi una funzione avente due parametri interi (passati per valore)
 b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>
int potenza(int _b, int _e);
int main(){
    int b, e;
    do{
        printf("Inserisci il valore di b: ");
        scanf("%d", &b);
        printf("Inserisci il valore di e: ");
        scanf("%d", &e);
    }while(b<0 || e<0);
    int pow=potenza(b, e);
    printf("%d", pow);
    return 0;
}
int potenza(int _b, int _e){
    int potenza;
    for(int i=1; i<= _e; i++){
        potenza=_b*_b;
        
    }
    return potenza;
    
}
