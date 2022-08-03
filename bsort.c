#include<stdio.h>
#include<stdlib.h>
#include "biblioteca.h"

void bsort(int v[], int n)
{
	int i, j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i; j++)
		{
			if(v[j]>v[j+1])
			{
				troca(&v[j],&v[j+1]);
			}//fim for if
		}// fim for j
	}// fim for i
}
//----------------------------
int main()
{
	int *vet, n;
	printf("Tamanho do vetor: ");
	scanf("%d", &n);
	vet = malloc(sizeof(int)*n);//alocando vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	bsort(vet,n);
	printf("Vetor ordenado:\n");
	printVetor(vet,n);
}
