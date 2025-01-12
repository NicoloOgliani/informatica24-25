/*Scrivi un programma che visualizzi la somma dei quadrati
 dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main(){
    int i, somma = 0;
    for (i = 9; i < 21; i++){
        somma += i * i;
    }
    printf("La somma dei quadrati dei primi 12 numeri naturali successivi a 8 è: %d\n", somma);
    return 0;
}