/*dato un numero stampare il triangolo di floyd
es n=5
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 */
#include <stdio.h>
void floyd(int _n){
    int cnt=1;
    for(int i=1; i<=_n; i++){
        for(int j=1; j<=i; j++){
            printf("%d", cnt);
            cnt++;
        }
        
    }
    printf("\n");
}
int main(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    floyd(n);
    return 0;
}