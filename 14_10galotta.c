/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include <stdio.h>
int main(){
    int anno, bisestile, giorno, mese, giorno1, mese1, anno1, giorno2, mese2, anno2;
     printf("inserisci giorno1: ");
    scanf("%d", &giorno1);
    printf("inserisci mese: ");
    scanf("%d", &mese1);
    printf("inserisci l'anno non maggiore a 2024 ");
    scanf("%d", &anno1);
     printf("inserisci giorno2: ");
    scanf("%d", &giorno2);
    printf("inserisci mese2: ");
    scanf("%d", &mese2);
    printf("inserisci anno2 non maggiore a 2024 ");
    scanf("%d", &anno2);
    
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
    if(mese>0 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile)
                //la variabile bisestile va a uno solo se l'anno è bisestile (verificato prima)
                printf("la data non è accettabile");
            else
                printf("la data è accettabile ");
            
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
    if(anno1>anno2){
        printf("data1 è più recente");
    }
    else if(anno1==anno2){
        if(mese1>mese2){
            printf("la data 1 è la più recente");
        }
        else if(giorno1>giorno2){
            printf("la data1 è più recente");
        }

    }
    else{
        printf("la data2 è la più recente");
    }




}
