#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "tadVetor.h"

/* *********************************************** */
/* *********************************************** */
/* *********************************************** */
int main() {

tVetor P, Q, R;
int num;
	
	printf("Tipo Abstrato de Dados Vetor\n");
	
    srand(time(NULL));
    
	do {
		printf("Qual o numero de elementos do vetor P?\n>");
		scanf("%d", &num);
		} while (num <= 0);
	
	if (!defineVetor(&P, num)) {
		printf("ERRO: falha na criacao do vetor!!\n");
		exit(-1);
		}
		
	if (!preencheVetorAleatorio(&P, num)) {
		printf("ERRO: falha no preenchimento do vetor P!!\n");
		exit(-1);
		}

	if (!defineVetor(&Q, num)) {
		printf("ERRO: falha na criacao do vetor Q!!\n");
		exit(-1);
		}
		
	if (!copiaVetores(P, &Q)) {
		printf("ERRO: falha na copia do vetor P -> Q!!\n");
		exit(-1);
		}

	// printf("ORIGINAL\n");
	// 	for (int i = 0; i < Q.numElem; i++)
	// 	{
	// 		printf("%.2f\n", Q.V[i]);
	// 	}
	// printf("INVERTIDO\n");
	// if(inverteVetor(&Q)){
	// 	for (int i = 0; i < Q.numElem; i++)
	// 	{
	// 		printf("%.2f\n", Q.V[i]);
	// 	}
	// }

	inverteVetor(&Q);
	
	multiVetor(&Q, 12.4);
		
	if (!defineVetor(&R, num*2)) {
		printf("ERRO: falha na criacao do vetor R!!\n");
		exit(-1);
		}
		
	if (!somaVetores(P, Q, &R)) {
		printf("ERRO: falha na soma dos vetores P+Q -> R!!\n");
		exit(-1);
		}
	
	if (!concatVetores(P, Q, &R)) {
		printf("ERRO: falha na concatenacao P+Q -> R!!\n");
		exit(-1);
		}
	
	imprimeVetor(P);
	imprimeVetor(Q);
	imprimeVetor(R);
	
	printf("Apagando o vetor P\n");
	apagaVetor(&P);

	printf("Apagando o vetor Q\n");
	apagaVetor(&Q);

	printf("Apagando o vetor R\n");
	apagaVetor(&R);
		
	imprimeVetor(P);
	imprimeVetor(Q);
	imprimeVetor(R);
	
	return 0;
}
