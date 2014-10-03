#include "Elemento/Elemento.h"

#define ARBOL_MAX_NODOS 1024

typedef int PosicionArbol;

typedef enum
{
	IZQUIERDA = -1,
	CENTRO = 0,
	DERECHA = 1,
	SIN_DIRECCION = 255
} direccion;


typedef struct
{
	Elemento datos;
	PosicionArbol hi; /* Hijo izquierdo */
	PosicionArbol hd; /* Hijo derecho. Se usa como siguiente libre si el nodo no esta ocupado*/
	direccion f_equilibrio;
	bool ocupado;
} NodoArbol;

typedef struct
{
	PosicionArbol raiz;
	NodoArbol nodos [ARBOL_MAX_NODOS];
	int qItems;
	PosicionArbol libre; /* Primer elemento libre*/
} Arbol;

void ArbolCrear (Arbol* a);

PosicionArbol ArbolRaiz (Arbol* a);
int ArbolQItems (Arbol* a);
bool ArbolNulo (Arbol* a);
bool ArbolLleno (Arbol* a);
bool ArbolRamaNula (Arbol* a, PosicionArbol p);

bool ArbolCrearRaiz (Arbol *a, Elemento e);
bool ArbolRecuperarDatos (Arbol* a, PosicionArbol p, Elemento* e);
bool ArbolModificarDatos (Arbol* a, PosicionArbol p, Elemento e);
bool ArbolInsertarHijo (Arbol* a, PosicionArbol p, direccion d, Elemento e);
bool ArbolCargar (Arbol* a); /* Considerar quitarla */

char* ArbolPreOrden (Arbol* a);
char* ArbolInOrden (Arbol* a);
char* ArbolPostOrden (Arbol* a);
char* ArbolAnchura (Arbol* a);
int ArbolAltura (Arbol* a);

PosicionArbol ArbolBuscar (Arbol* a, Elemento e, TIPO_COMPARAR c);
int ArbolNivel (Arbol* a, PosicionArbol p);
PosicionArbol ArbolHijoIzquierdo (Arbol* a, PosicionArbol p);
PosicionArbol ArbolHijoDerecho (Arbol* a, PosicionArbol p);
PosicionArbol ArbolPadre (Arbol* a, PosicionArbol p);

/* Funciones para arboles de busqueda (AVL) */
bool AVLInsertar (Arbol *a, Elemento e, TIPO_COMPARAR c);
bool AVLEliminar (Arbol *a, Elemento e, TIPO_COMPARAR c);
bool AVLBuscar (Arbol *a, Elemento e, TIPO_COMPARAR c);

