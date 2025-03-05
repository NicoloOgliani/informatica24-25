/*dato un numero stampare i suoi fattori*/
#include <stdio.h>
void fattori(int _n){
    for(int i=2; i<=_n; i++){
        while(_n%i==0){
            _n/=i;
            printf("%d ", i);
        }
    }
}
int main(){
    int n;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    fattori(n);
    return 0;
}