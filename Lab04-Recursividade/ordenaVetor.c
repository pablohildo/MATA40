#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_ELEM 10000

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

void imprimeVetorRecursivo () {
	

}

// ***********************************************
// ** Recebe um vetor e uma chave de busca e    **
// ** aplica o algoritmo de busca binária de    **
// ** forma recursiva.                          **
// ***********************************************

bool buscaBinariaRecursiva(Vetor V, int k) {
	
	return false;
	
}

// ***********************************************
// ** Recebe como parametro um TAD Vetor e      **
// ** retorna o vetor ordenado.                 **
// ***********************************************

void OrdenaVetor(Vetor V) {
	
	
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

    OrdenaVetor(v);

    imprimeVetorRecursivo();

    for (i = 0 ; i < 100 ; i++)
    	if (buscaBinariaRecursiva(v, i))
    		printf ("[ V ] %d\n", i);
    	else
    		printf ("[ X ] %d\n", i);
    	
}

