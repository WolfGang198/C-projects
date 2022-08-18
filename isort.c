#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"
void insert(int v[], int i)
{
	int eleito = v[i];
	int c = i-1;
	while(c>=0 && eleito<v[c])
	{
		compIs++;
		v[c+1] = v[c];//deslocar e comparar
		c--;
	}//fim while
	compIs++;
	v[c+1] = eleito;
}
//---------------------------
void isort(int v[], int n){

	int i;

	for(i=1;i<n;i++)
	{
		insert(v,i);
	}//fim for
}
//---------------------------
int main()
{
	int *vet, n;
	float ini, fim, tempo; 
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);//alocando vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	isort(vet,n);
	printf("Vetor Ordenado\n");
	printVetor(vet,n);
	return 0;
}
