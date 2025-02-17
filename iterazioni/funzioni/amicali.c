/*data una seuqenza di valori verificare se i valori presi a coppie risultano amicali, si termina quando uno dei valori è 0*/
#include <stdio.h>
int amicali(int _n1, int _n2, int _somma1, int _somma2, int _cnt);

int main(){
    int num1, num2, somma1=0, somma2=0, cnt=0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);
        cnt++;
    }while(num1 <0 || num2 < 0 || cnt<=5);
    int amicali(num1, num2, somma1, somma2, cnt)
    return 0;
}
int amicali(int _n1, int _n2, int _somma1, int _somma2, int _cnt){
    for(int _i = 1; _i < _n1; _i++){
        if(_n1 % _i == 0){
            _somma1 += _i;
        }
    }
    for(int _i = 1; _i < _n2; _i++){
        if(_n2 % _i == 0){
            _somma2 += _i;
        }
    }
    if(_somma1 == _n2 && _somma2 == _n1){
        printf("i numeri %d e %d sono numeri amicali", _n1, _n2);
    
    }else{
        printf("i numeri %d e %d non sono numeri amicali", _n1, _n2);
    }
}