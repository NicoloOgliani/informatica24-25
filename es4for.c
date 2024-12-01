/*14 Scrivi un programma che
 visualizzi i primi 12 multipli
  di un numero n inserito da tastiera usando un ciclo a conteggio.*/
  #include <stdio.h>

int main() {
    int n=0;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    printf("I primi 12 multipli di %d sono:\n", n);
    for (int i = 1; i <= 12; i++) {
        printf("%d ", n * i);
}
}
