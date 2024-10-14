/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica;
 una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/
#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("inserisci i 3 numeri");
    scanf("%d%d%D", &n1, &n2, &n3);
    if(n2-n1==0&&n3-n2==0){
        printf("i numeri fanno parte di una progressione aritmetica");
    }
    else{
        printf("i numeri non fanno parte di una prograssione aritmetica");
    }
}