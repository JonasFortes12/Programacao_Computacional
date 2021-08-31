#include <stdio.h>
#include <stdlib.h>

typedef int inteiro;// definindo um novo nome para o int. "inteiro";

typedef struct endereco{
    char rua[50];
    char bairro[50];
    char cidade[30];
    int numero;
} Endereco;
// Facilita a indentificação de tipos de dados

typedef struct pessoa{ // Definindo um novo nome para struct. No caso "Pessoa".
    char nome[20];
    int idade;
    Endereco endereco;
} Pessoa;

void main1(){
    Pessoa p1;

    printf("Digite seu nome: \n");
    scanf("%[^/n]s", &p1.nome);

    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);

    printf("Digite sua cidade: \n");
    scanf("%[^/n]s", &p1.endereco.cidade);

    printf("Digite seu bairro: \n");
    scanf("%[^/n]s", &p1.endereco.bairro);

    printf("Digite sua rua: \n");
    scanf("%[^/n]s", &p1.endereco.rua);

    printf("Digite o numero da casa: \n");
    scanf("%d", &p1.endereco.numero);




system("pause");
}
