/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/
#include <stdio.h>
int main(){
    int n1, nC, mult1, mult2, mult3, num;
    printf("Inserisci il primo numero");
    scanf("%d", &n1);
    if(n1>0&&n1<=20){
        printf("Inserisci il valore C");
        scanf("%d", &nC);
        if(nC>0 && nC<=9){
            if((2*nC)<=20){
                mult1=2*nC;
                
                if((3*nC)<=20){
                    mult2=3*nC;
                    
          

                }
                    if((4*nC)<=20){
                        mult3=4*nC;
                        printf("%d è multiplo di c e minore di n, %d è multilpo di c e minore di n, %d è multiplo di c e minore di n", mult1, mult2, mult3);
        }
        }
    }
    else{
        printf("Hai inserito un valore non valido");
    }
    }
}