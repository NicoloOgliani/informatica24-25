/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
    float  exp=0, num1=0, num2=0, num3=0, num4=0, num5=0;
    int num=0,
    srand(time(NULL));
    printf("Inserisci il numero: ");
    scanf("%d", &num);
    if(num>0 && num<=32){


        num1=num%2;
        num2=num1%2;
        num3=num2%2;
        if((num%2))==0{
        
            if((num1%2)==0){
                if((num2%2)==0){
                    if((num3%2)==0){
                        if((num4%2)==0){
                            if((num5%2)==0)
                                printf("il numero è una potenza di 2")
                    }
                }
                
            }
        }
    }
    }
}