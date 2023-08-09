#include <stdio.h>

void mirror_table(int table[3][3])
{
	int i, j, k;
	
	//Espelha a tabela na diagonal principal
	for(i = 0; i < 3; i++)
	{
		for(j = i + 1; j < 3; j++)
		{
			int temp = table[i][j];
			table[i][j] = table[j][i];
			table[j][i] = temp;
		}
	}
}

int main()
{
	int i, j, k;
	int table[3][3];//Declara uma tabela 3x3 de inteiros
	
	//Inicializa a tabela com valores
	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j++)
		{
			table[i][j] = i + j;
		}
	}
	
	//Imprime a tabela original
	printf("Tabela original:\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}
	
	//Chama a função de espelhamento
	mirror_table(table);
	
	//Imprime a tabela espelhada
	printf("\nTabela espelhada:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}
	return 0;
}
