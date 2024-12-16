/*calcolare la somma dei numeri N naturali minori di a (minore di 10)*/
#include <stdio.h>
int main(){
    int n, a, somma=0;
    do{
        printf("Inserisci a: ");
        scanf("%d", &a);
        printf("Inserisci n: ");
        scanf("%d", &n);

    }while(n>a || a>10);
    for(int i=0; i<=n; i++){
        somma+=i;

    }
    printf("La somma è %d", somma);

}