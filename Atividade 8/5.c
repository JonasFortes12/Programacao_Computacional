#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, A[5], max, min, pmax, pmin;
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%d", &A[i]);
        if(i==0){ 
            min = max = A[i];
            pmin = pmax = i;
        }
        if(A[i]< min){
            min = A[i];
            pmin = i;
        } 
        if(A[i]>max){
            max = A[i];
            pmax = i;
        } 
    }
    printf("Posicao Max: %d | Posicao Min: %d\n", pmax, pmin);

system("pause");    
}