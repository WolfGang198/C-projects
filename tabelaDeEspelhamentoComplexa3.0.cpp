#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

//Estrutura para armazenar as entradas da tabela
struct Entry
{
	int key;
	int value;
	int flag;
};

//Tabela de espelhamento
struct Entry table[TABLE_SIZE];

//Função de espalhamento
int hash(int key, int i);
int hash1(int key);
int hash2(int key);

int hash(int key, int i)
{
	return(hash1(key) + i * hash2(key)) % TABLE_SIZE;
}

//Primeira função de espelhamento
int hash1(int key)
{
	return key % TABLE_SIZE;
}

//Segunda função de espelhamento
int hash2(int key)
{
	return 1 + (key % (TABLE_SIZE - 1));
}

//Função para adicionar uma entrada na tabela
void add_entry(int key, int value)
{
	int i = 0;
	
	while(i != TABLE_SIZE)
	{
		int index = hash(key, i);
		
		if(table[index].flag == 0 || table[index].flag == -1)
		{
			table[index].key = key;
			table[index].value = value;
			table[index].flag = 1;
			break;
		}
		i = i + 1;
	}
}

//Função para procurar uma entrada na tabela
int search(int key)
{
	int i = 0;
	
	while(i != TABLE_SIZE)
	{
		int index = hash(key, i);
		
		if(table[index].flag == 0)
		{
			break;
		}
		if(table[index].key == key)
		{
			return table[index].value;
		}
		i = i + 1;
	}
	return -1;
}

int main()
{
	//Inicializa a tabela
	for(int i = 0; i < TABLE_SIZE; i++)
	{
		table[i].flag = 0;
	}
	
	//Adiciona entradas na tabela
	add_entry(1, 10);
	add_entry(2, 20);
	add_entry(3, 30);
	add_entry(4, 40);
	add_entry(5, 50);
	
	//Procura entradas na tabela
	int value = search(3);
	
	if(value == -1)
	{
		printf("Entrada nao encontrada]n");
	}
	else
	{
		printf("Valor da entrada: %d\n", value);
	}
	return 0;
}

