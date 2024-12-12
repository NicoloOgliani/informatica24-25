/*Dati in input 10 numeri interi determinare
 il valore maggiore e quante volte compare*/
 #include <stdio.h>
 int main(){
    int n=0, cnt=0;
    int magg=0;
    for(int i=0; i!=10; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(i==0){
            magg=n;
        }
        if(n>magg){
            magg=n;
            cnt=1;
        }
        else if(n==magg){
            cnt++;
        }
    }
    printf("Il numero magg è %d e compare %d volte", magg, cnt);
 }