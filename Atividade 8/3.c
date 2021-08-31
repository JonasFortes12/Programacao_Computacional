#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, A[6];
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for(i=sizeof(A)/sizeof(A[0])-1; i>=0; i--) printf("%d; ", A[i]);
system("pause");    
}