/*Esercizio n°6
scrivi un programma che visualizza sullo schermo il triangolo
di Tartaglia utilizzando due cicli a conteggio innestati spaziando opportunamente le cifre
TRIANGOLO DI TARTAGLIA:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/
#include <stdio.h>
int main(){
    int righe, colonne, i, j;
    printf("Inserisci il numero di righe: ");
    scanf("%d", &righe);
    for (i = 0; i < righe; i++){
        for (j = 0; j <= i; j++){
            if (j == 0 || j == i){
                printf("1 ");
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}