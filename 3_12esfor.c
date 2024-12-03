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
    for(int h=0; h<9; h++){
        for(int b=0; b<9; b++){
            if(h==8 || (h==0 && b==4) || (h==2 && (b==3 || b==5)) || (h==4&& (b==2 || b==6)) || ((b==1 || b==7) && h==6)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n")
    }
}