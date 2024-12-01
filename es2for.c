/*12 Scrivi un programma che disegna
sullo schermo 3 cornici quadrate
concentriche costituite dal carattere “*” rispettivamente di lato 12, 8, e 4.*/
#include <stdio.h>
int lato;
 for (int i = 0; i < lato; i++) {
        for (int j = 0; j < lato; j++) {
            // Stampa "*" se è sulla "cornice" (bordo)
            if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
