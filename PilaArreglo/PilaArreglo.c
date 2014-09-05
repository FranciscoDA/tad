#include <stdbool.h>
#include "PilaArreglo.h"

void PilaCrear (Pila *p)
{
	(*p).qItems = 0;
	(*p).tope = -1;
}

bool PilaVacia (Pila *p)
{
	return ((*p).qItems > 0);
}

bool PilaLlena (Pila *p)
{
	return ((*p).qItems == PILA_MAX);
}

bool PilaApilar (Pila *p, Elemento x)
{
	if (!PilaLlena (p))
	{
		(*p).qItems++;
		(*p).elementos[(*p).qItems] = x;
		return true;
	}
	else
		return false;
}

bool PilaDesapilar (Pila *p)
{
	if (!PilaVacia (p))
	{
		(*p).qItems--;
		(*p).tope--;
		return true;
	}
	else
		return false;
}

bool PilaRecuperarTope (Pila *p, Elemento *x)
{
	if (!PilaVacia (p))
	{
	(*x) = (*p).elementos[(*p).tope];
	}
	else
		return false;
}

char* PilaRetornarAsString (Pila *p)
{
}

bool PilaIntercambiar (Pila *p1, Pila *p2, bool CrearVacia)
{
}

void PilaSalvar (Pila *p, const char *FileName)
{
}

void PilaCargar (Pila *p, const char *FileName)
{
}

