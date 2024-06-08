#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    int n;
    float x;
    n=0;

    printf("\t\tOPERAZIONI ARITMETICHE\n");

    printf("\nInserire valore di n.\n\tn=");
    scanf("%d", &n);

    printf("\nInserire valore di x.\n\tx=");
    scanf("%f", &x);

    //Somma di n numeri naturali
    printf("\nSomma n numeri naturali\n\tSomma=%d\n", sommatoria_numeri_naturali(n));

    //Somma con formula di Gauss
    printf("\nSomma con Gauss\n\tSomma=%d\n", sommatoria_formula_Gauss(n));

    //Somma armonica
    printf("\nSomma armonica\n\tSomma=%f\n", sommatoria_armonica(n));

    //Fattoriale di n numeri naturali
    printf("\nFattoriale n numeri naturali\n\tFattoriale=%d\n", fattoriale_int(n));

    //Fattoriale di n numeri reali
    printf("\nFattoriale n numeri reali\n\tFattoriale=%f\n", fattoriale_float(n));

    //Sommatoria geometrica
    printf("\nSommatoria geometrica\n\tSomma=%f\n", sommatoria_geometrica(x, n));
}
