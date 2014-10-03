CC      = gcc -O2 -Wall
ARGS    = -I..
COMPILE = $(CC) $(ARGS)
ALL_O   = ListaArreglo.o

all: $(ALL_O)

ListaArreglo.o: ListaArreglo.c ListaArreglo.h
	$(COMPILE) -c ListaArreglo.c -o ListaArreglo.o

clean:
	rm $(ALL_O)
	true

