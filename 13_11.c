/*scrivi un programma che chieda all'utente un numero che sia maggiore di 3
e che indica quanti valori della sequenza di fibonacci mostrare
per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8 */
#include <stdio.h>
int main{
    int num=0, numval=0, n1=0, n2=0, n3=0, contatore=0;
    printf("inserisci un numero\n");
    scanf("%d", &num);
    while(num<3){
        printf("inserisci un numero");
        scanf("%d", &numval);
        while(contatore != num-1){
            n3=n2+n1;
            n1=n2;//nella n2 il valore più grande e nella n1 il più piccolo
            n2=n3;//nella n3 cè la somma di n1 e n2
            contatore=contatore+1;
            printf("%d", n3\n);
        }
            }
        }
    }
}