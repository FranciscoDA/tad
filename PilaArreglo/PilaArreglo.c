#include <stdbool.h>
#include "PilaArreglo.h"

void PilaCrear (Pila *p)
{
	(*p).qItems = 0;
}

bool PilaVacia (Pila *p)
{
	return ((*p).qItems == 0);
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
		return true;
	}
	else
		return false;
}

bool PilaRecuperarTope (Pila *p, Elemento *x)
{
	if (!PilaVacia (p))
	{
		(*x) = (*p).elementos[(*p).qItems];
		return true;
	}
	else
		return false;
}

int PilaQItems (Pila *p)
{
	return (*p).qItems;
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

