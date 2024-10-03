//Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro
#include <stdio.h>
int main(){
    float l1, l2, l3, area, perimetro;
    printf("inserisci il valore di l1: ");
    scanf("%f", &l1);
    printf("inserisci il valore di l2: ");
    scanf("%f", &l2);
    printf("inserisci il valore di l3: ");
    scanf("%f", &l3);
    if(l1==l2){
        if(l2==l3){
            printf("si tratta di un triangolo equilatero");
            perimetro=l1+l2+l3;
            area=(√(3)/4)L2.
        }
    
    else{
        printf("non si tratta di un triangolo equilatero");
    }
}