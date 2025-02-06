/*calcolare il fattoriale di un numero*/

#include <stdio.h>
void fattoriale(int *_n, long *_fatt);//fattoriale diventa void non più long

int main(){
    int n;
    long fatt=1;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    fattoriale(&n, &fatt);
    printf("%ld", fatt);

}
void fattoriale(int *_n, long *_fatt){

    for(int i=1; i<=*_n; i++){
        *_fatt=*_fatt*i;
    }
    
}