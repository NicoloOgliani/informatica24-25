//Scrivi un programma che legge in input il valore di due lati di un quadrilatero, individua se si tratta di un quadrato o di un rettangolo e ne calcola il perimetro e l’area.
#include <stdio.h>
int main(){
    float l1, l2, l3, l4, perimetro, area;
    printf("inserisci il valore di l1: ");
    scanf("%f", &l1);
    printf("inserisci il valore di l2: ");
    scanf("%f", &l2);
    if(l1==l2){
        if(l3==l4){
            printf(" si tratta di un quadrato ");
            perimetro=l1*4;
            area=l1*l1;
        
        
        }
        else{
            printf("si tratta di un rettangolo ");
            perimetro=(l1*2)+(l3*2);
            area=l1*l3;
        }
    }
    else{
        printf("si tratta di un rettangolo ");
        area=l1*l3;
        perimetro=(l1*2)+(l3*2);
    }
    printf("l'area del quadrilatero è:", area);
    printf("il perimetro del quadrilatero è: ", perimetro);
}