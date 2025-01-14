/*Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7)
contare e stampare quelle che hanno i valori l'uno l'opposto dell'altro. (ad esempio 3 e -3 oppure -7 e 7)*/
#include <stdio.h>
int main(){
    int n, a, b, cnt=0;
    srand(time(NULL));
    n = rand()%6+2;
    printf("Il programma genererà %d coppie di numeri casuali.\n", n);
    for(int i=0; i<n; i++){
        printf("Inserisci il primo numero: ");
        scanf("%d", &a);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &b);
        if(a == -b){
            cnt++;
            printf("I numeri %d e %d sono opposti.\n", a, b);
        }
        
    }
}