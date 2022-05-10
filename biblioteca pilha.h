#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef int tdado;
typedef struct{
	int topo;
	tdado pilha[MAX];
}tpilha;

void inicializa(tpilha *p)
{
	p->topo = -1;
}
//-------------------------
int push(tpilha *p, tdado x)
{
	if(p->topo == MAX - 1)
	{
		return 0;
	}
	else
	{
		p->topo++;
		p->pilha[p->topo]=x;
		return 1;
	}
}
//-------------------------
tdado pop(tpilha *p)
{
	tdado aux;
	aux = p->pilha[p->topo];
	p->topo--;
		return aux;
}
//--------------------------
int isEmpty(tpilha p)
{
	if(p.topo == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//--------------------------
void mostraPilha(tpilha p)
{
	while(p.topo != -1)
	{
		printf("%d|", p.pilha[p.topo]);
		p.topo--;
	}
}
//--------------------------
tdado peek(tpilha p)
{
	return p.pilha[p.topo];
}
//--------------------------
