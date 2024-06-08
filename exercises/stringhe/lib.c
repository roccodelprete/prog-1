#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

void load_string(char s[]) {
    printf("\nInserire testo: ");
    gets(s);
}

int contaParole(char s[], int m) {
    int i, nParole=0;
    boolean startParola=false;
    char c;

    for(i=0; i<m; i++) {
        c=s[i];
        if(c==' ')
            startParola=false;
        else if(!startParola) {
            startParola=true;
            nParole++;
        }
    }
    return nParole;
}

int string_matching(char s[], char key[]) {
    int i, n_occ=0, n, m;
    n=strlen(s);
    m=strlen(key);
    for(i=0; i<n-m; i++) {
        if(strncmp(key, s+i, m)==0)
            n_occ++;
    }
    return n_occ;
}

int punteggio_matching(char key[], char s[], int n) {
    int i, count;
    for(i=0; i<n; i++) {
        if(key[i]==s[i])
        count++;
    }
    return count;
}

int best_matching(char key[], char s[]) {
    int i, index, punteggio_max=0, punteggio, n, m;
    n=strlen(s);
    m=strlen(key);
    for(i=0; i<n-m; i++) {
        punteggio=punteggio_matching(key, s+i, m);
        if(punteggio>punteggio_max) {
            punteggio_max=punteggio;
            index=i;
        }
    }
    return index;
}
