/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo
 (perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/
#include <stdio.h>
int main(){
    int l1, l2, l3;
    printf("insrisci i 3 numeri");
    scanf("%d%d%d", &l1, &l2, &l3);
    if(l3>l1+l2 && l2>l1+l3 && l1>l2+l3){
        printf("i lati possno essere giusti");
    }
    else{
        printf("i dati non sono accettabili");
    }
}