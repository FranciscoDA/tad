
#include <stdlib.h>
#include "ListaCursor.h"

void ListaCrear(Lista* l)
{
	(*l).inicio = LISTA_NULL;
	(*l).fin = LISTA_NULL;
	(*l).qItems = 0;
}

bool ListaVacia(const Lista* l)
{
	return ((*l).qItems == 0) && ((*l).inicio == LISTA_NULL) && ((*l).fin == LISTA_NULL);
}

bool ListaLlena(const Lista* l)
{
	return (*l).qItems == LISTA_MAX;
}

ListaPosicion ListaAnterior (const Lista* l, const ListaPosicion p)
{
	return (*l).elementos[p].siguiente;
}
