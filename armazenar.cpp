#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

//Estrutura para armazenar informações sobre um produto
struct Product
{
	char name[MAX_NAME_LENGTH];//Nome do produto
	float price;//Preço do produto
};

//Estrutura para armazenas informações sobre vários produtos
struct ProductMap
{
	struct Product products[MAX_PRODUCTS];//Lista de produtos
	int size;
};

//Inicializa o tamanho do mapa de produtos para zero
void initProductMap(struct ProductMap *productMap)
{
	productMap->size = 0;
}

//Adiciona um novo produto ao mapa
void addProduct(struct ProductMap *productMap, const char *name, float price)
{
	int index = productMap->size;
	strcpy(productMap->products[index].name, name);
	productMap->products[index].price = price;
	productMap->size++;
}

//Obtém o preço de um produto pelo nome
float getProductPrice(struct ProductMap *productMap, const char *name)
{
	for(int i = 0; i < productMap->size; i++)
	{
		if(strcmp(productMap->products[i].name, name) == 0)
		{
			return productMap->products[i].price;
		}
	}
	return -1;
}

int main(void)
{
	struct ProductMap productMap;
	initProductMap(&productMap);
	
	addProduct(&productMap, "item1", 10.0);
	addProduct(&productMap, "item2", 20.0);
	addProduct(&productMap, "item3", 30.0);
	
	float price = getProductPrice(&productMap, "item2");
	printf("Preco do item2: R$%.2f\n", price);
	
	return 0;
}
