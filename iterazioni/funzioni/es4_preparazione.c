/*fattoriale*/
#include <stdio.h>
void fattoriale(int _n){
    int sumfat=1;
    for(int i=1; i<=_n; i++){
        sumfat*=i;
    }
    printf("%d", sumfat);
}
int main(){
    int n;
    do{
        printf("Inserisci n: ");
        scanf("%d", &n);
    }while(n<=0);
    fattoriale(n);
    return 0;
}