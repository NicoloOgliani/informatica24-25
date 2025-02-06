/*dato un valore convertirlo in binario*/
#include <stdio.h>
#include <math.h>

long converti(int _n);

int main(){
    int n;
    long conv=0;
    do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    }while(n<0);
    conv=converti(n);
    printf("%ld\n", conv);
}
long converti(int _n){
    int quoz=_n, resto=0, cnt=0, _conv=0;

    while(quoz=!0){
        resto=quoz%2;
        quoz=quoz/2;
        _conv=resto*pow(10, cnt);
        cnt++;
    }
    return _conv;
}