/* Tipos Abstratos e Registros */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 200
typedef struct data
{
	int dia;
	int mes;
	int ano;
} tData;

typedef struct periodo
{
	struct data data_inicio;
	struct data data_fim;
	int numero_dias;
} tPeriodo;

// ***********************************************
// ***********************************************
// ***********************************************
bool isValid(tData d)
{
	if (d.dia < 1 || d.dia > 30 || d.mes < 1 || d.mes > 12)
		return false;
	return true;
}

int subtractDate(tPeriodo p)
{
	return abs(((p.data_inicio.ano - p.data_fim.ano) * 360) + ((p.data_inicio.mes - p.data_fim.mes) * 30) + (p.data_inicio.dia - p.data_fim.dia));
}

int main()
{
	tData datas[MAX];
	srand(time(NULL));
	int i;
    for (i=0; i < MAX; i++) {
		datas[i] = (tData){.dia = (rand()%30)+1, .mes = (rand()%11)+1, .ano = rand()};
    }
	for ( i = 0; i < MAX; i++)
	{
		printf("Data: %d/%d/%d\n", datas[i].dia, datas[i].mes, datas[i].ano);
	}
	
	return 0;
}
