#include <stdio.h>
#include <stdlib.h>

void main(){

    float n1, n2, M;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    M = (n1+n2)/2;

    if(M >= 6){
        printf("APROVADO! media: %.1f\n", M);
    }else{
        printf("REPROVADO! media: %.1f\n", M);
    }




system("pause");
}