.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	recursaoClassicos ordenaVetor curvaKoch

recursaoClassicos:  recursaoClassicos.o
	gcc -o $@ $^

ordenaVetor:  ordenaVetor.o
	gcc -o $@ $^

curvaKoch:  curvaKoch.o winGL.o 
	gcc -o $@ $^ -lGL -lGLU -lglut

clean:
	rm *.o *.*~ *~ recursaoClassicos ordenaVetor curvaKoch