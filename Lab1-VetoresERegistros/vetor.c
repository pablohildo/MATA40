#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define MAX 200

bool hasNumber(int v[], int n, int size){
    for (int i = 0; i < size; i++)
    {
        if(v[i] == n) return true;
        return false;
    }
}

int main() {
int s;
int n;
    scanf("%d", &s);
    scanf("%d", &n);
int 	i;
int     sum = 0;
float dpsum = 0;

    srand ( time(NULL) );

    if(s>MAX) s = MAX;
    int     V[MAX];

    for (i=0; i < s; i++) {
        V[i] = rand() % 2000;
        sum += V[i];
    }
    float maior = V[0];
    float menor = V[0];
    for (i = 0; i < s; i++)
    {
        if (V[i] < menor) menor = V[i];
        if (V[i] > maior) maior = V[i];
    }
            
    for (i=0; i < s; i++) 
       printf("V[%d] = %d\n", i, V[i]);

    float media = sum/s;
    for(i=0; i < s; i++)
        dpsum += V[i]-media;

    float dp = dpsum/s;
    printf("Média: %f \n", media);
    printf("Maior: %f \n", maior);
    printf("Menor: %f \n", menor);
    if(hasNumber(&V[s], n, s)) printf("Existe n\n");
    else printf("Não existe\n");
}