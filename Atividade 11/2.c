#include <stdio.h>
#include <stdlib.h>

void main(){
    int t, i, j;
    printf("Digite um inteiro impar: ");
    scanf("%d", &t);

    int A[t][t];

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
           if(i==j || i+j == t-1) A[i][j] = 1;
           else A[i][j] = 0;
        }
    }

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

system("PAUSE");
}