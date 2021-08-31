#include <stdio.h>
#include <stdlib.h>

void main(){
    int t, i, j;
    printf("Digite o tamanho das matrizes: ");
    scanf("%d", &t);

    double A[t][t], B[t][t], R[t][t];

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("Digite o valor A[%d][%d]: ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("Digite o valor B[%d][%d]: ", i, j);
            scanf("%lf", &B[i][j]);
        }
    }

     for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            R[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Vetor Resultado___\n");
     for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%lf ", R[i][j]);
        }
        printf("\n");
    }
system("pause");
}