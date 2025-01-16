/*Esercizio3
Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include<stdio.h>
int main(){
    int n1, posizione = 1, cifra;
    printf("Inserisci un numero: ");
    scanf("%d", &n1);
    while(n1 > 0){
        cifra = n1 % 10;
        printf("la cifra %d corrisponde alla posizione %d\n", cifra, posizione);
        n1=n1/10;
        posizione++;
    }
    return 0;
}