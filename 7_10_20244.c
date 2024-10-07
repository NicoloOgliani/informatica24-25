/*stabilire se un numero è dispari
 controllando l'ultima 
cifra meno significativa*/
#include <stdio.h>
int main(){
    int num=0, cifra=0;
    printf("inserisci il numero");
    scanf("%d", &num);
    cifra=num%10;
    if(cifra%2==0){
        printf("il numero %d è pari", num);

    }
    else{
        printf("il numero %d è dispari", num);
    }
}