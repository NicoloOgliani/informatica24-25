/*usa il metodo della somma dei numeri dispari
per costruire il quadrato di un numero*/
#include <stdio.h>
void sommaDispari(int *_n, int *_somma, int *_n1);

int main(){
    int n, somma=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    sommaDispari(&n, &somma;
    printf("Il quadrato di %d vale: %d", n, somma);
    return 0;
}
void sommaDispari(int *_n, int *_somma, int *_n1){
    *_somma=0;
    *_n1=1;
    int i;
    for( i=1; i<=*_n; i++){
        printf("%d\t", *_n1)
        *_somma+=*_n1;
        *_n1=*_n1+2;
    }
    
}