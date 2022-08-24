#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int comp=0;
int buscaBinariaComentado(int x,int v[], int n)
{
	int ini=0, fim= n-1, meio;
	while(ini<=fim)
	{
		printVetor2(v,ini,fim);//
		meio = (ini + fim)/2;
		printf("Ini:%d | Fim:%d\n", ini, fim);
		printf("Comparando: v[%d]=%d\n", meio,v[meio]);
		getch();
		comp++;
		if(x==v[meio])
		{
			return 1;
		}//fim if
		else 
		if(x<v[meio])
			fim = meio - 1;
			else
				ini = meio + 1;
	}//fim while
	return 0;
}
//-------------------------------
int main()
{
	int *vet, n, busca;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	isort(vet,n);//ordenado para usar busca binaria
	printVetor(vet,n);
	while(1){
		printf("Valor para busca:\n");
		scanf("%d",&busca);
		if(buscaBinariaComentado(busca,vet,n)==1)
			printf("Valor encontrado no vetor - %d comparacoes\n",comp);
		else
			printf("Valor nao encontrado no vetor - %d comparacoes\n",comp);
		comp=0;
	}// fim while teste
	return 0;
}
