/*dato un numero n calcolare il suo quadrato sommando 
i primi n numeri dispari
es: n=7  q=49  
1 3 5 7 9 11 13 */
#include <stdio.h>
int main(){
    int n, sommad=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);

    }while(n<0);
    for(int i=1; i<=n*2; i+=2){
        sommad=sommad+i;

    }
    printf("Il quadrato è %d", sommad);
    return 0;

}