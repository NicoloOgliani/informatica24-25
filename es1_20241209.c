/*progettate un algoritmo che legga un numero b<a e scriva quante volte
a è divisibile per b.
es a=162 b=3 a è divisibile 4 volte per b*/
#include <stdio.h>
int main(){
    int a=0, b=0, cnt=0, quoz=0, resto=0;
    do{
        printf("Inserisci il valore di a: ");
        scanf("%d", &a);
        printf("Inserisci il valore di b: ");
        scanf("%d", &b);
        
    }while(a<b);
    quoz=a;
    while(quoz<b || resto!=0){
        if(quoz%b==0){
            resto=quoz%b;
            cnt++;
            quoz=quoz/b;
        }
    }
    printf("a è divisibile %d volte con resto %d per b", cnt, resto);
    


}
    