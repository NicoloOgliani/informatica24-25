/*Scrivi un programma che permetta all’utente
 di inserire 5 numeri interi e verifichi se questi numeri 
appartengono alla sequenza dei numeri naturali,
 cioè sono tutti differenti e hanno tra di loro distanza
unitaria nella linea dei numeri. (ad esempio la sequenza
3-4-5-6-7
è una sequenza adeguata, 3-4-5-7-8 non è una sequenza adeguata)*/
#include <stdio.h>
int main (){
    int n1, n2, n3, n4, n5;
    printf("inserisci i numeri ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if(n2==n1+1&&n3==n2+1&&n4==n3+1&&n5==n4+1){
        printf("la sequenza appartiene ai numeri naturali ");
    }
    else{
        printf("la sequenza non è corretta ");
    }
}