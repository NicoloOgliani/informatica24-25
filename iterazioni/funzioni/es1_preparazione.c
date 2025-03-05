/*Scrivete una funzione avente due parametri interi(passati per valore)
b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>


int moltsucc(int _b, int _e){
    int potenza=_b;
    for(int i=1; i<_e; i++){
        potenza*=_b;
    }
    return potenza;
}
int main(){
    int b, e;
    do{
        printf("Inserisci b: ");
        scanf("%d", &b);
        printf("Inserisci e: ");
        scanf("%d", &e);
    }while(b<=0 || e<=0);
    int pow=moltsucc(b, e);
    printf("%d", pow);
    return 0;
}