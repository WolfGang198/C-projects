#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define MAX 10

typedef struct banda
{
		char nome[40];
		char genero[40];
		int integrantes;
		int ranking;	
}tbanda;

int qtd=0;
//------------------------
int addBanda(tbanda b[])
{
	if(qtd==MAX)
	{
		return 0;
	}
	system("Color A");
	
	printf("Dados para banda: \n");
	printf("Nome: ");
	fflush(stdin);
	gets(b[qtd].nome);
	printf("Genero: ");
	fflush(stdin);
	gets(b[qtd].genero);
	printf("Integrantes: ");
	scanf("%d", &b[qtd].integrantes);
	printf("Ranking: ");
	scanf("%d", &b[qtd].ranking);
	qtd++;
	
	system("cls");
	
	return 1;
}
//------------------------
void mostraBandas(tbanda b[])
{
	int i;
	printf("****  Bandas cadastradas:  ****\n");
	for(i=0;i<qtd;i++)
	{
		printf("Banda: %d\n", i+1);
		printf("Nome: %s\n", b[i].nome);
		printf("Genero: %s\n", b[i].genero);
		printf("Integrantes: %d\n", b[i].integrantes);
		printf("Ranking: %d\n", b[i].ranking);
		printf("------------------------\n");	
	}
	printf("Aperte [enter] para continuar...\n");
	
}
//------------------------
void buscaBandas(tbanda b[], char nomeBusca[40])
{
	int i;
	
	printf("Nome da banda: ");
	fflush(stdin);
	gets(nomeBusca);
	
	for(i=0;i<qtd;i++)
	{
		if(strcmp(b[i].nome, nomeBusca)==0)
		{
			printf("Banda: %d\n", i+1);
			printf("Nome: %s\n", b[i].nome);
			printf("Genero: %s\n", b[i].genero);
			printf("Integrantes: %d\n", b[i].integrantes);
			printf("Ranking: %d\n", b[i].ranking);
			printf("------------------------\n");
		}
		else
		{
			printf("Banda nao encontarda :(\n");
		}
	}
	printf("Aperte [enter] para continuar...\n");
	
}
//------------------------
void salvarBandas(tbanda b[]){
	int i;
	FILE *arq;
	arq = fopen("bandas.txt","w"); // w = write
	fprintf(arq,"%d\n",qtd); // qtd é variável global da qtde de bandas cadastradas
	for(i=0;i<qtd;i++){
		fprintf(arq,"%s\n",b[i].nome);
		fprintf(arq,"%s\n",b[i].genero);
		fprintf(arq,"%d\n",b[i].integrantes);
		fprintf(arq,"%d\n",b[i].ranking);
	}
	printf("Dados salvos com sucesso :)\n");
	fclose(arq);
}
//------------------------
void carregaBandas(tbanda b[]){
	FILE *arq;
	int i;
	arq = fopen("bandas.txt","r"); // r = leitura
	if(arq==NULL){
		printf("Arquivo nao foi encontrado :(\n");
		return;
	}// fim if
	fscanf(arq,"%d",&qtd);
	printf("Carregando dados");
	for(i=0;i<qtd;i++){
		fscanf(arq,"%s",&b[i].nome);
		fscanf(arq,"%s",&b[i].genero);
		fscanf(arq,"%d",&b[i].integrantes);
		fscanf(arq,"%d",&b[i].ranking);
		printf("...");// enfeite
		sleep(1);// enfeite
	}// fim for
	fclose(arq);
	system("cls"); // enfeite
}
//------------------------
int menu()
{
	int op;
	printf("****  Sistema de Cadastro  ****\n");
	printf("[1] - Adicionar\n");
	printf("[2] - Mostrar\n");
	printf("[3] - Buscar (em breve)\n");
	printf("[0] - Sair\n");
	printf("-------------------------------\n");
	scanf("%d", &op);
	
	system("cls");
	
	return op;
}
//------------------------
int main()
{
	system("Color A");
	
	tbanda b[MAX];
	
	int op;
	carregaBandas(b);
	do
	{
		op = menu();
		switch(op)
		{
			case 1: if(addBanda(b)==1)
					{
						printf("Banda adicionada :)\n");
						printf("Aperte [enter] para continuar...\n");
					}
					else
					{
						printf("Erro :(\n");
						printf("Aperte [enter] para continuar...\n");
					}
			break;
			case 2: mostraBandas(b);
			break;
			//case 3: buscaBandas(b);
			break;
			case 0: salvarBandas(b);
					printf("Saindo... \n");
					printf("Aperte [enter] para continuar...\n");
			break;
			default: printf("Opcao invalida\n");
				     printf("Aperte [enter] para continuar...\n");
		}
		getch();
		system("cls");
	}while(op!=0);
	
	return 0;
}
