#include <stdio.h>
#include <string.h>
#include "lib.h"

int load_size(int size) {
    printf("\nInserisci dimensione array: ");
    scanf("%d", &size);
    return size;
}

void load_array(int a[], int size) {
    printf("\nCARICAMENTO ARRAY\n");
    for(int i=0; i<size; i++) {
        printf("    a[%d]= ", i);
        scanf("%5d", &a[i]);
    }
}

void print_array(int a[], int size) {
    printf("\nSTAMPA ARRAY\n");
    for(int i=0; i<size; i++)
        printf("%5d", a[i]);
    printf("\n");
}

void swap(int *a, int *b) {
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}

void insertion_sort(int a[], int size) {
    int i, j, el_da_ins;
    for(i=1; i<size; i++) {
        el_da_ins=a[i];
        j=i-1;
        while(j>=0 && el_da_ins<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=el_da_ins;
    }
}

void min_index(int a[], int size, int *min, int *index) {
    int i;
    *min=a[0];
    *index=0;
    for(i=0; i<size; i++) {
        if(a[i]<*min) {
            *min=a[i];
            *index=i;
        }
    }
}

void max_index(int a[], int size, int *max, int *index) {
    int i;
    *max=a[0];
    *index=0;
    for(i=0; i<size; i++) {
        if(a[i]>*max) {
            *max=a[i];
            *index=i;
        }
    }
}

void selection_sort_min(int a[], int size) {
    int i, min, index;
    for(i=0; i<size-1; i++) {
        min_index(&a[i], size-i, &min, &index);
        swap(&a[i], &a[index+i]);
    }
}

void selection_sort_max(int a[], int size) {
    int i, max, index;
    for(i=size-1; i>0; i--) {
        max_index(a, i+1, &max, &index);
        swap(&a[i], &a[index]);
    }
}

void scambiare_stringhe(char **s1, char **s2) { //scambio con doppio puntatore
    char *temp;
    temp=*s1;
    *s1=*s2;
    *s2=*temp;
}

int max_index_stringhe(char a[][50], int n) {
    int i, index_max=0;
    for(i=1; i<n; i++) {
        if(strcmp(a[i], a[index_max])>0)
            index_max=i;
    }
    return index_max;
}

void selection_sort_max_stringhe(char a[][50], int n) {
    int i;
        for(i=n-1; i>0; i--)
            scambiare_stringhe(a[i], a[max_index_stringhe(a, i+1)]);
}
