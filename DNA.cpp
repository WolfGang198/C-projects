#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funcaoVetor.h"

int main()
{
	char dna[50], comp[50];
	int n, i;
	
	
	printf("Sequencia de DNA: ");
	gets(dna);
	n = strlen(dna);	
	
	for(i=0;i<n;i++)
	{
		switch(dna[i])
		{
			case 'A': comp[i]='T';
			break;
			case 'T': comp[i]='A';
			break;
			case 'C': comp[i]='G';
			break;
			case 'G': comp[i]='C';
			break;
		}
	}
		printf("FITA: \n");
		
		for(i=0;i<n;i++)
			printf("%c |", dna[i]);
		
		printf("\nCOMPLEMENTAR: \n");
		
		for(i=0;i<n;i++)
			printf("%c |", comp[i]);
}
