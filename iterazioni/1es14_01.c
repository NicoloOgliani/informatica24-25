/* Data una serie di N numeri (con N scelto dall'utente maggiore di 3)
 determinare il valore più grande e quello immediatamente inferiore (il secondo).*/
#include <stdio.h>
int main(){
    int n, num, max, secondo;
    do{
        printf("Inserisci il numero di elementi: ");
        scanf("%d", &n);
    }while(n <= 3);
    for(int i = 0; i < n; i++){
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    if(i == 0){
       max=num;
       secondo=num;
    }
    else if(num > max){
        secondo = max;
        max = num;
    }
    else if(num > secondo){
        secondo = num;
    }
    }
    printf("Il numero più grande è: %d\n", max);
    printf("Il secondo numero più grande è: %d\n", secondo);
}