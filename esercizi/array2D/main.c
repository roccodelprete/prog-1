#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define n 100

int main() {
    double newMatrice[n][n];

    int righe= loadRow();
    int colonne= loadColumns();

    //int matrice[righe][colonne];
    //double newMatrice[righe][colonne];

    /*printf("\nCaricamento matrice di tipo int\n");
    caricaMatrice(matrice, righe, colonne);*/

    printf("\nCaricamento matrice di tipo double\n");
    carica_matrice_pointer_double(&newMatrice[0][0], n, righe, colonne);

    /*printf("\nvisualizzazione standard\n");
        visualizza_matrice(matrice, righe, colonne);

    printf("\nvisualizzazione matrice di tipo int con puntatori\n");
        visualizza_matrice_pointer(matrice, n, righe, colonne);*/

    printf("\nvisualizzazione matrice di tipo double con puntatori\n");
        visualizza_matrice_pointer_double(&newMatrice[0][0], n, righe, colonne);

    printf("\nvisualizzazione matrice di tipo double senza puntatori\n");
        visualizza_matrice_double(newMatrice, righe, colonne);

    /*printf("\n\nMassimo\n");
        int max[colonne];
        calcoloMax(matrice, righe, colonne, max);*/

    printf("\nMedia\n\t");
        double media_riga[n];
        calcolo_media_puntatori_double(newMatrice, n, righe, colonne, media_riga);
        //calcolo_media_double(newMatrice, n, righe, colonne, media_riga);
        visualizza_array(media_riga, righe);

    return 0;
}
