#include "ArbolCursor/ArbolCursor.h"

#define NULO -1

/* Declaracion de funciones de uso interno */
PosicionArbol popLibre (Arbol *a);

/* Implementacion de funciones publicas */

void ArbolCrear (Arbol* a)
{
	int i;
	NodoArbol *nodo;

	(*a).raiz = NULO;
	(*a).qItems = 0;

	for (i = 0; i < ARBOL_MAX_NODOS; i++)
	{
		nodo = &((*a).nodos[i]);
		(*nodo).ocupado = false;
		/* hd se usa como cursor al siguiente nodo libre*/
		(*nodo).hd = i+1;
		(*nodo).hi = NULO;
	}
	(*nodo).hd = NULO; /* El ultimo no tiene siguiente */
}

bool ArbolNulo (Arbol* a)
{
	return ((*a).raiz == NULO);
}

bool ArbolLleno (Arbol* a)
{
	return ((*a).qItems == ARBOL_MAX_NODOS);
}

PosicionArbol ArbolRaiz (Arbol *a)
{
	return (*a).raiz;
}

bool ArbolRamaNula (Arbol* a, PosicionArbol p)
{
	return (p == NULO);
}

int ArbolQItems (Arbol* a)
{
	return (*a).qItems;
}

bool ArbolCrearRaiz (Arbol *a, Elemento e)
{
	PosicionArbol pos;
	NodoArbol* nodo;

	pos = popLibre (a);
	if (pos != NULO)
	{
		nodo = &((*a).nodos[pos]);
		(*nodo).datos = e;
		(*nodo).hi = NULO;
		(*nodo).hd = NULO;
		(*nodo).f_equilibrio = SIN_DIRECCION;
		(*nodo).ocupado = true;
		(*a).qItems++;
		(*a).raiz = pos;
		return true;
	} else {
		return false;
	}
}

bool ArbolRecuperarDatos (Arbol* a, PosicionArbol p, Elemento* e)
{
}

bool ArbolModificarDatos (Arbol* a, PosicionArbol p, Elemento e)
{
}

bool ArbolInsertarHijo (Arbol* a, PosicionArbol p, direccion d, Elemento e)
{
}

bool ArbolCargar (Arbol* a) /* Considerar quitarla */
{
}

char* ArbolPreOrden (Arbol* a)
{
}

char* ArbolInOrden (Arbol* a)
{
}

char* ArbolPostOrden (Arbol* a)
{
}

char* ArbolAnchura (Arbol* a)
{
}

int ArbolAltura (Arbol* a)
{
}

PosicionArbol ArbolBuscar (Arbol* a, Elemento e, TIPO_COMPARAR c)
{
}

int ArbolNivel (Arbol* a, PosicionArbol p)
{
}

PosicionArbol ArbolHijoIzquierdo (Arbol* a, PosicionArbol p)
{
	NodoArbol *nodo;
	if ((p != NULO) && !ArbolNulo (a))
	{
		nodo = &((*a).nodos[p]);
		return (*nodo).hi;
	} else {
		return NULO;
	}
}

PosicionArbol ArbolHijoDerecho (Arbol* a, PosicionArbol p)
{
	NodoArbol *nodo;
	if ((p != NULO) && !ArbolNulo (a))
	{
		nodo = &((*a).nodos[p]);
		return (*nodo).hd;
	} else {
		return NULO;
	}
}

PosicionArbol ArbolPadre (Arbol* a, PosicionArbol p){}

/* Funciones para arboles de busqueda (AVL) */
bool AVLInsertar (Arbol *a, Elemento e, TIPO_COMPARAR c)
{
}

bool AVLEliminar (Arbol *a, Elemento e, TIPO_COMPARAR c)
{
}

bool AVLBuscar (Arbol *a, Elemento e, TIPO_COMPARAR c)
{
}


/* Implementacion de funciones de uso interno */
PosicionArbol popLibre (Arbol* a)
{
	PosicionArbol ret;

	ret = (*a).libre;
	if (ret != NULO)
	{
		(*a).libre = (*a).nodos[ret].hd;
		(*a).nodos[ret].hd = NULO;
	}
	return ret;
}
