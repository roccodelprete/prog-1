#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, altezza, area;

    base = 0;
    altezza = 0;
    area = 0;

    printf("Inserire valore della base: ");
    scanf("%d", &base);

    printf("\nInserire valore dell'altezza: ");
    scanf(" %d", &altezza);

    area = base * altezza;

    printf("\nL'area del rettangolo con base %d e altezza %d misura: %d\n", base, altezza, area);

    return 0;
}
