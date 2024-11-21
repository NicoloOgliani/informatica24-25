/*Dato un numero stampare tutto i suoi divisori*/
#include <stdio.h>
int main(){
    int numero, div=0;
    div=2;

    printf("Inserisci il numero: ");
    scanf("%d" ,&numero);

    while(div<=numero/2){
        if(numero%div==0)
            printf("%d è un divisore di %d\n", div, numero);
            
        div++;


        
    }
    printf("%d è divisibile per 1 e per se stesso", numero);
}