#include <stdio.h>
#include "lib.h"

int ricerca_binaria(char chiave, char elenco[], int n) {
    int mediano, primo=0, ultimo=n-1;
    while(primo<=ultimo) {
        mediano=(primo+ultimo)/2;
        if(chiave==elenco[mediano])
            return mediano;
        else if(chiave<elenco[mediano])
            ultimo=mediano-1;
        else
            primo=mediano+1;
    }
    return -1;
}
