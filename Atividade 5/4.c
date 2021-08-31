#include <stdio.h>
#include <stdlib.h>

void main(){
    
    char op;
    printf("[A] [B] [C] [D] [E] [F]\n");
    printf("Digite a Letra-Conceito do aluno: ");
    scanf("%c", &op);

    switch (op){
        case 'A':
            printf("Excelente.\n");
            break;
        case 'B':
            printf("Otimo.\n");
            break;
        case 'C':
            printf("Bom.\n");
            break;
        case 'D':
            printf("Regular.\n");
            break;
        case 'E':
            printf("Ruim.\n");
            break;
        case 'F':
            printf("Nos vemos de novo ano que vem...\n");
            break;
        default:
            printf("Conceito nao encontrado.\n");
            break;
    }

system("pause");
}