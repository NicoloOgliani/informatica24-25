/*scrivi un numero positivo e stampa tutti i numeri pari inferiori fino a 0*/
#include <stdio.h>
int main(){
    int n;
    do{
        printf("Inserisci un numero:  ");
        scanf("%d", &n);
    }while(n<0);
    while(n>0){
    if(n%2!=0){
        n=n-1;
        printf("%d", n);
    }
    else{
        n=n-2;
        printf("%d", n);
    }
    }
}