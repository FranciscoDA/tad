CC      = gcc -O2 -Wall
COMPILE = $(CC)

all: recursive

recursive:
	cd Elemento;     make
	cd ListaArreglo; make
	cd PilaArreglo;  make
	cd ArbolCursor;  make
	cd Pruebas;      make

clean:
	cd Elemento;     make clean
	cd ListaArreglo; make clean
	cd PilaArreglo;  make clean
	cd ArbolCursor;  make clean
	cd Pruebas;      make clean
	true
