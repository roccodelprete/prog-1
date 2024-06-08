#ifndef lib_h
#define lib_h

typedef enum {false, true} boolean;

void load_string(char *);
int contaParole(char *, int);
int string_matching(char *, char *);
int punteggio_matching(char *, char *, int);
int best_matching(char *, char *);

#endif // lib_h
