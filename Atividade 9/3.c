#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i, j, x;
    int M[5][5];


    printf("Digite os valores das posicoes.\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Valor de Busca: ");
    scanf("%d", &x);

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(M[i][j] == x){
                printf("Valor encontrado na posicao [%d][%d].\n", i, j);
            }
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d - ", M[i][j]);
        }
        printf("\n");
    }

system("pause");    
}