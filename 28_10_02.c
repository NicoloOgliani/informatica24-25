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
#include <stdlib.h>
int main(){
    float num1, num2, scelta;
    printf("inserisci un numero dal menu");
    printf("0. termina");
    printf("1. somma");
    printf("2. differenza");
    printf("3. moltiplicazione");
    printf("4. divisione");

    printf("scegli l'operazione");
    scanf("%d", &scelta);
    srand(time(NULL));//generare numero casuale
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






    /*
    if(num<0||num>4){
        printf(" il numero inserito non va bene");
    }
    else if(num==0)
        printf("termina il programma");
    else if(num==1)
        somma1=num1+num2;
        printf("la somma tra i due numeri è: %f", somma1);
    else if(num==2)
        diff2=num1-num2;
        printf("la diff è uguale a: %f", diff2);
    else if(num==3)
        molt3=num1*num2;
        printf("la molt tra i numeri è uguale a: %f", molt3);
    else if(num==4)
        divis4=num1/num2;
        printf("la divisione tra i due numeri è uguale a: %f",divis4);
    */



    
}    

