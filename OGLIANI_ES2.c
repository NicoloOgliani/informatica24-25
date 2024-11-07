/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI. (Massimo 4 valori)*/
#include <stdio.h>
int main(){
    float sommavalori=0, val1=0, val2=0, val3=0, val4=0, media=0;
    int nvalori=0, contatore=0;
    printf("Inserisci il primo valore: ");
    scanf("%f", &val1);
    if(val1>200){
        printf("Hai superato la soglia\n");
        contatore=1;
        nvalori=contatore;
        printf("il numero di valori inseriti è: %d", nvalori);
        media=val1;
        printf("La media è: %f", media);

        
    }
    else
        printf("Inserisci un altro numero per raggiungere la soglia: ");
        scanf("%f", &val2);
        if((val1+val2)>200){
            printf("Hai raggiunto la soglia\n");
            contatore=contatore+1;
            nvalori=contatore;
            printf("il numero di valori inseriti è: %d", nvalori);
            media=(val1+val2)/2;
            printf("La media è: %f", media);
        }
    
        else
            printf("Inserisci un altro numero per raggiungere la soglia: ");
            scanf("%f", &val3);
            if((val1+val2+val3)>200){
                printf("Hai raggiunto la soglia\n");
                contatore=contatore+1;
                nvalori=contatore;
                printf("il numero di valori inseriti è: %d", nvalori);
                media=(val1+val2+val3)/3;
                printf("La media è: %f", media);

            }
        
            else
            printf("Inserisci un altro numero per raggiungere la soglia: ");
            scanf("%f", &val4);
                if((val1+val2+val3+val4)>200){
                    printf("Hai raggiunto la soglia\n");
                    contatore=contatore+1;
                    nvalori=contatore;
                    printf("il numero di valori inseriti è: %d", nvalori);
                    media=(val1+val2+val3+val4)/4;
                    printf("La media è: %f", media);

            }
            
                else
                    printf("Hai superato il numero di tentativi\n");
                
    return 0;


    

}