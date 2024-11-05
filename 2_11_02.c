/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere
all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, sasso perde carta, carta perde forbice.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int scelta, sceltapc;
    printf("sasso=1 \ncarta=2 \nforbice=3\n");
    printf("inserisci un valore dal menu");
    scanf("%d", &scelta);
    srand(time(NULL));
    sceltapc = rand() % 3 + 1;
    if(scelta==1||scelta==2||scelta==3){
        if(scelta==1 && sceltapc==1){
        printf("pareggio");

         }
        else if(scelta==1 && sceltapc==2){
        printf("vince il pc");

        }
        else if(scelta==1 && sceltapc==3){
        printf("hai vinto tu");
        }
        else if(scelta==2 && sceltapc==1){
        printf("hai vinto tu");
        }
        else if(scelta==2 && sceltapc==2){
        printf("pareggio");
         }
        else if(scelta==2 && sceltapc==3){
        printf("vince il pc");
         }
        else if(scelta==3 && sceltapc==1){
        printf("VINCE IL PC");
        }
        else if(scelta==3 && sceltapc==2){
        printf("HAI VINTO TU");
        }
        else if(scelta==3 && sceltapc==3){
        printf("PAREGGIO");
        }
    }
    else{
        printf("scelta non valida\n");
    }
}