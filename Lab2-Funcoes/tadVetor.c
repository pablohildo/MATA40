#include <stdbool.h>
#include <stdlib.h>
#include "tadVetor.h"

/* *********************************************** */
/* *********************************************** */
bool defineVetor(tVetor* V, int n) {
	V->MaxElem = n;
	V->numElem = 0;
	return true;
}

/* *********************************************** */
/* *********************************************** */
void apagaVetor(tVetor* V) {

	return;
}

/* *********************************************** */
/* *********************************************** */
bool preencheVetorAleatorio(tVetor* V, int n) {
	for (int i = 0; i < n; i++)
	{
		V->V[i] = rand();
	}
	V->numElem = n;
	return true;	
}

/* *********************************************** */
/* *********************************************** */
void imprimeVetor(tVetor V) {

	return;
	
}

/* *********************************************** */
/* *********************************************** */
void multiVetor(tVetor* V, float k) {
	for (int i = 0; i < V->numElem; i++)
	{
		V->V[i] *= k;
	}
	return;
}

/* *********************************************** */
/* *********************************************** */
bool copiaVetores(tVetor V0, tVetor* V1) {
	if(V0.numElem <= V1->MaxElem){
		V1->numElem = V0.numElem;
		for (int i = 0; i < V0.MaxElem; i++)
		{
			V1->V[i] = V0.V[i];
		}
		return true;
	}
	return false;
}


/* *********************************************** */
/* *********************************************** */
bool somaVetores(tVetor V0, tVetor V1, tVetor* V2) {
	if (V0.numElem == V1.numElem && V2->MaxElem >= V0.numElem)
	{
		for (int i = 0; i < V0.numElem; i++)
		{
			V2->V[i] = V0.V[i] + V1.V[i];
		}
		return true;
	}
	return false;
}

/* *********************************************** */
/* *********************************************** */
bool concatVetores(tVetor V0, tVetor V1, tVetor* V2) {
	if(V2->MaxElem >= V0.numElem+V1.numElem){
		for (int i = 0; i < V0.numElem; i++)
		{
			V2->V[i] = V0.V[i];
		}
		for (int i = V0.numElem-1; i < V0.numElem + V1.numElem; i++)
		{
			V2->V[i] = V1.V[i-V0.numElem];
		}
		V2->numElem = V0.numElem + V1.numElem;
		return true;
	}
	return false;
	
}

/* *********************************************** */
/* *********************************************** */
bool inverteVetor(tVetor* V) {
	int i = V->numElem - 1;
	int j = 0;
	while (i>j)
	{
		int aux = V->V[i];
		V->V[i] = V->V[j];
		V->V[j] = aux;
		i--;
		j++;
	}
	return true;
}

/* *********************************************** */
/* *********************************************** */
bool buscaVetor(tVetor* V, float k, int *p) {

	return false;
	
}
