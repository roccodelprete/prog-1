#include <stdio.h>
#include "lib.h"
#include <stdlib.h>

int main() {
    int n, size;
    char elenco[]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    char chiave='a';
    printf("\nInserisci n: ");
    scanf("%d", &n);
    printf("\nInserisci size array: ");
    scanf("%d", &size);
    int a[100];
    loadArray(a, size);
    printf("\nSOMMA");
    printf("\n\tSomma = %d\n", somma(n));
    printf("\nSOMMA RICORSIVA CON ARRAY");
    printf("\n\tSomma = %d\n", somma_ricorsiva_array(a, size));
    printf("\nFATTORIALE");
    printf("\n\tFattoriale = %d\n", fattoriale(n));
    printf("\nSOMMA FIBONACCI");
    printf("\n\tFibonacci = %d\n", fibonacci(n));
    printf("\nRICERCA BINARIA");
    if(ricerca_binaria(chiave, elenco, sizeof(elenco)))
        printf("\n\tLa ricerca ha avuto esito positivo. :D\n");
    else
        printf("\n\tLa ricerca ha avuto esito negativo. :(\n");
    printf("\nCALCOLO MASSIMO");
    printf("\n\tMassimo = %d\n", max_array(a, size));
}
