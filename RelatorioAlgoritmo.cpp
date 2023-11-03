#include <stdio.h>

void valores()
{
	int i, num, maior = 0, menor = 0;
	
	while(i < 20)
	{
		i++;
		printf("Digite um numero: ");
		scanf("%i", &num);
		if(num > maior)
		{
			maior = num;
		}
		if(num < menor)
		{
			menor = num;
		}
	}
	
	printf("Maior valor: %i \n", maior);
	printf("Menor valor: %i \n", menor);
}

int main()
{
	valores();	
}
