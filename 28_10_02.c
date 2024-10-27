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
int main(){
    int num1, num2, num, termina0, somma1 , diff2, molt3, divis4;
    printf("inserisci un numero");
    if(num<0||num>4){
        printf(" il numero inserito non va bene");
    }
    else if(num==0)
        printf("termina il programma");
    else if(num==1)
        somma1=num1+num2;
        printf("la somma tra i due numeri è: %d", somma1);
    else if(num==2)
        diff2=num1-num2;
        printf("la diff è uguale a: %d", diff2);
    else if(num==3)
        molt3=num1*num2;
        printf("la molt tra i numeri è uguale a: %d", molt3);
    else if(num==4)
        divis4=num1/num2;
        printf("la divisione tra i due numeri è uguale a: %d",divis4);
    



    
}    

