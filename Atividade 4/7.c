#include <stdio.h>
#include <stdlib.h>

void main(){

    int A, B;

    printf("Digite o Valor A:");
    scanf("%d", &A);
    printf("Digite o Valor B:");
    scanf("%d", &B);

    if(A%B == 0){
        printf("A eh divisivel por B. \n");
    }else{
        printf("A nao eh divisivel por B. \n");
    }



system("pause");    
}