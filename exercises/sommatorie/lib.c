#include <stdlib.h>
#include <math.h>
#include "lib.h"

int sommatoria_numeri_naturali(int n) {
    int i, somma;
    somma=0;

    for(i=1; i<=n; i++)
        somma=somma+i;

    return somma;
}

int sommatoria_formula_Gauss(int n) {
    int somma;

    somma=(n*(n+1))/2;

    return somma;
}

float sommatoria_armonica(int n) {
    int i;
    float somma;
    somma=0.0;

    for(i=1; i<=n; i++)
        somma=somma+1.0F/(float)i;

    return somma;
}

int fattoriale_int(int n) {
    int i;
    int fatt;
    fatt=1;

    if(n>0) {
        for(i=2; i<=n; i++)
            fatt=fatt*i;
    }
    return fatt;
}

float fattoriale_float(int n) {
    int i;
    float fatt;
    fatt=1.0F;

    if(n>0) {
        for(i=2; i<=n; i++)
            fatt=fatt*(float)i;
    }
    return fatt;
}

float sommatoria_geometrica(float x, int n) {
    int i;
    float somma;
    somma=1.0;

    for(i=1; i<=n; i++)
        somma=somma+pow(x, i);

    return somma;
}
