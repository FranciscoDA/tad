
#include <stdlib.h>
#include "ListaArreglo.h"

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

bool ListaRecuperar(const Lista* l, Elemento* dest, const ListaPosicion p)
{
	if (p == LISTA_NULL)
		return false;

	*dest = (*l).elementos[p];
	return true;
}
ListaPosicion ListaBuscar(
	const Lista* l,
	const Elemento* e,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
)
{
	Elemento x;
	ListaPosicion p = (*l).inicio;
	while (ListaRecuperar(l, &x, p) && !cmp(e, &x, t))
		p = ListaSiguiente(l, p);

	return p;
}

ListaPosicion ListaAnterior(const Lista* l, const ListaPosicion p)
{
	if (p == (*l).inicio)
		return LISTA_NULL;

	return p - 1;
}

ListaPosicion ListaSiguiente(const Lista* l, const ListaPosicion p)
{
	if (p == (*l).fin)
		return LISTA_NULL;

	return p + 1;
}

ListaPosicion ListaOrdinal(const Lista* l, size_t plogica)
{
	return (ListaPosicion) plogica;
}

ListaPosicion ListaAgregar(Lista* l, const Elemento* e)
{
	if (ListaLlena(l))
		return LISTA_NULL;
	if (ListaVacia(l))
	{
		(*l).fin = 0;
		(*l).inicio = 0;
	}
	else
		++(*l).fin;

	++(*l).qItems;
	(*l).elementos[(*l).fin] = (*e);
	return (*l).fin;
}

ListaPosicion ListaInsertar(Lista* l, const Elemento* e, const ListaPosicion p)
{
	if(ListaLlena(l))
		return LISTA_NULL;

	++(*l).fin;
	++(*l).qItems;
	ListaPosicion p2 = ListaAnterior(l, (*l).fin);
	while(p2 != p && p2 != LISTA_NULL)
	{
		(*l).elementos[ListaSiguiente(l, p2)] = (*l).elementos[p2];
		p2 = ListaAnterior(l, p2);
	}
	if (p2 == LISTA_NULL)
	{
		ListaEliminar(l, (*l).inicio);
		return LISTA_NULL;
	}
	(*l).elementos[p2] = (*e);
	return p2;
}

ListaPosicion ListaEliminar(Lista* l, const ListaPosicion p)
{
	if (ListaVacia(l))
		return LISTA_NULL;

	ListaPosicion p2 = ListaSiguiente(l, p);
	while (p2 != LISTA_NULL)
	{
		(*l).elementos[ListaAnterior(l, p2)] = (*l).elementos[p2];
		p2 = ListaSiguiente(l, p2);
	}
	(*l).fin = ListaAnterior(l, (*l).fin);
	--(*l).qItems;
	if ((*l).fin == LISTA_NULL)
		(*l).inicio == LISTA_NULL;

	return p;
}

bool ListaActualizar(Lista* l, const Elemento* e, const ListaPosicion p)
{
	if (p == LISTA_NULL)
		return false;

	(*l).elementos[p] = (*e);
	return true;
}

bool ListaIntercambiar(Lista* l, const ListaPosicion p, const ListaPosicion q)
{
	Elemento ep;
	Elemento eq;
	if (ListaRecuperar(l, &ep, p) && ListaRecuperar(l, &eq, q))
	{
		ListaActualizar(l, &ep, q);
		ListaActualizar(l, &eq, p);
		return true;
	}
	return false;
}

void ListaInsertionSort(
	Lista* l,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
)
{
	if (ListaVacia(l))
		return;

	ListaPosicion p = ListaSiguiente(l, (*l).inicio);
	while (p != LISTA_NULL)
	{
		Elemento e;
		ListaRecuperar(l, &e, p);
		ListaPosicion p2 = ListaAnterior(l, p);
		Elemento x;
		while (ListaRecuperar(l, &x, p2) && cmp(&e, &x, t))
		{
			ListaActualizar(l, &x, ListaSiguiente(l, p2));
			p2 = ListaAnterior(l, p2);
		}
		p2 = (p2 == LISTA_NULL) ? (*l).inicio : ListaSiguiente(l, p2);
		ListaActualizar(l, &e, p2);
		p = ListaSiguiente(l, p);
	}
}

void ListaSelectionSort(
	Lista* l,
	bool (*cmp)(const Elemento*, const Elemento*, TIPO_COMPARAR),
	TIPO_COMPARAR t
)
{
	if (ListaVacia(l))
		return;

	ListaPosicion p = (*l).inicio;
	while (p != LISTA_NULL)
	{
		Elemento em;
		ListaPosicion pm = p;
		ListaRecuperar(l, &em, pm);

		Elemento et;
		ListaPosicion pt = ListaSiguiente(l, pm);

		while (ListaRecuperar(l, &et, pt))
		{
			if (cmp(&et, &em, t))
			{
				em = et;
				pm = pt;
			}
			pt = ListaSiguiente(l, pt);
		}
		ListaIntercambiar(l, p, pm);
		p = ListaSiguiente(l, p);
	}
}

