#include <stdlib.h>
#include "lib.h"

void swap_valori(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
