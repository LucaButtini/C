//confronto
//dati due numeri in input confrontarli e quali due è maggiore e minore (numeri interi)
#include <stdio.h>
void main() {
    int num1,num2;
    printf("Inserisci il primo numero \n");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero \n");
    scanf("%d", &num2);
    if (num1>num2)
    printf("Il numero 1 è maggiore del numero 2 \n");
    else if (num1<num2)
    printf("Il numero 2 è maggiore del numero 1 \n");
    else 
    printf("I numeri sono uguali \n");
}
