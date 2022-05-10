#include<stdlib.h>
#include<stdio.h>
#define MAX 5
typedef struct
{
	char nome[40];
	int idade;
} tdado;
typedef struct
{
	tdado fila[MAX];
	int ini, fim;
}tfila;
//-------------------
void inicializa(tfila *f)
{
	f->ini = 0;
	f->fim = -1;
}
//-------------------
int enqueue(tfila *f, tdado x)
{
	if(f->fim == MAX-1)//ja usei todas as fichas da fila
		return 0;
	//inserir porque tem espaço
	f->fim++;
	f->fila[f->fim] = x;
	return 1;
}
//-------------------
tdado dequeue(tfila *f)
{
	tdado aux = f->fila[f->ini];
	f->ini++;
	return aux;
}
//-------------------
int isEmpty(tfila f)
{
	if(f.fim < f.ini)
		return 1;
	else
		return 0;	
}
//-------------------
void mostra(tfila f)
{
	while(f.ini <= f.fim)
	{
		printf("%s:%d |", f.fila[f.ini].nome, f.fila[f.ini].idade);
	}//fim while
}
//-------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Top (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------
int main()
{
	tfila p1;
	tdado x;
	int op;
	printf("Topo:%d", p1.ini);
	inicializa(&p1);
	do
	{
		mostra(p1);
			printf("Topo:%d\n", p1.ini);

		op = menu();
		switch(op)
		{
			case 1: printf("Dado para inserir: ");
					scanf("%d", &x);
					if(enqueue(&p1,x) == 1)
					{
						printf("dado inserido :)\n");
					}
					else
					
						printf("Stack overflow :(\n");
			break;
			case 2: if(!isEmpty(p1))
                    {
                    	x = dequeue(&p1);
                    	printf("Dado corrompido:%d\n", x);
			        }			 
					else
					
						printf("Stack empty :(\n");	
						
			case 0: printf("Saindo .... ;)\n");
					
		}
		system("pause");
		system("cls");
		
		}while(op!=0);

	return 0;
	}
	
