/*Scrivi un programma in C che permetta all'utente di giocare
 a questo gioco: viene estratto un numero casuale da 0 a 100
e l'utente deve indovinarlo in un certo numero di tentativi.
All'inizio i tentativi sono 3, i tentativi disponibili
possono aumentare di 1 se entro i primi 3 tentativi l'utente
si avvicina entro i 20 numeri precedenti o successivi al
numero da indovinare, guadagna un tentativo anche se dopo
si avvicina entro i 10 numeri precedenti o successivi 
e un altro tentativo se si avvicina entro i 5 numeri precedenti o successivi.
*/
#include <stdio.h>
int main(){
    int n, tentativi, tentativi1=0, diff, diff2= 0, diff3= 0, diff1=0;
    srand(time(NULL));
    n = rand() % 100+1;
    printf("Indovina il numero da 0 a 100\n");
    tentativi = 3;
    while(tentativi > 0){
        printf("Inserisci il numero: ");
        scanf("%d", &diff);
        if(diff == n){
            printf("Hai indovinato il numero");
        }
        if(diff > n){
            printf("Il numero è minore");
        }else{
            printf("Il numero è maggiore");
        }
        if(tentativi1 == 2){
            diff1 = diff;
            if(diff1 >= n-20 && diff1 <= n+20){
                tentativi++;
                tentativi1++;
            }
        }
        if(tentativi1 == 1){
            diff2 = diff;
            if(diff2 >= n-10 && diff2 <= n+10){
                tentativi++;
                tentativi1++;
            }
        }
        if(tentativi1 == 0){
            diff3 = diff;
            if(diff3 >= n-5 && diff3 <= n+5){
                tentativi++;
                tentativi1++;
            }
        }
        tentativi--;
    }
    return 0;

}