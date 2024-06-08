#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

void insert_set(int set) {
    printf("\nInserire set: ");
    scanf("%d", &set);
}

void insert_reset(int reset) {
    printf("\nInserire reset: ");
    scanf("%d", &reset);
}

int nor(int set, int reset) {
    if(set==0 && reset==0)
        return 1;
    else
        return 0;
}

void visualizza_Q_Qn(int Q, int Qn) {
    printf("\nQ= %d\tQ!= %d\n", Q, Qn);
}
