#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

int loadRow() {
    int righe;

    printf("Inserire righe: ");
        scanf("%d", &righe);
    printf("\n");
    return righe;
}

int loadColumns() {
    int colonne;

    printf("Inserire colonne: ");
        scanf("%d", &colonne);
    printf("\n");
    return colonne;
}

void caricaMatrice(int a[][100], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0;j<m;j++){
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void visualizza_matrice(int a[][100], int n, int m) {
    int i, j;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
}

void visualizza_matrice_pointer(int *pa, int nCol, int n, int m) {
    int i, j;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++)
            printf("%5d", *(pa+nCol*i+j));
        printf("\n");
    }
}

void carica_matrice_pointer_double(double *pa, int nCol, int n, int m) {
    int i, j;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            printf("matrice double[%d][%d]= ", i, j);
            scanf("%lf", (pa+nCol*i+j));
        }
    }
    printf("\n");
}

void visualizza_matrice_pointer_double(double *pa, int nCol, int n, int m) {
    int i, j;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++)
            printf("%5lf", *(pa+nCol*i+j));
        printf("\n");
    }
}

void calcoloMax(int a[][100], int righe, int colonne, int max[100]) {
    int i, j;
    max[0]= a[0][0];
    for (j=0;j<colonne;j++){
        for (i=0;i<righe;i++) {
            if (a[i][j] > max[j])
                max[j] = a[i][j];
        }
        printf("\tIl massimo della colonna %d e': %d\n", j, max[j]);
    }

}

void calcolo_media_puntatori_double(double *a, int n_col, int righe, int colonne, double *media_riga) {
    int i, j;
    double somma= 0.0;

    for(i=0; i<righe; i++) {
        somma= 0.0;
        for(j=0; j<colonne; j++) {
            somma= somma+*(a+n_col*i+j);
        }
        media_riga[i]= somma/colonne;
    }
}

void calcolo_media_double(double a[][100], int n_col, int righe, int colonne, double media_riga[]) {
    int i, j;
    double somma= 0.0;

    for(i=0; i<righe; i++) {
        somma= 0.0;
        for(j=0; j<colonne; j++) {
            somma= somma+a[i][j];
        }
        media_riga[i]= somma/righe;
    }
}

void visualizza_array(double a[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("elemento %d= %lf", i, a[i]);
        printf("\n\t");
    }
    printf("\n");
}

void mediaMatrice(int a[][100], int righe, int colonne, double media_riga[]) {
    int i, j;
    double somma= 0.0;

    for(i=0; i<righe; i++) {
        for(j=0; j<colonne; j++) {
            somma= somma+a[i][j];
        }
        media_riga[i]= somma/righe;
    }
}

void visualizza_matrice_double(double a[][100], int n, int m) {
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%8lf\n", a[i][j]);
    }
}
