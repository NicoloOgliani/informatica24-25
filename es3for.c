/*13 Scrivi un programma
 che visualizzi i primi 100 numeri dispari a gruppi di 5.*/
 #include <stdio.h>

int main() {
    int cnt = 0, num=1;
    for (int i = 1; i <= 100; i++) {
        printf("%d ", num);
        cnt++;
        if (count == 5) {
            printf("\n"); 
            cnt = 0; 
        }

        num += 2;
    }

    return 0;
}