#include <stdio.h>
#include <stdlib.h>

void main(){
    // variaveis
    int i, j;
    int cont = 0;
    float M[4][4];

    // prcessamento
    printf("Digite os valores das posicoes.\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
            if(M[i][j] > 10) cont++;
        }
    }   
    printf("\n");
    // saida
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%.2f   -   ", M[i][j]);
        }
        printf("\n");
    }
    printf("A matriz contem %d valores maiores que 10. \n", cont);

system("pause");    
}