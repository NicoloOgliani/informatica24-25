/*prototipi delle funzioni*/
void richiediValori(int vett[], int dim);
/**funzione che richiede i valori da inserire in un vettore
 * @param int vett[]vettore in cui inserire i valori
 * @param int dim dimensione del vettore
 */

void stampaVett(int vett[],int dim,char sep);
/**funzione che stampa un vettore
 * @param int vett[] vettore da stampare
 * @param int dim dimensione del vettore
 * @param char sep separatore tra i vettori  
 */
void caricaVettoreRandom(int vett[], int dim, int min, int max);
/**
 * funzione che carica un vettore con valori random
 * @param int vett[] vettore da caricare
 * @param int dim dimensione del vettore
 * @param int min valore minimo
 * @param int max valore massimo
 */
int somma(int vett[], int dim);
/**
 * funzione che calcola la somma dei valori di un vettore
 * @param int vett[] vettore di cui calcolare la somma
 * @param int dim dimensione del vettore
 * @return int somma dei valori del vettore
 */
float media(int vett[], int dim);
/**
 * funzione che calcola la media dei valori di un vettore
 * @param int vett[] vettore di cui calcolare la media
 * @param int dim dimensione del vettore
 * @return float media dei valori del vettore
 */