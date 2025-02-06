/*calcolare il fattoriale di un numero*/

#include <stdio.h>
long fattoriale(int _n);

int main(){
    int n;
    long fatt;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    fatt=fattoriale(n);
    printf("%ld", fatt);

}
long fattoriale(int _n){
    long sumfat=1;
    for(int i=1; i<=_n; i++){
        sumfat*=i;
    }
    return sumfat;
}
