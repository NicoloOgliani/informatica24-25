/*Scrivete una funzione con parametro un intero n(passato per valore)
che stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0*/
#include <stdio.h>
int primo(int _n);
int main(){
    int n;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    int nprimo=primo(n);
    
}
int primo(int _n){
    
    int flag=0;
    for(int i=2; i<_n; i++){
        if(_n%i==0){
            flag=0;
        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        printf("0");
    }
    else{
        printf("1");
    }
}