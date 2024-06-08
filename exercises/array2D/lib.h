#ifndef lib_h
#define lib_h

int loadColumns();
int loadRow();
void caricaMatrice(int [][100], int, int);
void carica_matrice_pointer_double(double *, int, int, int);
void visualizza_matrice(int [][100], int, int);
void visualizza_matrice_double(double [][100], int, int);
void visualizza_matrice_pointer(int *, int, int, int);
void visualizza_matrice_pointer_double(double *, int, int, int);
void mediaMatrice(int [][100], int, int, double *);
void visualizza_array(double *, int);
void calcoloMax(int [][100], int, int, int *);
void calcolo_media_puntatori_double(double *, int, int, int, double *);
void calcolo_media_double(double [][100], int, int, int, double *);

#endif // lib_h
