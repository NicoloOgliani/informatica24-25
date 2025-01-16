/*Esercizio3
Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include<stdio.h>
int main(){
    int numero, posizione = 1, cifra;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    while(numero > 0){
        cifra = numero % 10;
        printf("La cifra %d corrisponde alla posizione %d\n", cifra, posizione);
        numero=numero/10;
        posizione++;
    }
    return 0;
}