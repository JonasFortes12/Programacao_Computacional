#include <stdio.h>
#include <stdlib.h>

void main(){

    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0){
        printf("POSITIVO!\n");
    }else{
        printf("NEGATIVO!\n");
    }


system("pause");
}