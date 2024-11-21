/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int anno, mese, giorno, scarto, annoconsegna, meseconsegna, giornoconsegna;
    srand(time(NULL));
    anno=rand()%25+2000;
    printf("L'anno della data generata è: %d", anno);
    srand(time(NULL));
    mese=rand()%12+1;
    printf("Il mese della data generata è %d", mese);
    if(mese!=4 || mese!=6 || mese!=9 || mese!=11){
        srand(time(NULL));
        giorno=rand()%31+1;
        printf("Il giorno della data è %d", giorno);
        if(giorno>=1 && giorno<12){
            giornoconsegna=giorno+20;
        }
        else{
            scarto=(giorno+20)-31;
            giornoconsegna=scarto;
            meseconsegna=mese+1;
    }
    else if(mese!=2){
        srand(time(NULL));
        giorno=rand()%30+1;
        if(giorno>=1 && giorno<11){
            giornoconsegna=giorno+20;

        }
        else{
            scarto=(giorno+20)-30;
            giornoconsegna=scarto;
            meseconsegna=mese+1;
        }
    }
    else{
        if(anno%400==0){
            srand(time(NULL));
            giorno=rand()%29+1;
            if(giorno>=1 && giorno<=9){
                giornoconsegna=giorno+20;
            }
            else{
                scarto=(giorno+20)-29;
                meseconsegna=mese+1;
            }
        }
        else{
            srand(time(NULL));
            giorno=rand()%28+1;
            if(giorno>=1 && giorno<=8){
                giornoconsegna=giorno+20;
            }
            else{
                scarto=(giorno+20)-28;
                meseconsegna=mese+1;
            }
        }
    }
    if(mese==12 && giorno>=12){
        annoconsegna=anno+1;

    }
    printf("La data della consegna è: %d,%d,%d", giornoconsegna, meseconsegna, annoconsegna);

    


}