#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função para inverter uma string usando uma tabela de espelhamento
void reverse_string(char *str)
{
	int length = strlen(str);
	int i;
	char mirror[length + 1]; //Criar uma tabela de espelhamento
	
	//Preencher a tabela de espelhamento com os caracteres invertidos da string
	for(i = 0; i < length; i ++)
	{
		mirror[i] = str[length - 1 - i];
	}
	
	mirror[i] = '\0'; //Adiciona o terminador de string
	
	//Copiar a string invertida de volta para a string original
	strcpy(str, mirror);
}

int main()
{
	char input[100];//Cria uma string para armazenar a entrada do usuário
	printf("Enter a string: ");
	scanf("%s", input); //ler a entrada do usuário
	reverse_string(input);// Inverter a string
	printf("Reversed string: %s\n", input);//Imprimir a string invertida
	return 0;
}
