#include "PilaArreglo/PilaArreglo.h"
#include <assert.h>

int main (int argc, const char *argv[]) {
	Pila pila;
	Elemento elem;
	bool estado;

	PilaCrear (&pila);

	assert (PilaVacia (&pila));

	/* Pruebas de insercion */

	elem.DI = 1;
	estado = PilaApilar (&pila, elem);
	assert (estado);

	elem.DI = 3;
	estado = PilaApilar (&pila, elem);
	assert (estado);

	elem.DI = 5;
	estado = PilaApilar (&pila, elem);
	assert (estado);

	assert (PilaQItems (&pila) == 3);

	/* Pruebas de recuperacion y eliminacion */

	elem.DI = 99;

	estado = PilaRecuperarTope (&pila, &elem);
	assert (estado);
	assert (elem.DI == 5);
	assert (PilaQItems (&pila) == 3);
	estado = PilaDesapilar (&pila);
	assert (estado);
	assert (PilaQItems (&pila) == 2);


	estado = PilaRecuperarTope (&pila, &elem);
	assert (estado);
	assert (elem.DI == 3);
	estado = PilaDesapilar (&pila);
	assert (estado);
	assert (PilaQItems (&pila) == 1);

	estado = PilaRecuperarTope (&pila, &elem);
	assert (estado);
	assert (elem.DI == 1);
	estado = PilaDesapilar (&pila);
	assert (estado);
	assert (PilaQItems (&pila) == 0);
	assert (PilaVacia (&pila));

	estado = PilaRecuperarTope (&pila, &elem);
	assert (!estado);
	estado = PilaDesapilar (&pila);
	assert (!estado);
	assert (PilaVacia (&pila));
	assert (PilaQItems (&pila) == 0);
	}
