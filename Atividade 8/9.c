#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j, A[10], primo, index;
    printf("Digite %d numeros inteiros.\n", sizeof(A)/sizeof(A[0]));
    
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Posicao[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        primo = 1;
        index = i;
        for(j=2; j<A[i]; j++){
            if (A[i]%j == 0){
                primo = 0;
                break;
            }
        }
        if(primo){
        printf("O numero %d na posicao [%d] eh primo.\n", A[i], index);
        }
    }

system("pause");    
}