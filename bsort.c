#include<stdio.h>
#include<stdlib.h>
#include "biblioteca.h"
long long cpomp=0; 
int comp=0;
void bsort(int v[], int n)
{
	int i, j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i; j++)
		{
			comp++;
			if(v[j]>v[j+1])
			{
				troca(&v[j],&v[j+1]);
			}//fim for if
		}// fim for j
	}// fim for i
}

int main()
{
	int *vet, i, n;
	float ini, fim, tempo; 
	printf("Tamanho do vetor: ");
	scanf("%d", &n);
	vet = malloc(sizeof(int)*n);//alocando vetor dinamicamente
	
	ini = clock();
	bsort(vet,n);
	fim = clock();
	tempo = (fim - ini)/1000;

	printf("Tempo(s):%.4f\n", tempo);
	printf("Qtde de comparação:%d\n",comp);
}
