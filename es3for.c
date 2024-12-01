/*13 Scrivi un programma
 che visualizzi i primi 100 numeri dispari a gruppi di 5.*/
 #include <stdio.h>

int main() {
    int count = 0;
    int num = 1;  // Il primo numero dispari

    // Ciclo per stampare i primi 100 numeri dispari
    for (int i = 1; i <= 100; i++) {
        printf("%d ", num);  // Stampa il numero dispari
        count++;

        if (count == 5) {
            printf("\n");  // Vai a capo dopo ogni 5 numeri
            count = 0;  // Resetta il conteggio dei numeri per la nuova riga
        }

        num += 2;  // Passa al prossimo numero dispari
    }

    return 0;
}