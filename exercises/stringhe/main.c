#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main() {
    char testo[30], key[20];
    int index_bm=0;
    load_string(testo);
    load_string(key);
    printf("\nCONTA PAROLE\n\tNumero parole: %d\n", contaParole(testo, 256));
    printf("\nSTRING MATCHING\n\tRisultato string matching: %d\n", string_matching(testo, key));
    printf("\nBEST MATCHING\n\t");
    index_bm= best_matching(key, testo);
    puts("Risultato del best matching\n");
    printf("\tinizio sottostringa: %d\nsottostringa di best matching: %s", index_bm);
    for (int i=0;i<strlen(key);i++)
        putchar(testo[index_bm+i]);
}
