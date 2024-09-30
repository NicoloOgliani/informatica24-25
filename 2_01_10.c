//dati tra numeri stampare: il più piccolo, il più grande e la loro media aritmetica
#include <stdio.h>
int main (){
    float a, b, c, media;
    printf("inserisci il valore di a: ");
    scanf("%f", &a);
    printf("inserisci il valore di b: ");
    scanf("%f", &b);
    printf("inserisci il valore di c: ");
    scanf("%f", &c);
    media=(a+b+c)/3;
    if(a>b>c){
        printf("%f è il numero maggiore", a)
        pritf("%f è il numero minore", c)
    }
    else{
        if(b>c>a){
            printf("%f è il numero maggiore",b)
            printf("%f è il numero minore", a)
        }
        else{
            printf("%f è il numero maggiore", c)
            printf("%f è il numero minore, b")
            }
            
        }
    }
    printf("la media dei 3 valri è: %f", media)
}