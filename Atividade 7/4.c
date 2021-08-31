#include <stdio.h>
#include <stdlib.h>

int perfect();

void main(){
    int num, op;
    printf("Digite um numero: ");
    scanf("%d", &num);
    op = perfect(num);
    if(op == 1) printf("O numero eh perfeito.\n");
    else printf("O numero nao eh perfeito.\n");

system("pause");    
}

int perfect(int num){
    int i, soma;
    for(i = 1;i < num; i++)
        if(num%i == 0) soma += i;     
    if(num == soma) return 1;
    else 0;
}