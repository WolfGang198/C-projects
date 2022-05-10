#include<stdio.h>
#include<string.h>
int main()
{
	char palavra[100];
	
	printf("Entre com uma palavra: ");
	fflush(stdin);
	gets(palavra);
	printf("Palavra: %s\n", palavra);
	printf("Palavra na posicao 0: %c\n", palavra[0]);
	printf("ASCII da palavra na posicao 0: %d\n", palavra[0]);
	palavra[0]=palavra[0]+32;
	printf("Palavra: %s\n", palavra);
	printf("Palavra na posicao 0: %c\n", palavra[0]);
	printf("ASCII da palavra na posicao 0: %d\n", palavra[0]);
	return 0;
	
}
