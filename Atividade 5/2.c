#include <stdio.h>
#include <stdlib.h>
#define CachQuent  1.70
#define BaruSimp  2.30
#define BaruOvo  2.60
#define Hambrg  2.40
#define Chesbrg  2.50
#define Refri  1.00

void main(){
    int cod, qtd;
    float P;
    printf("[100]-cachorro quente [101]-baruru simples [102]-baruru com ovo\n");
    printf("[103]-hamburger [104]-cheeseburguer [105]-refrigerante\n");
    printf("Digite o codigo do pedido:");
    scanf("%d", &cod);
    printf("Digite a quantidade:");
    scanf("%d", &qtd);

    switch(cod){
        case 100:
            P = qtd*CachQuent;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        case 101:
            P = qtd*BaruSimp;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        case 102:
            P = qtd*BaruOvo;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        case 103:
            P = qtd*Hambrg;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        case 104:
            P = qtd*Chesbrg;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        case 105:
            P = qtd*Refri;
            printf("Preco do pedido: R$%.2f\n", P);
            break;
        default:
            printf("Codigo Invalido\n");
            break;        
    }


system("pause");
}