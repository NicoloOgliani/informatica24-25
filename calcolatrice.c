/*Scrivi un programma in C che simuli una calcolatrice semplice.
 Il programma deve permettere all'utente 
di scegliere un'operazione tra somma,
 sottrazione, moltiplicazione e divisione.
  Il programma deve quindi chiedere due numeri 
e restituire il risultato dell'operazione scelta.
  Usare il costrutto switch case.*/
#include<stdio.h>
int main()
{
    float num1=0,num2=0;
    float operaz=0;
    char  calc;
    
    printf("Inserisci il primo nuemro: \t");
    scanf("%f",&num1);
    printf("Inserisci il primo nuemro: \t");
    scanf("%f",&num2);
    printf("seleziona il tipo di operazione");
    printf(" a: somma");
    printf(" b: sottrazione");
    printf(" c: moltiplicazione");
    printf(" d: divisione");
    scanf("%c",calc);
    
    switch (calc)
    {
    case 'a':
        operaz=num1+num2;
        printf("La somma tra i numeri è %f",operaz);
        break;
    case 'A':
        operaz=num1+num2;
        printf("La somma tra i numeri è %0f",operaz);
        break;
    case 'b':
        operaz=num1-num2;
        pintf("La sotrazzione tra i numeri è %0f",operaz);
        break;
    case 'B':
        operaz=num1-num2;
        pintf("La sotrazzione tra i numeri è %0f",operaz);
        break;
    case 'c':
        operaz=num1*num2;
        pintf("La moltiplicazione tra i numeri è %0f",operaz);
        break;
    case 'C':
        operaz=num1*num2;
        pintf("La moltiplicazione tra i numeri è %0f",operaz);
        break;
    case 'd':
        operaz=num1/num2;
        pintf("La divisione tra i numeri è %f",operaz);
        break;
    case 'D':
        operaz=num1/num2;
        pintf("La divisione tra i numeri è %f",operaz);
        break;
    default:
        printf("C'è stato un errore");
        break;
    }
}