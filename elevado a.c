#include<stdio.h>
int pot(int base, int exp)
{
	int r;
	printf("pot(%d,%d)\n", base, exp); getch();
	if(exp == 0)
	{
	printf("1*");
	return 1;	
	}
	printf("%d*", base); getch();
	r = base * pot(base, exp-1);
	printf("Retornando %d\n", r);getch();
	return r;
}
int main()
{
	int b, e;
	printf("Valor da base e expoente:");
	scanf("%d%d",&b,&e);
	printf("%d^%d = %d\n", b, e, pot(b, e));
	return 0;
}
