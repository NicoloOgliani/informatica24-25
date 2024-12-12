/*dati n numeri in input (con n chiesto all'utente strettamente maggiore di 5)
calcolare e mostrare la somma dei numeri negativi e dei numeri positivi*/
#include <stdio.h>
int main(){
    int n, sommap=0, somman=0, num=0;
    do{
        printf("Inserisci il numero di valoriche vuoi inserire: ");
        scanf("%d",&n);

    }while(n<=5);
     for(int i=0; i<=n; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num>=0){
            sommap=sommap+num;

        }
        else{
            somman=somman+num;
        }
    }
    
    printf("La somma dei numeri positivi è uguale a %d e la somma dei numeri negativi è %d", sommap, somman);
}