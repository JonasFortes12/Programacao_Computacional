#include <stdio.h>
#include <string.h>

//POG
//Programação Orientada a Gambiarra (POG)

typedef struct produto{
	char nome[50];
	float preco;
} Produto;

typedef struct estoque{
	Produto prod;
	int qtd;
} Estoque;

int main(){
	Produto p1;
	int i;
	Estoque estoque[20];
	
	int op;
	int pos = 0;
	do{
		printf(" === SISTEMA DE ESTOQUE ===\n");
		printf("QTD em estoque = %d\n", pos);
		printf("\nDigite uma opcao:\n1 - Adicionar\n2 - Listar estoque\n3 - Sair\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				//cria um novo produto
				
				printf("Digite o nome do produto:\n");
				scanf(" %[^\n]s", &p1.nome);
				printf("Digite o preco do produto:\n");
				scanf("%f", &p1.preco);
				
				//adiciona o produto em estoque
				estoque[pos].prod = p1;
				
				//recebe a qtd do produto em estoque
				printf("Digite a quantidade em estoque:\n");
				scanf("%d", &estoque[pos].qtd);
				
				pos++;
				break;
			case 2:
				
				printf("\n=== PRODUTOS CADASTRADOS ===\n");
				for(i=0; i<pos; i++){
					printf("Nome: %s\n", estoque[i].prod.nome);
					printf("Preco: %f\n", estoque[i].prod.preco);
					printf("Qtd em estoque: %d\n", estoque[i].qtd);
					printf("----------------------------\n");
				}
				break;
		}
		
	}while(op!=3);
	printf("\n=== SISTEMA FECHADO ===");
} 
