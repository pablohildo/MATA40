#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "tadVetor.h"

/* *********************************************** */
/* *********************************************** */
bool defineVetor(tVetor* V, int n) {

	V->numElem = 0;

	if (n > MAX) {
		V->MaxElem = 0;
		return false;
		}

	V->MaxElem = n;

	return true;
}

/* *********************************************** */
/* *********************************************** */
bool preencheVetorAleatorio(tVetor* V, int n) {

int 	i, 
		num;

	if (V->MaxElem > n)
		return false;

	for (i = 0 ; i < n; i++) {
		num = ( rand() % (MAX) );
		V->V[i] = num;
		V->numElem++;
		}
	return true;	
}

/* *********************************************** */
/* *********************************************** */
void imprimeVetor(tVetor V) {

int i;

	printf("------------------------------\n");

	if (V.numElem == 0)
		printf("\nVETOR VAZIO !!\n");
	else	
		for (i = 0 ; i < V.numElem; i++) 
			printf("[ %d ] = %d\n", i, V.V[i]);
	
	printf("------------------------------\n");
	
}

/* *********************************************** */
/* *********************************************** */
void selectionSort (tVetor *v) {
	for (int i = 0; i < v->numElem - 1; i++)
	{
		int menor=i;
		for (int j = i+1; j < v->numElem; j++)
		{
			if(v->V[menor] > v->V[j]) menor = j;
		}
		int aux = v->V[menor];
		v->V[menor] = v->V[i];
		v->V[i] = aux;
		printf("%d \n" ,v->V[i]);
	}
	return;
}

/* *********************************************** */
/* *********************************************** */
void insertSort (tVetor *v) {
	int chave;
	for (int i = 1; i < v->numElem; i++)
	{
		chave = v->V[i];
		int j = i - 1;
		while (i > 0 && v->V[j] > chave)
		{
			v->V[j+1] = v->V[j];
			j--;
		}
		v->V[j+1] = chave;
	}
	return;	
}


/* *********************************************** */
/* *********************************************** */
void bubbleSort (tVetor *v) {
	int aux;
	for (int i = v->numElem -1; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (v->V[j-1] > v->V[j])
			{
				aux = v->V[j];
				v->V[j] = v->V[j-1];
				v->V[j-1] = aux;
			}
		}
	}
}

bool isSorted(tVetor *v) {
	for (int  i = 0; i < v->numElem - 1; i++)
	{
		if (v->V[i] > v->V[i+1])
		{
			return false;
		}
	}
	return true;
}