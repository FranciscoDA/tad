CC      = gcc -O2 -Wall
ARGS    = -I..
COMPILE = $(CC) $(ARGS)
ALL_O   = ArbolCursor.o

all: $(ALL_O)

ArbolCursor.o: ArbolCursor.c ArbolCursor.h
	$(COMPILE) -c ArbolCursor.c -o ArbolCursor.o

clean:
	rm $(ALL_O)
	true

