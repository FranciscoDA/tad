#include <stdbool.h>
#include "Elemento/Elemento.h"

/* Capacaidad de la pila */
#define PILA_MAX 100

typedef int PilaPosicion;

typedef struct {
	Elemento elementos[PILA_MAX];
<<<<<<< HEAD
=======
	PilaPosicion tope;
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
	int qItems;
} Pila;


void PilaCrear (Pila *p);
bool PilaVacia (Pila *p);
bool PilaLlena (Pila *p);
bool PilaApilar (Pila *p, Elemento x);
bool PilaDesapilar (Pila *p);
bool PilaRecuperarTope (Pila *p, Elemento *x);
<<<<<<< HEAD
int PilaQItems (Pila *p);
=======
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
char* PilaRetornarAsString (Pila *p);
bool PilaIntercambiar (Pila *p1, Pila *p2, bool CrearVacia);
void PilaSalvar (Pila *p, const char *FileName);
void PilaCargar (Pila *p, const char *FileName);

