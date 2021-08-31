#include <stdio.h>
#include <stdlib.h>

void main(){
    float A[15], soma, media;
    int i;
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%f", &A[i]);
        soma += A[i];
    }
    media = soma/(sizeof(A)/sizeof(A[0]));
    printf("Media: %.2f\n", media);

system("pause");    
}