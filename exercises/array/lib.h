#ifndef lib_h
#define lib_h

typedef enum {false, true} boolean;

void merge(int *, int, int *, int, int *);
boolean equality(int *, int *, int);
float calcoloVarianza(int *, int);
float calcoloMedia(int *, int);
float calcoloMassimo(int *, int);
void calcoloMassimoConIndice(int *, int, int *, int *);
void calcoloMassimoIndice(int *, int, int *);
boolean search(int, int *, int);

//Operazioni sugli array intesi come insiemi
boolean inclusione(int *, int, int *, int);
void unione(int *, int, int *, int, int *, int *);
void intersezione(int *, int, int *, int, int *, int*);

#endif // lib_h
