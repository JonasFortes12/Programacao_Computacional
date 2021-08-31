#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j;
    float A[10], aux;
    
    printf("Digite %d numeros.\n", sizeof(A)/sizeof(A[0]));
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Posicao[%d]: ", i);
        scanf("%f", &A[i]);
    }

// ordenação decrescente
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        for(j=0; j < sizeof(A)/sizeof(A[0]); j++){
            if(A[j] < A[j+1]){
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;  
            }
        }
    }
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("%.2f | ", A[i]);
    }


system("pause");    
}