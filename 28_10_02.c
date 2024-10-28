/*Creare una sorta di menù( vedi esempio) tramite dei printf per
 la scelta dell'operazione da compiere tra due valori generati casualmente
 ( eseguendo lì dove c'è bisogno gli opportuni controlli).
  Comunicare il risultato dell'operazione o la scelta dell'utente di non
   fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    float num1, num2;
    int scelta;
    printf("inserisci un numero dal menu");
    printf("\n 0. termina");
    printf("\n 1. somma");
    printf("\n 2. differenza");
    printf("\n 3. moltiplicazione");
    printf("\n 4. divisione");

    printf("\n scegli l'operazione");
    scanf("%f", &scelta);
    srand(time (NULL));//generare numero casuale
    num1=rand()%50+1;
    num2=rand()%50+1;

    switch (scelta){
        case 0:
            printf("\n il programma è terminato");
            break;
        case 1:
            printf("\n la somma è: %.2f", num1+num2);
            break;
        case 2:
            printf("\n la differenza è %.2f", num2-num1);
            break;
        case 3:
            printf("\n il prodotto è %.2f", num1*num2);
            break;
        case 4:
            printf("\n la divisione è %.2f", num1/num2);
            break;
        default:
            printf("\n la scelta non è acc");
            break;
    }
    return 0;
}


