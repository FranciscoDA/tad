CC      = gcc -O2 -Wall
ARGS    = -I..
COMPILE = $(CC) $(ARGS)
ALL_O   = PilaArreglo.o

all: $(ALL_O)

PilaArreglo.o: PilaArreglo.c PilaArreglo.h
	$(COMPILE) -c PilaArreglo.c -o PilaArreglo.o

clean:
	rm $(ALL_O)
	true

