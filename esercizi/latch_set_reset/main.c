#include <stdio.h>
#include <stdlib.h>

int main() {
    int set, reset, Q, Qn;

    set= insert_set(set);
    reset= insert_reset(reset);

    visualizza_Q_Qn(Q, Qn);

    int a= nor(set, Q);
    int b= nor(reset, Qn);
}
