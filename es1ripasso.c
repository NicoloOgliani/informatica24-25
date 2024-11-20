/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int num, cnt=0, cntk=0, quoziente, resto, k;
    srand(time(NULL));
    num=rand()%10000;
    printf("Il valore è: %d", num);
    srand(time(NULL));
    k=rand()%10;
    printf("Il valore di k è:%d", k)
    quoziente=num;
    if(quoziente!=0){
        resto=quoziente%10;
        quoziente=quoziente/10;
        cnt++;
        if(resto==k){
            cntk++;
        }
    }
    else{
        printf("Hai inserito uno 0, il programma termina");
    }
    if(quoziente!=0){
        resto=quoziente%10;
        quoziente=quoziente/10;
        cnt++;
        if(resto==k){
            cntk++;
        }
    }
    if(quoziente!=0){
        resto=quoziente%10;
        quoziente=quoziente/10;
        cnt++;
        if(resto==k){
            cntk++;
        }
    }
    if(quoziente!=0){
        resto=quoziente%10;
        quoziente=quoziente/10;
        cnt++;
        if(resto==k){
            cntk++;
        }
    }
    printf("Le cifre del numero sono:%d e le cifre uguali a k sono:%d", cnt, cntk);

    
}