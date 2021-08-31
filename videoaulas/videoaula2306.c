#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Alocação dinâmica; Método de Ordenação; Matrizes Státicas.
void main1(){

    int t;//tamanho do vetor.
    int* vetor;// ponteiro que armazena a alocação de memória. cada inteiro vale 4bites.
    vetor = (int*) malloc(sizeof(int) * t);//aloco n * syze(int) bites de memória para o vetor e armazena no ponteiro
    // e também faço o casting para o tipo ponteiro, pois a fução malloc retorna um valor de tipo genérico.
    vetor[0] = 1; 
    
    free(vetor);// apaga a memória alocada, recebe o endereço para isso.

system("pause");    
}

void main2(){

    // ordenação de vetores. Método da bolha.
    int i, j, aux;  
    int vet[10] = {1, 6, 3, 2, 5, 7};
    for(j=0; j<10; j++){
        for(i=0; i<9; i++){// itera até a posição 8 pois ja verificará a posição 9(8+1)
            if(vet[i]>vet[i+1]){
                aux = vet[i];// Troca o maior valor para a posição seguinte.
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }

// Tentar ordenar de forma decrescente.

system("pause");    
}

void main(){
    int i, j, maior;
    int mat[3][3];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Posicao[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    maior = mat[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(mat[i][j]>maior){
                maior = mat[i][j];
            }
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    printf("Maior: %d\n", maior);
system("pause");
}