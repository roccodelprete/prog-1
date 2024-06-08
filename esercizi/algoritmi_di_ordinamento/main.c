#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    int size= load_size();
    int a[size];
    load_array(a, size);
    print_array(a, size);
    printf("\nINSERTION SORT");
    insertion_sort(a, size);
    print_array(a, size);
    printf("\nSELECTION SORT MINIMO");
    selection_sort_min(a, size);
    print_array(a, size);
    printf("\nSELECTION SORT MASSIMO");
    selection_sort_max(a, size);
    print_array(a, size);
    printf("\nSELECTION SORT MASSIMO CON STRINGHE\n");
    int n, i;
    char elenco[][50]={"Pippo","Gastone","Qui","Pluto", "zio Paperone","Paperino","Paperina"};
    n=7;
    printf("elenco non ordinato\n");
    for (i=0;i<n;i++)
        printf(" %s\n",elenco[i]);
    selection_sort_max_stringhe(elenco, n);
    printf("\nelenco ordinato \n");
    for (i=0;i<n;i++)
        printf(" %s\n",elenco[i]);
    return 0;
}
