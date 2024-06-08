#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    float raggio;
    raggio = 0;

    float circon;
    circon = 0;

    printf("Inserire valore del raggio.\nRaggio = ");
    scanf("%f", &raggio);

    circonferenza(raggio, &circon);

    printf("\nCirconferenza = %f\n", circon);

    return 0;
}
