#include <assert.h>
#include <string.h>
#include "ArbolCursor/ArbolCursor.h"

int main (int argc, char *argv[])
{
	Arbol arbol;
	PosicionArbol pos;
	PosicionArbol hi, hd;
	bool estado;
	Elemento elem;

	/* Creacion de arbol */
	ArbolCrear (&arbol);
	pos = (ArbolRaiz (&arbol));
	assert (ArbolNulo (&arbol));
	assert (ArbolRamaNula (&arbol, pos));

	/* Creacion de raiz */
	strcpy (elem.DS, "Universo");
	estado = ArbolCrearRaiz (&arbol, elem);
	assert (estado);
	assert (ArbolQItems (&arbol) == 1);
	pos = ArbolRaiz (&arbol);
	assert (!ArbolRamaNula (&arbol, pos));
	hi = ArbolHijoIzquierdo (&arbol, pos);
	hd = ArbolHijoDerecho (&arbol, pos);
	assert (ArbolRamaNula (&arbol, hi));
	assert (ArbolRamaNula (&arbol, hd));

	/* Insercion de elementos */
	pos = ArbolRaiz (&arbol);
	strcpy (elem.DS, "Via Lactea");
	estado = ArbolInsertarHijo (&arbol, pos, IZQUIERDA, elem);
	assert (estado);
	assert (ArbolQItems (&arbol) == 2);
	strcpy (elem.DS, "Andromeda");
	estado = ArbolInsertarHijo (&arbol, pos, DERECHA, elem);
	assert (estado);
	assert (ArbolQItems (&arbol) == 3);

}
