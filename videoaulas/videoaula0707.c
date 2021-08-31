#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// malloc não retorna um vetor, e sim uma posição inicial que aponta para posições.
// comando "new" para alocar memória de forma mais moderna.

struct aluno{
    char nome[28];
    int idade;
    float peso;
};

void main(){
    struct aluno jonas;

    strcpy(jonas.nome, "Jonas Fortes");
    jonas.idade = 19;
    jonas.peso = 68;

system("pause");    
}


void main2(){

    int **mat, i, j;

    // Aloca o vetor 1(linhas).
    mat = (int**) malloc(sizeof(int*) * 2);

    // Aloca um vetor (colunas) para cada posição do vetor 1
    for(i=0; i<3; i++){
        mat[i] = (int*) malloc(sizeof(int) * 3);
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; i++){
            mat[i][j] = 0;
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<3; i++){
            printf("%d\n",mat[i][j]);
        }
    }

free(mat);

system("pause");    
}

void main1(){
    int *p;
    p = (int*) malloc(sizeof(int)*3);// Alocação literal de um Vetor.
    p[0] = 3;
    p[1] = 6;
    p[2] = 7;
    
    // p será a o endereço da posição inicial do vetor.
    
    printf("%d\n", *(p+1)); 



free(p);
system("pause");    
}