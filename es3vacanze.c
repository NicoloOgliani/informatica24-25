/*Scrivi un programma che realizzi il seguente gioco tra N giocatori umani e il computer. 
All’inizio del gioco ogni giocatore ha un uguale numero NUM di fiches. Vengono giocate alcune
 manches dove a ogni turno ciascun giocatore effettua una puntata di una fiche e riceve dal banco casualmente una carta:
il giocatore con la carta più alta vince tutte le fiches puntate nella mano corrente;
se c’è più di un singolo giocatore con la carta più alta, il banco prende tutto.
Il gioco termina quando un giocatore ha perso tutte le fiches.
*/
#include <stdio.h>
int main(){
    int N, carta, fiches;
    do{
        printf("Quanti giocatori partecipano? ");
        scanf("%d", &N);

    }while(n<=0);
    srand(time(NULL));
    fiches=rand()%100000+0;
    printf("Ogni giocatore ha %d fiches ");
    
}