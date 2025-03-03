/*dati i coefficienti di un'equzione di secondo grado trovare delta e le due radici*/
#include <stdio.h>
#include <math.h>
void calcolo_delta(float _a, float _b, float _c, float *_delta){
    *_delta=pow(_b, 2)-4*_a*_c;
}
int controllo_delta(float *_delta){
    if(*_delta >0){
        return 1;
    }
    else if(*_delta==0){
        return 2;
    }
    else{
        return 0;
    }   
}
void radici(float _a, float _b, float _c, float *_delta, float *_radice1, float *_radice2){
    if(controllo_delta(_delta)==1){
        *_radice1=((-1)*_b- sqrt(*_delta))/(2*_a);
        *_radice2=((-1)*_b+ sqrt(*_delta))/(2*_a);
        printf("Le radici sono %.2f e %.2f\n", *_radice1, *_radice2);
    }
    else if(controllo_delta(_delta)==2){
        *_radice1=((-1)*_b)/(2*_a);
        printf("Il delta è 0 e la radice è %.2f", *_radice1);

    }
    else{
        printf("Il delta è negativo e non ci sono radici\n");
    }
}
void concavita(float _a){
    if(_a>0){
        printf("La concavità è verso l'alto");
    }
    else(
        printf("La concavita è verso il basso\n");
    )
}
int main(){
    float a, b, c, delta, radice1, radice2;
    do{
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    printf("Inserisci c: ");
    scanf("%f", &c);
    }while(a==0);
    calcolo_delta(a, b, c, &delta);
    controllo_delta(&delta);
    radici(a, b, c, &delta, &radice1, &radice2);
    concavita(a);
    return 0;

}