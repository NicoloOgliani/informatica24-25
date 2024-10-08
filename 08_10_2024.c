/*data una data in formato gg mm aaaa
verificare se la data è eccettabile*/
#include <stdio.h>
int main(){
    
    int giorno=0;
    int mese=0;
    int anno=0;

    printf("inserisci il giorno");
    scanf("%d", &giorno);
    printf("inserisci il mese ");
    scanf("%d", &mese);
    printf("inserisci l'anno ");
    scanf("%d", &anno);
    /*un anno è bisestile se è multiplo di 4 ma non di 100 oppure
    multiplo di 400*/
    if(anno%100==0){
        if(anno%400==0){
            printf("l'anno è bisestile");M
        }
    }
    else{
        if(anno%4==0){
            printf("l'anno è bisestile");
        }
        else{
            
        }
    }

}