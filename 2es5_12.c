/*dati n numeri sommarli in gruppi da 4 
termina appena si introduce uno 0*/
#include <stdio.h>
int main(){
    int n, somma=0, cnt=0;
    do{
        if(cnt%4==0 && cnt!=0){
            printf("La somma è uguale a: %d\n ", somma);
            somma=0;
        }
        printf("Inserisci un numero");
        scanf("%d", &n);
        somma=somma+n;
        cnt++;
    }while(n!=0);
    printf("il programma termina");
    return 0;
}