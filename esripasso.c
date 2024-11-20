/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    float voto1, voto2, media, maggiore, minore;
    int scelta;
    printf("Inserisci il primo voto: ");
    scanf("%f", &voto1);
    srand(time(NULL));
    voto2=rand()%5+4;
    printf("Il secondo voto è: %f", voto2);
    printf("Scegli tra 1:mostrare la media   2:mostrare il maggiore  3:mostrare il minore  4mostrare il sufficiente");
    scanf("%d", &scelta);
    if(voto1<=10&&voto1>=0){
        switch(scelta){
            case 1:{
                media=(voto1+voto2)/2;
                printf("La media è %f", media);
            break;
            }
            case 2:{
                if(voto1>voto2){
                    printf("il primo voto èil maggiore");
                }
                else if(voto1==voto2){
                    printf("I voti sono uguali");

                }
                else if(voto2>voto1){
                    printf("Il secondo è il voto maggiore");
                }
            break;
            }
            case 3:{
                if(voto1<voto2){
                    printf("il primo voto è il minore");
                }
                else if(voto1==voto2){
                    printf("I voti sono uguali");

                }
                else if(voto2<voto1){
                    printf("Il secondo è il voto minore");
                }
                break;
        }
        case 4:{
            if(voto1>=6){
                printf("Voto1 è suff");
            }
            else if(voto2>=6){
                printf("Voto2 è suff");
            }
            else if(voto1>=6&&voto2>=6){
                printf("Tutti e due i voti sono suff");
            }
            else{
                printf("Nessun voto è suff");
            }
        }
        default:{
            ("Hai scelto un valore non adatto");
        
        }
    }
}
}