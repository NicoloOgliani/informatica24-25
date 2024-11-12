/*scrivi un programma che chieda all'utente un numero che sia maggiore di 3
e che indica quanti valori della sequenza di fibonacci mostrare
per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8 */
#include <stdio.h>
int main{
    int num=0, numval=0;
    printf("inserisci un numero\n");
    scanf("%d", &num);
    while(num<3){
        printf("inserisci un numero");
        scanf("%d", &numval);
        while(numval<0 || numval>6){
            if(numval=0){
                printf("non ci sono cifre");
            }
            else if(numval=1){
                printf("1\n");
            }
            else if(numval=2){
                printf(" 1 1\n");
                
            }
        }
    }
}