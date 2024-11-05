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
    int voto1, voto2, operazione;
    printf("inserisci il primo voto: \n");
    scanf("%d", &voto1);
    if(voto1>=2||voto1<=10){
        srand(time(NULL));
        voto2=rand()%5+4;
        printf("scegli l'operazione tra:- 1 media dei due voti- 2 voto maggiore- 3 voto minore.- 4 voti sufficiente tra i due\n");
        switch(operazione){
            case 1:{
                operazione=(voto1+voto2)/2;
                printf("la media tra i due voti è: %d", operazione);
                break;
            }
            case 2:{
                if(voto1>voto2){
                printf("il voto maggiore è: %d", voto1);
                }
                else{
                    printf("il voto mggiore è: %d", voto2);
                }
            }
            case 3:{
                if(voto1<voto2){
                    printf("il voto minore è il primo");
                }
                else{
                    printf("il voto minore è il secondo");
                }
                break;
            }
            case 4:{
                if(voto1>=6 && voto2 >=6){
                    printf("tutti e due i voti sono sufficieneti");
                }
                else if(voto1 >=6&&voto2<6){
                    printf("il voto 1 è sufficiente");
                }
                else if(voto1<6 && voto2<6){
                    printf("i due voti sono insufficienti");
                }
                else if(voto1<6 && voto2 >=6){
                    printf("il voto 2 è sufficiente");
                }
            }
        }
    }
    else{
        printf("il valore del primo voto non è accettabile\n");
    }
}