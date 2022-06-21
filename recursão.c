#include<stdio.h>

void f(int n){
if (n == 0)
printf(" fim");
else
{
	f(n-1);
	printf("%d ",n);
	_sleep(300);
}
}// fim f

int main()
{
	int n;
	printf("Valor de n:");
	scanf("%d", &n);
	f(n);
	return 0;
}

