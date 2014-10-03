CC      = gcc -O2 -Wall
COMPILE = $(CC)
ALL_O   = Elemento.o

all: $(ALL_O)

Elemento.o: Elemento.c Elemento.h
	$(COMPILE) -c Elemento.c -o Elemento.o

clean:
	rm $(ALL_O)
	true

