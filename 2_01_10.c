//dati tra numeri stampare: il più piccolo, il più grande e la loro media aritmetica
#include <stdio.h>
int main (){
    float a, b, c, max, min, media;
    printf("inserisci il valore di a: ");
    scanf("%f", &a);
    printf("inserisci il valore di b: ");
    scanf("%f", &b);
    printf("inserisci il valore di c: ");
    scanf("%f", &c);
    media=(a+b+c)/3;
    max=a;
    min=a;
    if(max<b){
        max=b;
        if(max<c);
        max=c;
    }
    else{
        if(max<c);
        max=c;
    }
    printf("il massimo è %f", max);
    if(min>b){
        min=b;
        if(min>c);
        min=c;
    }
    else{
        if(min>c)
            min=c;
    }
    printf("il minimo è %f", min);
    printf("la media è %f", media);
}