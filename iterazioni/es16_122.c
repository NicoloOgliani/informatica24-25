/*stampa i primi n numeri dispari successivi al numero a*/
#include <stdio.h>
int main(){
    int n=0, a=0, dispari=0;
    printf("Inserisci il valore di a");
    scanf("%d", &a);
    printf("Inserisci il numero di valori n: ");
    scanf("%d", &n);
    if(a%2==0){
        for(int i=a; i<=n; i++){
            if(i==a){
                dispari+=i;
            }
            else{
                dispari=dispari+2;
            }
        }
    }
    else{
        for(int j=a; j<=n; j+=2){
            if(j==a)
            dispari=a+2;
            else{
                dispari=dispari+2;
            }
        }
    }
    printf("I numeri dispari sono: %d", dispari);

}