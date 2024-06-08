#include <stdio.h>
#include <stdlib.h>
#include "cerchio.h"

int main() {
    float raggio = 0;

    printf("Inserire il raggio: ");
    scanf("%f", &raggio);

    float circon = circonferenza(raggio);
    float areaCerchio = area(raggio);

    printf("\ncirconferenza = %f\n", circon);
    printf("\narea = %f\n", areaCerchio);

    return 0;
}
