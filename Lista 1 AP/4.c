#include <stdio.h>
#include <stdlib.h>

void main(){

    int qtdC, i, tamanho = 1;
    printf("Digite a quantidade de ciclos: ");
    scanf("%d", &qtdC);


    for(i=0; i<qtdC; i++){
        if(i%2==0){
            tamanho *= 2;
        }else{
            tamanho += 1;
        }
    }
    printf("Tamanho: %d metros\n", tamanho);

system("pause");
}