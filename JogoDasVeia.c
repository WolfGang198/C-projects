#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[2] = "a", b[2] = "b", c[2] = "c", d[2] = "d", e[2] = "e", f[2] = "f", g[2] = "g", h[2] = "h", i[2] = "i", jog[2];
	int j = 0, game = 0;
		
	//while(game==0)
	//{
		system("cls");
		
		printf("=====================\n");
		printf("    JOGO DA VELHA    \n");
		printf("=====================\n");
	    printf("\n");
		printf(" %s | %s | %s \n", a, b, c);
		printf("---+---+---\n");
		printf(" %s | %s | %s \n", d, e, f);
		printf("---+---+---\n");
		printf(" %s | %s | %s \n", g, h, i);
		printf("\n");
		printf("Proxima jogada: ");
		gets(jog);
		j++;
		
		if(jog == "a")
		{
				if(j%2 == 0 )
				{	
					a[2] = 'x';
				}
				else
				{
					a[2] = 'o';
				}
		}
		
		
		
		printf("\n");
		printf(" %s | %s | %s \n", a, b, c);
		printf("---+---+---\n");
		printf(" %s | %s | %s \n", d, e, f);
		printf("---+---+---\n");
		printf(" %s | %s | %s \n", g, h, i);
		printf("\n");
	
	//}
	
}
