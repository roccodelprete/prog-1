#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

int main() {
    boolean exitFirst=false, exitSecond=false, exitMax=false, exitArray=false, exitInsiemi=false;
    int sceltaInsiemi=0, sceltaArray=0, scelta=0, sceltaMax=0, i, sizeA, sizeB, *sizeC, key, max, index;
    int a[100], b[100], c[100];

    do {
        printf("\n\tQuanti array si desidera caricare?\n\t\t1- Un array\n\t\t2- 2 array\n\t\t3- Exit\n\n\t\t");
        scanf("%d", &sceltaArray);

        switch(sceltaArray) {
            case 1:
                printf("\n\t\tInserire size dell'array.\n\t\t\tsize a= ");
                scanf("%d", &sizeA);

                for(i=0;i<sizeA;i++) {
                    printf("\n\t\tInserire i valori nel primo array.\n\t\t\ta[%d]= ", i);
                    scanf("%d", &a[i]);
                }

                do {
                    printf("\n\t\tMenu\n\t\t\t1- Varianza di un array 1D\n\t\t\t2- Media di un array 1D\n\t\t\t3- Massimo in un array 1D\n\t\t\t4- Ricerca sequenziale in un array\n\t\t\t5- Exit\n\n\t\t\t");
                    scanf("%d", &scelta);

                    switch(scelta) {
                        case 1:
                            printf("\n\t\t\tVarianza: %f\n\t", calcoloVarianza(a, sizeA));
                            break;

                        case 2:
                            printf("\n\t\t\tMedia: %f", calcoloMedia(a, sizeA));
                            break;

                        case 3:
                            do {
                                printf("\n\t\t\tMenu del calcolo massimo\n\t\t\t\t1- Visualizza valore del massimo\n\t\t\t\t2- Visualizza valore del massimo ed indice\n\t\t\t\t3- Visualizza indice del massimo\n\t\t\t\t4- Exit\n\n\t\t\t\t");
                                scanf("%d", &sceltaMax);

                                switch(sceltaMax) {
                                    case 1:
                                        printf("\n\t\t\t\tValore del massimo: %f\n", calcoloMassimo(a, sizeA));
                                        break;

                                    case 2:
                                        calcoloMassimoConIndice(a, sizeA, &max, &index);
                                        printf("\n\t\t\t\tValore del massimo= %d\n\t\t\t\tIndice del massimo= %d\n", max, index);
                                        break;

                                    case 3:
                                        calcoloMassimoIndice(a, sizeA, &index);
                                        printf("\n\t\t\t\tIndice del massimo= %d\n", index);
                                        break;

                                    case 4:
                                        exitMax=true;
                                        break;

                                    default:
                                        printf("\n\t\tScelta %d errata. >:|\n", scelta);
                                        break;
                                }
                            }while(!exitMax);
                            break;

                        case 4:
                            printf("\n\t\t\tInserire la chiave di ricerca.\n\t\t\t\tChiave:");
                            scanf("%d", &key);

                            if(search(key, a, sizeA))
                                printf("\n\t\t\tLa ricerca ha avuto esito positivo. :D\n");
                            else
                                printf("\n\t\t\tLa ricerca ha avuto esito negativo. :,(\n");
                            break;

                        case 5:
                            exitFirst=true;
                        break;

                        default:
                            printf("\n\tScelta %d errata. >:|\n", scelta);
                        break;
                    }
                }while(!exitFirst);
                break;

            case 2:
                printf("\n\t\tInserire size primo array.\n\t\t\tsize a= ");
                scanf("%d", &sizeA);

                printf("\n\t\tInserire size secondo array.\n\t\t\tsize b= ");
                scanf("%d", &sizeB);

                for(i=0;i<sizeA;i++) {
                    //Primo array
                    printf("\n\t\tInserire i valori nel primo array.\n\t\t\ta[%d]= ", i);
                    scanf("%d", &a[i]);
                }

                for(i=0;i<sizeB;i++) {
                    //Secondo array
                    printf("\n\t\tInserire i valori nel secondo array.\n\t\t\tb[%d]= ", i);
                    scanf("%d", &b[i]);
                }

                do {
                    printf("\n\t\tMenu\n\t\t\t1- Uguaglianza tra due array 1D\n\t\t\t2- Merge di due array 1D\n\t\t\t3- Operazioni sugli insiemi\n\t\t\t4- Exit\n\n\t\t\t");
                    scanf("%d", &scelta);

                    switch(scelta) {
                        case 1:
                            if(equality(a, b, sizeA))
                                printf("\n\t\t\tGli array sono uguali. :D\n");
                            else
                                printf("\n\t\t\tGli array sono diversi. :,(\n");
                            break;

                        case 2:
                            printf("\n\t\t\tMerge:\n\t");
                            merge(a, sizeA, b, sizeB, c);
                            for(i=0; i<sizeA+sizeB; i++)
                                printf("\n\t\t\t\tc[%d]= %d\n", i, c[i]);
                            break;

                        case 3:
                            do {
                                printf("\n\t\t\tMenu delle operazioni sugli insiemi\n\t\t\t\t1- Unione\n\t\t\t\t2- Inclusione\n\t\t\t\t3- Intersezione\n\t\t\t\t4- Exit\n\n\t\t\t\t");
                                scanf("%d", &sceltaInsiemi);

                                switch(sceltaInsiemi) {
                                    case 1:
                                        unione(a, sizeA, b, sizeB, c, &sizeC);
                                        for(i=0; i<sizeC; i++)
                                            printf("\n\t\t\t\tc[%d]= %d\n", i, c[i]);
                                        break;

                                    case 2:
                                        if(inclusione(a, sizeA, b, sizeB))
                                            printf("\n\t\t\t\t\L'array a e' incluso nell'array b.\n");
                                        else
                                            printf("\n\t\t\t\t\L'array a non e' incluso nell'array b.\n");
                                        break;

                                    case 3:
                                        intersezione(a, sizeA, b, sizeB, c, &sizeC);
                                        for(i=0; i<sizeC; i++)
                                            printf("\n\t\t\t\tc[%d]= %d\n", i, c[i]);
                                        break;

                                    case 4:
                                        exitInsiemi=true;
                                        break;

                                    default:
                                        printf("\n\t\tScelta %d errata. >:|\n", scelta);
                                        break;
                                     }
                            }while(!exitInsiemi);
                            break;

                        case 4:
                            exitSecond=true;
                            break;

                        default:
                            printf("\n\tScelta %d errata. >:|\n", scelta);
                            break;
                    }
                }while(!exitSecond);
                break;

            case 3:
                exitArray=true;
            break;

            default:
                printf("\nScelta %d errata. >:|\n", sceltaArray);
            break;
        }
    }while(!exitArray);

    return 0;
}
