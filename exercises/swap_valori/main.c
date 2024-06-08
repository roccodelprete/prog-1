#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    int x = 0;
    int y = 0;

    printf("Inserire valore di x = ");
    scanf("%d", &x);

    printf("Inserire valore di y = ");
    scanf("%d", &y);

    printf("\nEffettuo lo swap dei valori...");
    swap_valori(&x, &y);
    printf("\nSwap effettuato! :D\n");

    printf("\nx = %d\ny = %d\n", x, y);

    return 0;
}
