/*sviluppare un programma in c che stampi il 
triangolo di floyd
n=5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/
#include <stdio.h>
void floyd(int *_n);
int main(){
    int n;
    do{
        printf("Inserisci un numero);
        scanf("%d, &n);
    }while(n<=0);
    floyd(&n);
}
void floyd(int *_n){
    int i;
    int j;

    for(i=1; i<=*_n; i++){
        for(j=1; j<=i; j++){
            printf("%d", *_n);
            
        }
        
    }
}
