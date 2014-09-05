
#include <stdlib.h>
#include "Elemento/Elemento.h"

#define LISTA_MAX 1000
#define LISTA_NULL -1

typedef size_t ListaPosicion;

typedef struct {
	Elemento elementos [LISTA_MAX];
	ListaPosicion inicio;
	ListaPosicion fin;
	size_t qItems;
} Lista;

void ListaCrear(Lista* l);

bool ListaVacia(const Lista* l);
bool ListaLlena(const Lista* l);

bool ListaRecuperar(const Lista* l, Elemento* dest, const ListaPosicion p);
ListaPosicion ListaBuscar(
	const Lista* l,
	const Elemento* e,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
);

ListaPosicion ListaAnterior(const Lista* l, const ListaPosicion p);
ListaPosicion ListaSiguiente(const Lista* l, const ListaPosicion p);
ListaPosicion ListaOrdinal(const Lista* l, size_t plogica);

ListaPosicion ListaAgregar(Lista* l, const Elemento* e);
ListaPosicion ListaInsertar(Lista* l, const Elemento* e, const ListaPosicion p);
ListaPosicion ListaEliminar(Lista* l, const ListaPosicion p);
bool ListaActualizar(Lista* l, const Elemento* e, const ListaPosicion p);
bool ListaIntercambiar(Lista* l, const ListaPosicion p, const ListaPosicion q);

void ListaInsertionSort(
	Lista* l,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
);
void ListaSelectionSort(
	Lista* l,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
);

