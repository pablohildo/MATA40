/* Tipos Abstratos e Registros */ 

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
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
bool isValid(struct data d){
	if(d.dia < 1 || d.dia > 30 || d.mes < 1 || d.mes > 12) return false;
	return true;
}

int subtractDate(struct periodo p){
	return abs(((p.data_inicio.ano-p.data_fim.ano)*360) + ((p.data_inicio.mes-p.data_fim.mes)*30) + (p.data_inicio.dia-p.data_fim.dia));
}

int main() {

struct data	d1;
struct data d2;	

	printf("===============\n=====Data 1=====\n===============");
	
	printf("\n\nForneca uma data no formato:\n\tDia = ");	
	scanf("%d", &d1.dia);
	
	printf("\n\n\tMes = ");	
	scanf("%d", &d1.mes);
	
	printf("\n\n\tAno = ");	
	scanf("%d", &d1.ano);
	if(!isValid(d1)){
		printf("\n\n\nData inválida.\n");
		return 1;
	} 
	printf("\n\n\nA data fornecida foi: %d/%d/%d\n", d1.dia, d1.mes, d1.ano); 

	printf("===============\n=====Data 2=====\n===============");
	
	printf("\n\nForneca uma data no formato:\n\tDia = ");	
	scanf("%d", &d2.dia);
	
	printf("\n\n\tMes = ");	
	scanf("%d", &d2.mes);
	
	printf("\n\n\tAno = ");	
	scanf("%d", &d2.ano);
	if(!isValid(d2)){
		printf("\n\n\nData inválida.\n");
		return 1;
	} 
	printf("\n\n\nA data fornecida foi: %d/%d/%d\n", d2.dia, d2.mes, d2.ano); 
	struct periodo p;
	p.data_inicio = d1;
	p.data_fim = d2;
	p.numero_dias = subtractDate(p);
	printf("A diferença entre as datas é %d\n", p.numero_dias);
	 
	return 0;
}
