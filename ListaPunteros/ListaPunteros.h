
#include <stdlib.h>
#include "Elemento/Elemento.h"

#define LISTA_MAX 1000
#define LISTA_NULL 0

struct NodoLista;

typedef struct NodoLista* ListaPosicion;

typedef struct
{
	ListaPosicion siguiente;
	ListaPosicion anterior;
	Elemento dato;
} NodoLista;

typedef struct
{
	ListaPosicion inicio;
	ListaPosicion fin;
	size_t qItems;
} Lista;

void ListaCrear(Lista* l);

bool ListaVacia(const Lista* l);
bool ListaLlena(const Lista* l);

ListaPosicion ListaAnterior(const Lista* l, const ListaPosicion p);
ListaPosicion ListaSiguiente(const Lista* l, const ListaPosicion p);
ListaPosicion ListaOrdinal(const Lista* l, size_t plogica);

ListaPosicion ListaAgregar(Lista* l, const Elemento* e);
ListaPosicion ListaInsertar(Lista* l, const Elemento* e, const ListaPosicion p);
ListaPosicion ListaEliminar(Lista* l, const ListaPosicion p);





