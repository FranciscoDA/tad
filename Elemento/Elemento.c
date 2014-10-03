
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
<<<<<<< HEAD
=======
}

void armarString(const Elemento* a, *char[] s)
{
	int len = 0;
	char[sizeof(a.DI)] di;
	itoa(a.DI, di, 10);
	char[sizeof(a.DS)] ds = a.DS;
	//char[sizeof(a.DR)] dr = a.DR;
	//char[sizeof(a.DP)] dp = a.DP;
	
	len = strlen(di) + strlen(ds) + strlen(dr) + strlen(dp);
	*s[len] = "";
	
	*s = strcat(di," ");
	*s = strcat(*s,ds);
	*s = strcat(*s," ");
	*s = strcat(*s,dr);
	*s = strcat(*s," ");
	*s = strcat(*s,dp);
>>>>>>> 97dc3941806bdf56968ac263981bcee67b10e12e
}
