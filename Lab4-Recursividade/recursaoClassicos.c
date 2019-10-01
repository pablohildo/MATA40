#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_FAT 50
#define MAX_FIB 10


// ***********************************************
// ******                                   ******
// ***********************************************

unsigned long long int FatorialIterativo(int n) {
	unsigned long long int fat = 1;
	while (n > 1)
	{
		fat *= n;
		n--;
	}
	return fat;	
}

// ***********************************************
// ******                                   ******
// ***********************************************

unsigned long long int FatorialRecursivo(int n) {
	if (n == 0) return 1;
	if (n == 1) return n;
	return FatorialRecursivo(n-1)*n;	
}


// ***********************************************
// ******                                   ******
// ***********************************************

int FibonnaciIterativo( int n) {
	int i = 0;
	int j = 1;
	for (int k = 0; k < n; k++)
	{
		int aux = i + j;
		i = j;
		j = aux;
	}
	return j;
}

// ***********************************************
// ******                                   ******
// ***********************************************

int FibonnaciRecursivo(int n) {
	if (n < 2) return n;
	else return FibonnaciRecursivo(n-1)+FibonnaciRecursivo(n-2);
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
		printf("Fat(%d) =  %llu\n", nFat, FatorialIterativo(nFat));
	
	printf("\n	Recursivo\n");

	for (nFat = 0 ; nFat < MAX_FAT ; nFat++) 
		printf("Fat(%d) =  %llu\n", nFat, FatorialRecursivo(nFat));
	
	printf("Calculando Fibonacci....\n");

	printf("\n	Serie de Fibonacci iterativa\n");
	for (nFib = 1 ; nFib < MAX_FIB ; nFib++) 
		printf("%d - ", FibonnaciIterativo(nFib));

	printf("\n	Serie de Fibonacci Recursiva\n");
	for (nFib = 1 ; nFib < MAX_FIB ; nFib++) 
		printf("%d - ", FibonnaciRecursivo(nFib));
	printf("\n");
		
}

