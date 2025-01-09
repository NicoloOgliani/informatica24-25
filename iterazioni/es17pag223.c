/*numero perfetto: un numero si dice perfetto quando la somma dei suoi divisori
 senza il numero stesso è uguale al numero
scrivi un programma che ricerca i primi 3 numeri perfetti e li visualizza
sullo schermo
es 6 div=1+2+3=6*/
#include <stdio.h>
int main(){
    int div=2, numero, sumdivisori=0;
    for(int i=1; i<=500; i++){
        for(int j=1; j<=i/2; j++){
            if(i%j==0)
            sumdivisori+=j;
            }
    
         if(sumdivisori==i){
                printf("%d è un numero perfetto ", i);
        }
        sumdivisori=0;
    }
    }   
    
        


