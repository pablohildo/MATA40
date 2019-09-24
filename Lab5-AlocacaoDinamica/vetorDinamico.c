#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "vetorDinamico.h"

/* *********************************************** */
/* *********************************************** */
bool alocaVetor(tVetorDinamico* V, int n) {
	V->V = (float*) malloc(n*sizeof(float));
	V->MaxElem = n;
	V->numElem = 0;
	return V->V != NULL;
}

/* *********************************************** */
/* *********************************************** */
void desalocaVetor(tVetorDinamico* V) {

	return;
}

/* *********************************************** */
/* *********************************************** */
bool preencheVetorAleatorio(tVetorDinamico* V, int n) {
	if(n <= V->MaxElem){
		for (int i = 0; i < n; i++)
		{
			V->V[i] = rand();
		}
		V->numElem = n;
		return true;
	}
	return false;	
}

/* *********************************************** */
/* *********************************************** */
void imprimeVetor(tVetorDinamico V) {

	return;
	
}

/* *********************************************** */
/* *********************************************** */
void multiVetor(tVetorDinamico* V, float k) {

	return;
	
}

/* *********************************************** */
/* *********************************************** */
bool copiaVetores(tVetorDinamico V0, tVetorDinamico* V1) {
	if(V0.MaxElem <= V1->MaxElem){
		for (int i = 0; i < V0.numElem; ++i)
			*(V1->V)++ = *(V0.V)++;
		V1->numElem = V0.numElem;
		return true;
	}
	return false;
	
}


/* *********************************************** */
/* *********************************************** */
bool somaVetores(tVetorDinamico V0, tVetorDinamico V1, tVetorDinamico* V2) {
	if (V0.numElem == V1.numElem && V2->MaxElem >= V0.numElem){
		for (int i = 0; i < V0.numElem; i++)
			V2->V[i] = V0.V[i] + V1.V[i];
		V2->numElem = V0.numElem;
		return true;
	}
	return false;
	
}

/* *********************************************** */
/* *********************************************** */
bool concatVetores(tVetorDinamico V0, tVetorDinamico V1, tVetorDinamico* V2) {
	if (V2->MaxElem >= (V0.numElem + V1.numElem))
	{
		
	}
	
	return false;
	
}

/* *********************************************** */
/* *********************************************** */
bool inverteVetor(tVetorDinamico* V) {

	return false;
	
}
