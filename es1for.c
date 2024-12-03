/*11 Scrivi un programma che effettua il prodotto tra due numeri utilizzando
il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>

int main() {
    int num1, num2, somma=0, i;
    do {
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
    } while (num1 < 0);

    do {
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
    } while (num2 < 0);
    for (int i = 0; i <num1; i++) {
        somma += num2;//somma =somma+num2
    }
    printf("Il prodotto tra %d e %d è: %d\n", num1, num2, somma);
    return 0;

}
/*
i    somma    num1   num2
        0       3      10
0      10       3      10
1      20
2      30
3 non entra nel ciclo perchè si ferma quando i diventa uguasle a num1*/