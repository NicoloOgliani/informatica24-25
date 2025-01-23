/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE)
SCAMBIARE TRA DI LORO LE CIFRE DI POSIZIONE PARI*/
#include <stdio.h>
#include <math.h>
int main(){ 
    int n1, n2, cifra1, cifra2, pos1=0, pos2=0, numfinale1, numfinale2;
    do{
    printf("Inserisci due numeri con lo stesso numero di cifre: ");
    scanf("%d %d", &n1, &n2);
    }while(n1<1000 || n1>10000 || n2<1000 || n2>10000);

    while(n1!=0 && n2!=0){
        cifra1=n1%10;
        n1=n1/10;
        pos1++;
        cifra2=n2%10;
        n2=n2/10;
        pos2++;
        if(pos1%2==0){
            numfinale2+=cifra1*pow(10,pos1-1);
        }
        if(pos2%2==0){

        }
    
        }
    }
    
    return 0;

}