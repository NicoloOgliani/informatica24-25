/*Dato il raggio calcolare la circonferenzae l'area del cerchio*/
#include <stdio.h>

void calcolatore(float *_r, float *_area, float *_circ);
int main(){
    int r, a, c;
    do{
        printf("Inserisci il raggio: ");
        scanf("%d", &r);
    }while(r<=0);
    calcolatore(&r, &a, &c);
    printf("%d, %d, %d", r, a, c);



}
void calcolatore(float *_r, float *_areaa, float *_circ){
    return _r*_r*3,14;
    return _r*2*3.14;
}