/*Scrivi un programma in C che disegni usando degli asterischi
* un triangolo rettangolo di lato 8 e poi un triangolo isoscele di base 9 e altezza 9.*/
#include <stdio.h>
int main(){
    for(int i=1; i<=8; i++){
        for(int j=1; j<=i; j++){
            if( j==i ||i==1 || j==1 || i==8 ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}