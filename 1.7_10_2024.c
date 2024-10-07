/*dato un numero a più cifre
stampare le cifre*/
#include <stdio.h>
int main(){
    int num, u, da, h;
    printf("inserisci il numero ");
    scanf("%d", &num);
    u=num%10;
    da=(num%100)/10;
    h=(num%1000)/100;
    printf("le cifre sono %d,%d,%d", h, da, u);
    return 0;
}