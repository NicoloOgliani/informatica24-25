/*Esercizio 1
Sviluppa un programma che eroga il resto per un distributore di bevande automatico.
Il cliente sceglie un prodotto (numero intero da 1 a 5) e gli viene visualizzato il costo: 
quindi inizia a inserire monete nell’apposita fessura, che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, 
il programma interrompe l’acquisizione della sequenza e restituisce una serie 
di numeri interi corrispondenti al resto in monete da 1 e 5 centesimi.
*/
#include <stdio.h>
int main(){
    int scelta;
    int cnt5=0, cnt1=0;
    float prezzotot=0, importo=0, resto=0;
    const float costo1=0.30;
    const float costo2=0.40;
    const float costo3=0.50;
    const float costo4=0.70;
    const float costo5=1.00;
    float moneta=0;
    printf("prodotto1: succo, prodotto2: taralli, prodotto3: patatine, prodotto4:kinder, prodotto5:coca cola\t");
    do{
        printf("Scegli un prodotto: ");
        scanf("%d", &scelta);
    }while(scelta <1 || scelta>5);

    switch(scelta){
        case 1:
            prezzotot=costo1;
            break;
        case 2:
            prezzotot=costo2;
            break;
        case 3:
            prezzotot=costo3;
            break;
        case 4:
            prezzotot=costo4;
            break;
        case 5:
            prezzotot=costo5;
            break;
    }
    printf("l'importo da pagare è: %f", prezzotot);
    prezzotot*=100;
    do{
        printf("Inserire i soldi: ");
        scanf("%f", &moneta);
        if(moneta==1 || moneta==5 || moneta==10|| moneta==20 || moneta==50){
            importo=importo+moneta;
        }
        else{
            printf("Moneta non valida");
        }

    }while(importo!=prezzotot);
    if(importo>prezzotot){
        resto=importo-prezzotot;
        while(resto>=5){
            cnt5++;
            resto=resto-5;
        }
        while(resto>=1){
            cnt1++;
            resto=resto-1;
        }
        printf("Il resto è composto da %d monete da 5 e %d monete da 1", cnt5, cnt1);
    }
    else{
        printf("Grazie e arrivederci");
    }
}