/*data una data in formato gg mm aaaa
verificare se la data è eccettabile*/
#include <stdio.h>
int main(){
    
    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;

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
            printf("l'anno è bisestile ");
            bisestile=1;
        }
    }
    else{
        if(anno%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }
    //CONTROLLO MESE e giorno
    if(mese>0&&mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile);{
            //la variabile bisestile va a uno solo se l'anno è bisestile (verificato prima)
            printf("la data è accettabile");}
            else{
                printf("la data è accettabile ");
            }
        }
        else{
            if(mese==11|| mese==4 || mese==6|| mese==9){
                if(giorno>=1 && giorno <=30){
                    printf("la data è accettabile ");

                }
                else{
                    printf("la data non è accettabile");
                }
            }
            else{
                if(giorno>=1&&giorno<=31){
                    printf(" la data è accettabile ");
                }
                else{
                    printf("la data non è accettabile");
                }
            }
        }

    }
    return 0;

}