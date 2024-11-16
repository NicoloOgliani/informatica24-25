/*Leggere una sequenza di numeri.
Terminare la lettura quando si incontra un numero pari,
 comunicare quanti valori uguali a 0 si sono presentati.*/
 #include <stdio.h>
int main(){
    int num, cnt=0;
    printf("Inserisci un numero:\t");
    scanf("%d", &num);
    while((num%2)!=0){
        printf("Inserisci un altro numero: ");
        scanf("%d", &num);
        if(num==0){
            cnt++;
        }

    }
    printf("Il numero di valori uguale a 0 é: ",cnt);
}