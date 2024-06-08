#ifndef lib_h
#define lib_h

int load_size();
void load_array(int *, int);
void print_array(int *, int);
void swap(int *, int *);
void insertion_sort(int *, int);
void selection_sort_min(int *, int);
void selection_sort_max(int *, int);
void max_index(int *, int, int *, int *);
void min_index(int *, int, int *, int *);
void scambiare_stringhe(char **, char **);
int max_index_stringhe(char [][50], int);
void selection_sort_max_stringhe(char [][50], int);

#endif // lib_h
