.c.o:   $*.h
	gcc -c $*.c

.cpp.o:	$*.h
	g++	-c $*.cpp

all:	recursaoClassicos ordenaVetor 

recursaoClassicos:  recursaoClassicos.o
	gcc -o $@ $^

ordenaVetor:  ordenaVetor.o

clean:
	rm *.o *.*~ *~ recursaoClassicos ordenaVetor 