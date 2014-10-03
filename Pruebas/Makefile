CC         = gcc -O2 -Wall
ARGS       = -I..
COMPILE    = $(CC) $(ARGS)
ALL_BIN    = test_pila test_arbol
PILA_DEPS  = ../PilaArreglo/PilaArreglo.o
ARBOL_DEPS = ../ArbolCursor/ArbolCursor.o

all: $(ALL_BIN)

test_pila: TestPila.c $(PILA_DEPS)
	$(COMPILE) $(PILA_DEPS) TestPila.c -o test_pila

test_arbol: TestArbol.c $(ARBOL_DEPS)
	$(COMPILE) $(ARBOL_DEPS) TestArbol.c -o test_arbol

clean:
	rm $(ALL_O)
	true

