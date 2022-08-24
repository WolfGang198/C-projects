#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int comp=0;
int pertence(int x, int v[],int n){
	int i;
	for(i=0;i<n;i++){
		comp++;
		if(v[i]==x)
			return 1;
	}// fim for		
	return 0;		
}
//------------------------
int main(){
	int *vet, n, busca;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	while(1){
		srand(time(NULL));
		busca=rand()%500+1;
		printf("Valor para busca:%d\n",busca);
		//scanf("%d",&busca);
		if(pertence(busca,vet,n)==1)
			printf("Valor encontrado no vetor - %d comparacoes\n",comp);
		else
			printf("Valor nao encontrado no vetor - %d comparacoes\n",comp);
		comp=0;
		//getch();
		Sleep(2000);
	}// fim while teste
	return 0;
}
