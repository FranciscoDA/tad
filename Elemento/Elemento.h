
#include <stdlib.h>
#include <stdbool.h>


typedef enum {
	TC_ENTERO,
	TC_REAL,
	TC_STRING
} TIPO_COMPARAR;

typedef struct {
	int DI;
	double DR;
	char DS[50];
} Elemento;

bool ElementoMayor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);
bool ElementoMenor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);
bool ElementoIgual(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);
void ArmarString(const Elemento* a, char* s);
