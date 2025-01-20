/*Esercizio4
Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include <stdio.h>
int main(){
    int sceltaordine, num, min_max, cnt = 0;
    printf("Inserisci 1 per stampare i valori in ordine crescente, 2 per stampare i valori in ordine decrescente: ");
    scanf("%d", &sceltaordine);
    printf("Inserisci il numero: ");
    scanf("%d", &num);
    min_max = num;
    cnt++;
    while(num != 0){
        cnt++;
        switch(sceltaordine){
            case 1:{
                if(num>=min_max){
                    min_max=num;
                    printf("%d\n", min_max);
                }
                break;
            }
            case 2:{
                if(num<=min_max){
                    min_max=num;
                    printf("%d\n", min_max);
                }
                break;
            }
            default: {
                printf("Non hai fatto la scelta giusta");
            }
        }
        printf("Inserisci un nuovo valore: ");
        scanf("%d", &num);
    }
    printf("Sono stati inseriti %d valori", cnt);
}