/*Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2)
 determinare il valore più piccolo tra quelli incontrati,
 indicandone il numero d'ordine (cioè se era il primo numero inserito, il secondo o terzo e così via).*/
#include <stdio.h>
int main (){
    int n, val, pos, min;
    do{
        printf("Inserisci un numero di valori: ");
        scanf("%d", &n);    
    }while(val<=2);
    for(int i=1; i<=n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &val);
        if(i==1){
            min=val;
        }
        else if(val<min){
            min=val;
            pos=i;
        }
            
    }
    printf("il valore più piccolo è %d ed era il %d", min, pos);
}