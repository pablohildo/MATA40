#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_FAT 50
#define MAX_FIB 50


// ***********************************************
// ******                                   ******
// ***********************************************

int FatorialIterativo(int n) {

	return 0;	
	
}

// ***********************************************
// ******                                   ******
// ***********************************************

int FatorialRecursivo(int n) {
		
	return 0;	
}


// ***********************************************
// ******                                   ******
// ***********************************************

int FibonnaciIterativo( int n) {

	return 1;
}

// ***********************************************
// ******                                   ******
// ***********************************************

int FibonnaciRecursivo(int n) {

	return 1;
}

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

int nFat;
int nFib;

	printf("Calculando fatoriais....\n");
	printf("	Interativo\n");

	for (nFat = 0 ; nFat < MAX_FAT ; nFat++) 
		printf("Fat(%d) =  %d\n", nFat, FatorialIterativo(nFat));
	
	printf("\n	Recursivo\n");

	for (nFat = 0 ; nFat < MAX_FAT ; nFat++) 
		printf("Fat(%d) =  %d\n", nFat, FatorialRecursivo(nFat));
	
	printf("Calculando Fibonacci....\n");

	printf("\n	Serie de Fibonacci iterativa\n");
	for (nFib = 1 ; nFib < MAX_FIB ; nFib++) 
		printf("%d - ", FibonnaciIterativo(nFib));

	printf("\n	Serie de Fibonacci Recursiva\n");
	for (nFib = 1 ; nFib < MAX_FIB ; nFib++) 
		printf("%d - ", FibonnaciRecursivo(nFib));
	printf("\n");
		
}

