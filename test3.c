#include <stdio.h>

int main() {
    int numero, somma = 0, contatore = 0, contatore_maggiore_7 = 0, somma_pari = 0, contatore_pari = 0, somma_dispari = 0, contatore_dispari = 0;
    float media, media_pari, media_dispari;
    while (somma <= 20) {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        somma += numero;
        contatore++;
        if (numero > 7) {
            contatore_maggiore_7++;
        }
        if (numero % 2 == 0) {
            somma_pari += numero;
            contatore_pari++;
        } else {
            somma_dispari += numero;
            contatore_dispari++;
        }
    }
    media = (float)somma / contatore;
    media_pari = (float)somma_pari / contatore_pari;
    media_dispari = (float)somma_dispari / contatore_dispari;
    printf("La somma dei numeri inseriti e': %d\n", somma);
    printf("La media effettiva dei numeri inseriti e': %f\n", media);
    printf("I numeri maggiori di 7 inseriti sono: %d\n", contatore_maggiore_7);
    printf("La media dei numeri pari inseriti e': %f\n", media_pari);
    printf("La media dei numeri dispari inseriti e': %f\n", media_dispari);
    return 0;
}
