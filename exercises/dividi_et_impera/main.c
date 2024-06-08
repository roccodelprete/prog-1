#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
int main() {
    char elenco[]= {'abcdefghilmnopqrstuvz'};
    printf("Esito ricerca: %d\n", ricerca_binaria('w', elenco, 26));

    return 0;
}
