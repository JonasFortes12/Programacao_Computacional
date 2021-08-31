#include <stdio.h>
#include <stdlib.h>

const int qtdA = 4;// Quantidade de Alunos.
const int minA  = 1;//Mínimo de Alunos.

int* acontece(int *aluno, int minA);
void* aberturas(int **aulas, int minA, int *dadas);

void main(){
    int **aulas, i, j;
    // Aloca o vetor 1(linhas).
    aulas = (int**) malloc(sizeof(int*) * 3);
    // Aloca um vetor (colunas) para cada posição do vetor 1
    for(i=0; i<3; i++){
        aulas[i] = (int*) malloc(sizeof(int) * 4);
    }

    int aulasDadas[3];
    
    for(i=0; i<3; i++){
        printf("Dia %d.", i+1);
        for(j=0; j<qtdA; j++){
            printf("Aluno %d: ", j+1);
            scanf("%d", &aulas[i][j]);
        }
    }
    aberturas(aulas, minA, aulasDadas);

    for(i=0; i<3; i++) printf("%d ", aulasDadas[i]);
    
system("pause");
free(aulas);
}

int acontece(int *aluno, int minA){
    int i, presente = 0, r;
    for(i=0; i<qtdA; i++) if(aluno[i] <= 0) presente += 1;
    if(presente > minA) r = 1;
    else r = 0;
    return r;
}

void* aberturas(int **aulas, int minA, int *dadas){
    int i;
    for(i=0;i<3;i++){
        dadas[i] = acontece(aulas[i], minA);
    }
}




