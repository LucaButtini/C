#include <stdio.h>
void main()
{
    /*Scrivere un programma in c che dopo aver acquisito da tastiera un elenco di prezzi relativi alle vendite di N
prodotti ed il relativo incremento del prezzo secondo una percentuale, visualizzi a video:
1) Il prezzo incrementato per ogni inserimento effettuato;
2) Il totale e la media dei prezzi incrementati;
3) La media dei prezzi incrementati maggiori di 50€;
Miglioreranno la qualità del software, i giusti commenti e l’interazione con l’utente. Ogni azione diversa da
quelle richieste o non specificata, che possa essere tramutata in vincolo, dovrà essere necessariamente
esplicitata.*/

    int prodottiComprati=0;
    double prezzo=0, prezzoIncrementato=0, totaleIncrementato=0, mediaPrezzo=0, mediaPrezzoIncrementato=0, sconto=0;

    do {
    Printf("Quanti prodotti hai acquistato?\n");
    scanf("%d",&prodottiComprati);
     }while(prodottiComprati<0);

     for (int i=o; i<prodottiComprati; i++)
     {
        do {
        printf("Scrivi prezzo del prodotto\n");
        scanf("%f", &prezzo);
        }while(prezzo<0);

        do {
            Printf("Scrivi la percentuale");
            scanf("%f", &sconto);
        }while(sconto<0);
        prezzoIncrementato = prezzo * (sconto / 100) + prezzo;
        printf("prezzo %f", &prezzoIncrementato);
     }
}