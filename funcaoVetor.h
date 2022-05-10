 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 
 void geraVetor(int v[], int n)
{
	int i;
	srand(time(NULL));
	
	for(i=0;i<n;i++)
		v[i] = rand()%50;
}
//---------------------------------
void mostraVetor(int v[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
		printf("%d |", v[i]);
		printf("\n");	
}
//---------------------------------
void leiaVetor(int v[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("v[%d]: ", i);
		scanf("%d", &v[i]);
		printf("\n");
	}
}
//---------------------------------
