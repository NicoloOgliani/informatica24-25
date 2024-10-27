/*Dato un numero controllare se è divisibile
o meno per 3 applicando la regola della somma delle cifre
che compongono il numero. ES:   dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 ->
risultato 6 -> ok 6 è multiplo di 3.NNB: qualora il numero fosse a più cifre
vi fermate alla prima somma delle cifre e poi controllate se il risultato è divisibile per 3.*/

#include <stdio.h>
int main(){
    int u, da, h, somma;
    printf("inserisci il numero");
    scanf("%d%d%d", &h, &da, &u);
    if((u+da+h)%3==0){
        printf("il numero è divisibile per 3");
    }
    else{
        printf("il numero non è divisibile per 3");
    }

}