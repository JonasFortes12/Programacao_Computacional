#include <stdio.h>
#include <stdlib.h>
const int qtdA = 4;// Quantidade de Alunos por aula.

int acontece(int *aluno, int minA);
void aberturas(int aulas[][qtdA], int minA, int *dadas);

void main(){
    int i, j, minA;
    int aulas[3][qtdA];
    int ocorridas[3];

    printf("Minimo de Alunos por aula: ");
    scanf("%d", &minA);
    printf("Alunos da Segunda___\n");
    for (i=0; i<qtdA; i++){
        printf("Aluno %d: ", i+1);
        scanf("%d", &aulas[0][i]);
    }
    printf("Alunos da Terca___\n");
    for (i=0; i<qtdA; i++){
        printf("Aluno %d: ", i+1);
        scanf("%d", &aulas[1][i]);
    }
    printf("Alunos da Quarta___\n");
    for (i=0; i<qtdA; i++){
        printf("Aluno %d: ", i+1);
        scanf("%d", &aulas[2][i]);
    }
    
    aberturas(aulas, minA, ocorridas);
    
    printf("[");
    for(i=0;i<3;i++){
        printf(" %d ", ocorridas[i]);
    }
    printf("]");
    printf("\n");
    

system("pause");
}

int acontece(int *aluno, int minA){
    int i, presente = 0, r;
    for(i=0; i<qtdA; i++) if(aluno[i] <= 0) presente += 1;
    if(presente >= minA) r = 1;
    else r = 0;
    return r;
}

void aberturas(int aulas[][qtdA], int minA, int *ocorridas){
    int i;
    for(i=0;i<3;i++){
        ocorridas[i] = acontece(aulas[i], minA);
    }
}
