/*calcolare la somma dei primi n numeri naturali
es: 5  1+2+3+4+5*/
#include <stdio.h>
int main(){
    int n, somma=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<=n; i++){
        somma=somma+i;
    }
    printf("La somma è: %d", somma);
    return 0;
}