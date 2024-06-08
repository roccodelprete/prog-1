#include <stdlib.h>
#include <math.h>
#include "lib.h"

boolean equality(int a[], int b[], int n) {
    int i=0;
    boolean equal=true;

    while(equal && i<n) {
        if(a[i] != b[i])
            equal=false;
        i++;
    }
    return equal;
}

void merge(int a[], int sizeA, int b[], int sizeB, int c[]) {
    int i = 0, j = 0;
    for(int k = 0; k < sizeA+sizeB; k++) {
        if(i < sizeA && j < sizeB) {
            if(a[i] < b[j]) {
                c[k] = a[i];
                i++;
            } else {
                c[k] = b[j];
                j++;
            }
        } else if(j >= sizeB) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }
}

float calcoloMedia(int a[], int n) {
    int i;
    float somma=0.0;

    for(i=0; i<n; i++)
        somma=somma+(float)a[i];

    return somma/(float) n;
}

float calcoloVarianza(int a[], int n) {
    int i;
    float media, varianza;
    varianza=-1.0;

    if(n>1) {
        varianza=0.0;
        media=calcoloMedia(a, n);
        for(i=0; i<n; i++)
            varianza=varianza+pow(((float)a[i]-media), 2);
        varianza=varianza/(float)(n-1);
    }

    return varianza;
}

float calcoloMassimo(int a[], int n) {
    int i;
    float max=(float)a[0];

    for(i=1; i<n; i++) {
        if((float)a[i]>max)
            max=(float)a[i];
    }

    return max;
}

boolean search(int key, int a[], int n){
    int i=0;
    boolean result=false;

    do{
        if(key==a[i])
            result=true;
        i++;
    }while(result==false && i<n);

    return result;
}

void calcoloMassimoConIndice(int a[], int n, int *max, int *index) {
    int i;
    *max=a[0];
    *index=0;

    for(i=1; i<n; i++) {
        if(a[i]>*max) {
            *max=a[i];
            *index=i;
        }
    }
}

void calcoloMassimoIndice(int a[], int n, int *index) {
    int i;
    *index=0;

    for(i=1; i<n; i++) {
        if(a[i]>a[*index]) {
            *index=i;
        }
    }
}

boolean inclusione(int a[], int sizeA, int b[], int sizeB) {
    int i=0;
    boolean incluso;

    do{
        incluso=search(a[i], b, sizeB);
        i++;
    }while(incluso && i<sizeA);

    return incluso;
}

void unione(int a[], int sizeA, int b[], int sizeB, int c[], int *sizeC) {
    int i;

    for(i=0; i<sizeA; i++)
        c[i]=a[i];

    *sizeC=sizeA;
    for(i=0; i<sizeB; i++) {
        if(!search(b[i], a, sizeA)) {
            c[*sizeC]=b[i];
            *sizeC=*sizeC+1;
        }
    }
}

void intersezione(int a[], int sizeA, int b[], int sizeB, int c[], int *sizeC) {
    int i;
    *sizeC=0;

    for(i=0; i<sizeA; i++) {
        if(search(a[i], b, sizeB)) {
            c[*sizeC]=a[i];
            *sizeC=*sizeC+1;
        }
    }
}
