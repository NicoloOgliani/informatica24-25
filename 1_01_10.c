//verificare se un numero dato in input è divisibile sia per 3 sia per 5
#include <stdio.h>
int main (){
    float A;
    printf("inserisci un valore: ");
    scanf("%f", &A);
    if(A %3==0){
        printf("%f è divisibile per 3", A);
    }
    else{
        printf("%d non è divisibile per 3", A);
    }
    if(A %5==0){
        printf("%f è divisibile per 5", A);
    }
    else{
        printf("%f non è divisibile per 5", A)
    }
    if(A % 3==0, A % 5 ==0){
        printf("%f è divisibile sia per 3 che per 5", A)
    }
    else{
        printf("%f non è divisibile ne per 3 ne per 5", A)
    }
}