#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_ELEM 10

typedef struct { int numElem;
                 int Vec[MAX_ELEM];
               } Vetor;

// ***********************************************
// ******                                   ******
// ***********************************************

void initVetor( Vetor* V ) {
		
	V->numElem = 0;
	
}

// ***********************************************
// ******                                   ******
// ***********************************************

bool preencheVetor( Vetor* V, int n ) {
	
	int i;

	if (n > MAX_ELEM)
		return false;

	srand(time(NULL));
	
	for (i=0; i < n ; i++) {
		V->Vec[i] = rand() % 1000;
		V->numElem++;
		}

	return true;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void imprimeVetor (Vetor V) {
	
	int i;
	
	for (i=0; i < V.numElem ; i++)
		printf("V[%d] = %d\n", i, V.Vec[i]);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void imprimeVetorRecursivo (Vetor V, int i) {
	if(i != -1){
		printf("V[%d] = %d\n ", i, V.Vec[i]);
		imprimeVetorRecursivo(V, i-1);
	}
}

// ***********************************************
// ** Recebe um vetor e uma chave de busca e    **
// ** aplica o algoritmo de busca binária de    **
// ** forma recursiva.                          **
// ***********************************************

bool buscaBinariaRecursiva(Vetor V, int k, int beg, int end) {
	int m = beg+end/2;
	if (V.Vec[m] == k) return true;
	if (V.Vec[m] < k) return buscaBinariaRecursiva(V, k, m, end);
	if (V.Vec[m] > k) return buscaBinariaRecursiva(V, k, beg, m);
}

// ***********************************************
// ** Recebe como parametro um TAD Vetor e      **
// ** retorna o vetor ordenado.                 **
// ***********************************************

void swap(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

void OrdenaVetor(Vetor *V, int n) {
	if (n<1) return;
	for (int i = 0; i < n; i++)
	{
		if (V->Vec[i] > V->Vec[i+1])
		{
			swap(&V->Vec[i], &V->Vec[i+1]);
		}
		
	}
	OrdenaVetor(V, n-1);
}

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

Vetor v;
int i = 0;

    initVetor(&v);

	if (! preencheVetor(&v, MAX_ELEM)) {
    	printf("ERRO no preenchimento do Vetor\n");
    	exit(0);
		}
	
    imprimeVetor(v);

    OrdenaVetor(&v, v.numElem-1);

    imprimeVetorRecursivo(v, v.numElem-1);

    for (i = 0 ; i < 100 ; i++)
    	if (buscaBinariaRecursiva(v, i, 0, v.numElem-1))
    		printf ("[ V ] %d\n", i);
    	else
    		printf ("[ X ] %d\n", i);
    	
}

