#include <stdlib.h>
#include "lib.h"

void loadArray(int a[], int n) {
    for(int i=0;i<n;i++) {
        printf("a[%d]=", i);
        scanf("%5d", &a[i]);
    }
}

int somma(int n) {
    if(n==0)
        return 0;
    else
        return somma(n-1)+n;
}

int somma_ricorsiva_array(int a[], int n) {
    if(n==1)
        return a[0];
    else
        return somma_ricorsiva_array(a, n-1)+a[n-1];
}

int fattoriale(int n) {
    if(n==0)
        return 1;
    else
        return fattoriale(n-1)*n;
}

int fibonacci(int n) {
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

boolean ricerca_binaria(char chiave, char elenco[], int n) {
    int mediano;
    boolean esito=false;
    if(n==0)
        return esito;
    mediano=(n-1)/2;
    if(chiave==elenco[mediano]) {
        esito=true;
        return esito;
    } else if(chiave<elenco[mediano])
            return ricerca_binaria(chiave, elenco, mediano);
        else
            return ricerca_binaria(chiave, elenco+mediano+1, n-mediano-1);
}

int calcoloMax(int a, int b) {
    if(a>b)
        return a;
    else
        return b;
}

int max_array(int a[], int n) {
    if(n==1)
        return a[0];
    else
        return calcoloMax(a[n-1], max_array(a, n-1));
}
