//STABILIRE SE DATI DUE NUMERI A e B CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B
#include <stdio.h>
int main(){
    int a=0, b=0;
    printf("inserisci il valore di a: ");
    scanf("%d", &a);
    printf("inserisci il valore di : ");
    scanf("%d", &b);
    if(a==b){
        printf("i due valori sono uguali");
    }
    else{
        if(a >b){
            printf("%d è maggiore di %d", a, b);
        }
        else{
            printf("%d è minore di %d", a, b);
        }
    }
}   