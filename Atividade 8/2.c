#include <stdio.h>
#include <stdlib.h>

void main(){
   int i, A[10], max, min;
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%d", &A[i]);
        if(i==0) min = max = A[i];
        if(A[i]< min) min = A[i];
        if(A[i]>max) max = A[i];
    } 
    printf("Max: %d | Min: %d\n", max, min);

system("pause");    
}