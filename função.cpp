 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #include "funcaoVetor.h"
 
 
int main()
{
	int numeros[100], n, i, soma=0, op;
	
	printf("Quantos elementos no vetor: ");
	scanf("%d", &n);
	printf("[1]Gerar\n[2]Ler\n");
	scanf("%d", &op);
	if(op == 1)
	{
		geraVetor(numeros,n);
	}
	else
	{
		leiaVetor(numeros,n);
	}
	mostraVetor(numeros,n);
	
	for(i=0;i<n;i++)
		soma+= numeros[i];
		printf("Soma do vetor: %d", soma);
	return 0;
}
