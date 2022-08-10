#include<stdio.h>
#include<stdlib.h>
#include "biblioteca.h"

int minIndex(int v[], int i, int n)
{
	int j, imenor = i;
	for(j=i+1; j<n; j++)
	{
		if(v[j]<v[imenor])
		{
			imenor = j;
		}
	
	}
	
	return imenor;	
}

void ssort(int v[], int n)
{
	int i, indiceMenor;
	for(i=0;i<n-1;i++)
	{
		indiceMenor = minIndex(v,i,n);
		troca(&v[i], &v[indiceMenor]);
	}//fim for
}

int main()
{
	int *vet, n;
	float ini, fim, tempo; 
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);//alocando vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	ssort(vet,n);
	printf("Vetor Ordenado\n");
	printVetor(vet,n);
	return 0;
}
