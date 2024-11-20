/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.
*/
int main(){
	float numero, somma=0, media;
	int cnt=0, flag=0;
	
	printf("Inserisci un numero");
	scanf("%f", &numero);
	somma=numero;
	cnt++;
    if(somma<200)
        printf("Inserisci un numero: ");
        scanf("%f", numero);
        somma=somma+numero;
        cnt++;
    else 
        printf("Hai inserito: %d valori", cnt);
        flag=1;
    if(flag!=1)
        printf("Inserisci un numero: ");
        scanf("%f", numero);
        somma=somma+num;
        cnt++;
    else(if(flag==1))
        media=somma/cnt;
        printf("Hai inserito %d valori e la media è %d", cnt, media);
        flag=1;
    if(flag!=1)
        printf("Inserisci un numero: ");
        scanf("%f", numero);
        somma=somma+numero;
        cnt++;
    else(if(flag==1))
        media=somma/cnt;
        printf("Hai inserito %d valori e la media è %d", cnt, media);
        flag=1;

}