#include <stdio.h>
#include <stdlib.h>

void main(){

    float A, B, C;

    printf("Digite o valor A: ");
    scanf("%f", &A);
    printf("Digite o valor B: ");
    scanf("%f", &B);
    printf("Digite o valor C: ");
    scanf("%f", &C);

    if(A < B+C && B < A+C && C < A+B ){
        printf("OS VALORES FORMAM UM TRIANGULO\n");
    }else{
        printf("OS VALORES NAO FORMAM UM TRIANGULO\n");
    }


system("pause");
}