/*14 Scrivi un programma che
 visualizzi i primi 12 multipli
  di un numero n inserito da tastiera usando un ciclo a conteggio.*/
  #include <stdio.h>

int main() {
    int n;

    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Stampa i primi 12 multipli del numero n
    printf("I primi 12 multipli di %d sono:\n", n);
    for (int i = 1; i <= 12; i++) {
        printf("%d ", n * i);  // Stampa il moltiplicato
    }
    printf("\n");

    return 0;
}
