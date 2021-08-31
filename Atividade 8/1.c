#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma, i;
    int A[6] = {1, 0, 5, -2, -5, 7};
    
    soma = A[0] + A[1] + A[5];
    printf("%d\n", soma);
    
    A[4] = 100;
    
    for(i=0; i<=5; i++){
        printf("%d\n", A[i]);
    }

system("pause");    
}