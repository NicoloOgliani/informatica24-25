/*stampa i primi n numeri dispari successivi al numero a*/
#include <stdio.h>
int main(){
    int n=0, a=0, ope=0;
    do{
    printf("Inserisci il valore di a");
    scanf("%d", &a);
    printf("Inserisci il numero di valori n: ");
    scanf("%d", &n);
    }while(n<0||a<0);
    if(a%2==0){
        a=a+1;
        printf("%d", a);
    }
    ope=a;
    for(int i=1; i<n; i++){
        ope=ope+2;
        printf("\t%d", ope);
    }

}