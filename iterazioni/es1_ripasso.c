/*stampa i primi n numeri dispari successivi al numero a*/
#include <stdio.h>
int main(){
    int n, a, b;
    do{
        printf("Inserisci il valore di a");
        scanf("%d", &a);
        printf("Inserisci il numero di valori n: ");
        scanf("%d", &n);
    }while(a<0 || n<0);
    if(a%2==0){
        a=a+1;
        printf("%d", a);
        
    }
    b=a;
    for(int i=1; i<n; i++){
        b+=2;
        printf("%d", b);
    }
}