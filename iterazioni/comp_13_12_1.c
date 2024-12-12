/*Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2)
 determinare il valore più piccolo tra quelli incontrati,
 indicandone il numero d'ordine (cioè se era il primo numero inserito, il secondo o terzo e così via).*/
#include <stdio.h>
int main(){
    int val, n, min, cnt=0, posizione=0;
    do{
        printf("Inserisci il numero di valori da inserire: ");
        scanf("%d", &val);   
    }while(val<=2);
    for(int i=0; i<val; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        cnt++;
        if(i==0){
            min=val;

        }
        else if(val<min){
            min=val;
            posizione=cnt;
        }
    }
    printf("Il valore più piccolo è %d ed è il numero %d", min, posizione);

}