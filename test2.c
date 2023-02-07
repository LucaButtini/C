#include <stdio.h>
void main()
{
    /* alle vendite di  N prodotti ed il relativo incremento del prezzo secondo una percentuale, visualizzi a video:
    1) Il prezzo incrementato per ogni inserimento effettuato;
    2) Il totale e la media dei prezzi incrementati;
    3) La media dei prezzi incrementati maggiori di 50€;/*/
    float prezzo, totale = 0, media, incr, percentuale, media2, totale2;
    int n, cont = 0, cont2 = 0;
    printf("Quante vendite vuoi inserire? \n");
    scanf("%d", &n);
    while (cont < n)
    {
        printf("Inserisci il prezzo dalla %d° vendita: ", cont + 1);
        scanf("%f", &prezzo);
        printf("Inserisci la percentuale di incremento dalla %d° vendita: ", cont + 1);
        scanf("%f", &percentuale);
        incr = (percentuale * prezzo) / 100;
        prezzo = prezzo + incr;
        printf("il prezzo incrementato risulta: %.2f \n", prezzo);
        totale = totale + prezzo;
        cont++;
        if (prezzo > 50)
        {
            totale2 = totale2 + prezzo;
            cont2++;
        }
    }
    media = totale / cont;
    printf("il totale risulta: %.2f \n", totale);
    printf("il media risulta: %.2f \n", media);
    if (prezzo > 50)
    {
        media2 = totale2 / cont2;
    }
    printf("il media dei prezzi incrementati maggiori di 50€ risulta: %.2f \n", media2);
}
