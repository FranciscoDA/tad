
#include <stdbool.h>
#include <string.h>
#include "Elemento.h"

bool ElementoMayor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t)
{
	if (t == TC_ENTERO)
		return (*a).DI > (*b).DI;
	else if (t == TC_REAL)
		return (*a).DR > (*b).DR;
	else if (t == TC_STRING)
		return strcmp((*a).DS, (*b).DS) > 0;
}
bool ElementoMenor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t)
{
	if (t == TC_ENTERO)
		return (*a).DI < (*b).DI;
	else if (t == TC_REAL)
		return (*a).DR < (*b).DR;
	else if (t == TC_STRING)
		return strcmp((*a).DS, (*b).DS) < 0;
}
bool ElementoIgual(const Elemento* a, const Elemento* b, TIPO_COMPARAR t)
{
	if (t == TC_ENTERO)
		return (*a).DI == (*b).DI;
	else if (t == TC_REAL)
		return false;
	else if (t == TC_STRING)
		return strcmp((*a).DS, (*b).DS) == 0;
}
