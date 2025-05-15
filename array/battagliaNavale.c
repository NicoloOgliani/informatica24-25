/*Scrivi un programma in linguaggio C che permetta di predisporre una griglia di gioco per Battaglia Navale facendo scegliere all’utente dove posizionare ogni nave.
Obiettivi:
Creare una griglia di gioco di dimensione 10x10 rappresentata da una matrice di caratteri.
Utilizza il carattere '.' per indicare le celle vuote.
Utilizza il carattere '#' per indicare le celle occupate da una nave.
L’utente può scegliere di posizionare nella griglia le seguenti navi:
4 navi di dimensione 1 (sottomarini)
3 navi di dimensione 2 (cacciatorpediniere)
2 navi di dimensione 3 (incrociatori)
1 navi di dimensione 4 (corazzate)
1 nave di dimensione 5 (portaerei)
Requisiti:
Scrivi una funzione per ciascun tipo di nave che consenta all'utente di:
Inserire la posizione iniziale della nave.
Scegliere la direzione della nave (orizzontale o verticale).
Verificare se la posizione è valida (la nave non deve uscire dai limiti della griglia e non deve sovrapporsi ad altre navi).
Mostrare la griglia dopo ogni inserimento, in modo che il giocatore possa vedere la posizione delle navi già inserite.
Ripetere il processo fino a quando tutte le navi sono state correttamente posizionate (suggerimento: partire dalla nave di dimensione 5).
*/
#include <stdio.h>
#include <stdlib.h>
#define DIM 10
#define VUOTA '.'
#define OCCUPATA '#'
#define MAX_NAVI 10
#define MAX_DIM_NAVE 5
#define MIN_DIM_NAVE 1
#define NUM_NAVI 10
#define NUM_SOTTOMARINI 4
#define NUM_CACCIATORPEDINIERE 3
#define NUM_INCROCIATORI 2
#define NUM_CORAZZATE 1
#define NUM_PORTAEREI 1
#define NUM_NAVI_TOT (NUM_SOTTOMARINI + NUM_CACCIATORPEDINIERE + NUM_INCROCIATORI + NUM_CORAZZATE + NUM_PORTAEREI)
/*fai le funzioni*/
void inizializzaGriglia(char griglia[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            griglia[i][j] = VUOTA;
        }
    }
}
void stampaGriglia(char griglia[DIM][DIM]){
    printf("  ");
    for(int j = 0; j < DIM; j++){
        printf("%d ", j);
    }
    printf("\n");
    for(int i = 0; i < DIM; i++){
        printf("%d ", i);
        for(int j = 0; j < DIM; j++){
            printf("%c ", griglia[i][j]);
        }
        printf("\n");
    }
}
int verificaPosizione(char griglia[DIM][DIM], int riga, int colonna, int dimensione, char direzione){
    if(direzione == 'o'){ // orizzontale
        if(colonna + dimensione > DIM) return 0; // esce dalla griglia
        for(int j = colonna; j < colonna + dimensione; j++){
            if(griglia[riga][j] == OCCUPATA) return 0; // sovrapposizione
        }
    } else { // verticale
        if(riga + dimensione > DIM) return 0; // esce dalla griglia
        for(int i = riga; i < riga + dimensione; i++){
            if(griglia[i][colonna] == OCCUPATA) return 0; // sovrapposizione
        }
    }
    return 1; // posizione valida
}
void posizionaNave(char griglia[DIM][DIM], int riga, int colonna, int dimensione, char direzione){
    if(direzione == 'o'){ // orizzontale
        for(int j = colonna; j < colonna + dimensione; j++){
            griglia[riga][j] = OCCUPATA;
        }
    } else { // verticale
        for(int i = riga; i < riga + dimensione; i++){
            griglia[i][colonna] = OCCUPATA;
        }
    }
}
void posizionaSottomarino(char griglia[DIM][DIM]){
    int riga, colonna;
    char direzione;
    for(int i = 0; i < NUM_SOTTOMARINI; i++){
        do{
            printf("Posiziona il sottomarino %d (dimensione 1):\n", i + 1);
            printf("Inserisci la riga (0-9): ");
            scanf("%d", &riga);
            printf("Inserisci la colonna (0-9): ");
            scanf("%d", &colonna);
            printf("Inserisci la direzione (o/v): ");
            scanf(" %c", &direzione);
        } while(!verificaPosizione(griglia, riga, colonna, MIN_DIM_NAVE, direzione));
        posizionaNave(griglia, riga, colonna, MIN_DIM_NAVE, direzione);
        stampaGriglia(griglia);
    }
}
void posizionaCacciatorpediniere(char griglia[DIM][DIM]){
    int riga, colonna;
    char direzione;
    for(int i = 0; i < NUM_CACCIATORPEDINIERE; i++){
        do{
            printf("Posiziona il cacciatorpediniere %d (dimensione 2):\n", i + 1);
            printf("Inserisci la riga (0-9): ");
            scanf("%d", &riga);
            printf("Inserisci la colonna (0-9): ");
            scanf("%d", &colonna);
            printf("Inserisci la direzione (o/v): ");
            scanf(" %c", &direzione);
        } while(!verificaPosizione(griglia, riga, colonna, 2, direzione));
        posizionaNave(griglia, riga, colonna, 2, direzione);
        stampaGriglia(griglia);
    }
}
void posizionaIncrociatore(char griglia[DIM][DIM]){
    int riga, colonna;
    char direzione;
    for(int i = 0; i < NUM_INCROCIATORI; i++){
        do{
            printf("Posiziona l'incrociatore %d (dimensione 3):\n", i + 1);
            printf("Inserisci la riga (0-9): ");
            scanf("%d", &riga);
            printf("Inserisci la colonna (0-9): ");
            scanf("%d", &colonna);
            printf("Inserisci la direzione (o/v): ");
            scanf(" %c", &direzione);
        } while(!verificaPosizione(griglia, riga, colonna, 3, direzione));
        posizionaNave(griglia, riga, colonna, 3, direzione);
        stampaGriglia(griglia);
    }
}
void posizionaCorazzata(char griglia[DIM][DIM]){
    int riga, colonna;
    char direzione;
    for(int i = 0; i < NUM_CORAZZATE; i++){
        do{
            printf("Posiziona la corazzata %d (dimensione 4):\n", i + 1);
            printf("Inserisci la riga (0-9): ");
            scanf("%d", &riga);
            printf("Inserisci la colonna (0-9): ");
            scanf("%d", &colonna);
            printf("Inserisci la direzione (o/v): ");
            scanf(" %c", &direzione);
        } while(!verificaPosizione(griglia, riga, colonna, 4, direzione));
        posizionaNave(griglia, riga, colonna, 4, direzione);
        stampaGriglia(griglia);
    }
}
void posizionaPortaerei(char griglia[DIM][DIM]){
    int riga, colonna;
    char direzione;
    for(int i = 0; i < NUM_PORTAEREI; i++){
        do{
            printf("Posiziona la portaerei %d (dimensione 5):\n", i + 1);
            printf("Inserisci la riga (0-9): ");
            scanf("%d", &riga);
            printf("Inserisci la colonna (0-9): ");
            scanf("%d", &colonna);
            printf("Inserisci la direzione (o/v): ");
            scanf(" %c", &direzione);
        } while(!verificaPosizione(griglia, riga, colonna, 5, direzione));
        posizionaNave(griglia, riga, colonna, 5, direzione);
        stampaGriglia(griglia);
    }
}
void posizionaNavi(char griglia[DIM][DIM]){
    posizionaPortaerei(griglia);
    posizionaCorazzata(griglia);
    posizionaIncrociatore(griglia);
    posizionaCacciatorpediniere(griglia);
    posizionaSottomarino(griglia);
}
void giocaBattagliaNavale(){
    char griglia[DIM][DIM];
    inizializzaGriglia(griglia);
    posizionaNavi(griglia);
    printf("Tutte le navi sono state posizionate!\n");
}

int main(){
    giocaBattagliaNavale();
    return 0;
}