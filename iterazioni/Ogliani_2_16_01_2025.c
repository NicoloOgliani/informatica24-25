/*Esercizio2
Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int num1, num2, somma1=0, somma2=0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
    }while(num1 <0 || num2 < 0);
    for(int i = 1; i < num1; i++){
        if(num1 % i == 0){
            somma1 += i;
        }
    }
    for(int i = 1; i < num2; i++){
        if(num2 % i == 0){
            somma2 += i;
        }
    }
    if(somma1 == num2 && somma2 == num1){
        printf("i numeri %d e %d sono numeri amicali", num1, num2);
    
    }else{
        printf("i numeri %d e %d non sono numeri amicali", num1, num2);
    }
}