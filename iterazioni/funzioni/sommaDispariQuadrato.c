/*usa il metodo della somma dei numeri dispari
per costruire il quadrato di un numero*/
#include <stdio.h>
void sommaDispari(int _n, int _somma, int _n1);

int main(){
    int n, somma=0, n1=1;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    sommaDispari(n, somma, n1);
    return 0;
}
void sommaDispari(int _n, int _somma, int _n1){
    _somma=0;
    _n1=1;
    for(int i=1; i<=_n; i++){
        _somma+=_n1;
        _n1=_n1+2;
    }
    printf("%d", _somma);
}