/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1=0, n2=0, somma=0, differenza=0, K=0, scelta=0, maggiore=0, minore=0;
    printf("Inserisci il primo numero: ");
    scanf("%f", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &n2);
    printf("1-somma in valore assoluto, 2-differenza tra il maggiore e il minore, 3-generato un valore K(intero) determinare quale dei valori si avvicina di più, 4-determinare se uno è multiplo dell'altro");
    printf("\nscegli un opzione dal menu: ");
    scanf("%d", &scelta);
    if(scelta>0 && scelta<5){
        switch(scelta){
            case 1:{
                somma=n1+n2;
                printf("La somma è %d", somma);
                break;

            }
            case 2:{
                if(n1>n2){
                    maggiore=n1;
                    minore=n2;
                    differenza=(maggiore-minore);
                    printf("La differenza è %.0d", differenza);
                }
                else{
                    maggiore=2;
                    minore=2;
                    differenza=(maggiore-minore);
                    printf("La differenza è %.0d", differenza);
                }
            break;
            }
            case 3:{
                srand(time(NULL));
                K=rand()%100+1;
                printf("K è uguale a %d", K);
                if((n1-K)>(n2-K)){
                    printf("K si avvicina di più a n2");
                }
                else{
                    printf("K si avvicina di più a n1");
                }
            }
            case 4:{
                if((n1%n2)==0){
                    printf("%d è multiplo di %d\n", n1, n2);
                }
                else if((n2%n1)==0){
                    printf("%d è multiplo di %d", n2, n1);
                }
                else{
                    printf("nessun numero è multiplo dell'altro");
                }
            }

        }
    }


}