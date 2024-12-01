/*11 Scrivi un programma che effettua il prodotto tra due numeri utilizzando
il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Richiesta dell'input e controllo
    do {
        printf("Inserisci il primo numero (maggiore di 0): ");
        scanf("%d", &num1);
    } while (num1 <= 0);  // Ripete fino a quando il numero non è maggiore di 0

    do {
        printf("Inserisci il secondo numero (maggiore di 0): ");
        scanf("%d", &num2);
    } while (num2 <= 0);  // Ripete fino a quando il numero non è maggiore di 0

    // Calcolo del prodotto tramite somme successive
    int prodotto = 0;

    // Sommiamo 'num1' per 'num2' volte
    for (int i = 1; i <= num2; i++) {
        prodotto += num1;  // Aggiungiamo num1 alla somma
    }

    // Stampa del risultato
    printf("Il prodotto di %d e %d è: %d\n", num1, num2, prodotto);

    return 0;
}
