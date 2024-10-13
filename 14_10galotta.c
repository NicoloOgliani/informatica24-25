/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include stdio.h
int main(){
    int giorno1, mese1, anno1, giorno2, mese2, anno2;
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
    if(anno1>anno2){
        printf("data1 è più recente");
    }
    else if(anno1==anno2){
        if(mese1>mese2){
            printf("la data 1 è la più recente");
        }
        else if(giorno1>giorno2){
            printf("la data1 è più recente")
        }

    }
    else{
        printf("la data2 è la più recente")
    }




}
