#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf(" O numero digitado: Par\n");
    }else{
        printf(" O numero digitado: Impar\n");
    }

    system("pause");
}