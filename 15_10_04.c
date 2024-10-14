//Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene prima dei due.
#include <stdio.h>
int main(){
    int ore1, minuti1, secondi1, ore2, minuti2, secondi2, totale1, totale2, acc1, acc2;
    acc1=0; 
    acc2=0;

    printf("inserisci ore1: ");
    scanf("%d", &ore1);
    printf("inserisci minuti: ");
    scanf("%d", &minuti1);
    printf("inserisci secondi1 ");
    scanf("%d", &secondi1);
     printf("inserisci ore2: ");
    scanf("%d", &ore2);
    printf("inserisci minuti2: ");
    scanf("%d", &minuti2);
    printf("inserisci secondi2 ");
    scanf("%d", &secondi2);
    //controllo orario1
    if(ore1>0&&ore1<=24){
        if(minuti1>0&&minuti1<60){
            if(secondi1>0&&secondi1<60){
                printf("il primo orario è acc");
                acc1=1;
            }
            else{
                 printf("orario1 non accettabile");
            }
        
        }
        else{
            printf("orario1 non accettabile");
        }
    }
    else{
        printf("orario1 non accettabile");
    }
    //controllo orario2
    if(ore2>0&&ore2<=24){
        if(minuti2>0&&minuti2<60){
            if(secondi2>0&&secondi2<60){
                printf("il secondo orario è acc");
                acc2=1;
            }
            else{
                 printf("orario2 non accettabile");
            }
        
        }
        else{
            printf("orario2 non accettabile");
        }
    }
    else{
        printf("orario2 non accettabile");
    }
    totale1=ore1*3600+minuti1*60+secondi1;
    totale2=ore2*3600+minuti2*60+secondi2;
    if(acc1==1 && acc2==1){
        if(totale1>totale2){
            printf("il primo orario è più grande");
        }
        else if(totale1==totale2){
        printf("i due orari sono uguali");
        }
        else{
        printf("il secondo orario è il più grande");
        }
    }
}