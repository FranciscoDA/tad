
#include <stdbool.h>
#include "Elemento.h"

bool ElementoMayor(const Elemento* a, const Elemento* b)
{
	return *a > *b;
}
bool ElementoMenor(const Elemento* a, const Elemento* b)
{
	return *a < *b;
}
bool ElementoIgual(const Elemento* a, const Elemento* b)
{
	return *a == *b
}
