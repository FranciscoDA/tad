
#include <stdlib.h>
#include <stdbool.h>


typedef enum {
	TC_ENTERO,
	TC_REAL,
	TC_STRING
} TIPO_COMPARAR;

typedef struct {
	DI : int;
	DR : double;
	DS : char [50];
} Elemento;

bool ElementoMayor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);
bool ElementoMenor(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);
bool ElementoIgual(const Elemento* a, const Elemento* b, TIPO_COMPARAR t);

