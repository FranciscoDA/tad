#include <stdbool.h>
#include "PilaArreglo.h"

void PilaCrear (Pila *p)
{
	(*p).qItems = 0;
<<<<<<< HEAD
=======
	(*p).tope = -1;
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
}

bool PilaVacia (Pila *p)
{
<<<<<<< HEAD
	return ((*p).qItems == 0);
=======
	return ((*p).qItems > 0);
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
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
<<<<<<< HEAD
=======
		(*p).tope--;
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
		return true;
	}
	else
		return false;
}

bool PilaRecuperarTope (Pila *p, Elemento *x)
{
	if (!PilaVacia (p))
	{
<<<<<<< HEAD
		(*x) = (*p).elementos[(*p).qItems];
		return true;
=======
	(*x) = (*p).elementos[(*p).tope];
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
	}
	else
		return false;
}

<<<<<<< HEAD
int PilaQItems (Pila *p)
{
	return (*p).qItems;
}

=======
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
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

