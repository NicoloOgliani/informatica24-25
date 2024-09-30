//DATI DUE NUMERI VERIFICARE SE A è IL QUADRATO DI B
#include <stdio.h>
int main (){
    float a=0, b=0, quadrato=0;
    printf("inserisci il valore di a: ");
    scanf("%f", &a);
    printf("inserisci il valore di b");
    scanf("%f", &b);
    quadrato= b*b;
    printf("il quadrato è: %f", quadrato);
    if(quadrato==a)(
        printf("il primo valore %f è il quadrato del secondo %f", a, b);
    )
    else{
        printf("il primo valore %f non è il quadrato del secondo %f", a, b)
        
    }

}