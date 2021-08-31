#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int qtdA = 5;// Quantidade de alunos

typedef struct aluno{
        int matricula;
        char nome[50];
        float nota1;
        float nota2;
        float nota3;
        char sts[20];
    } Aluno;

void main(){
    int i, indx1, indx2, indx3;
    float maior, maxMed, minMed, med;
    Aluno A[qtdA];
    for(i=0; i<qtdA; i++){
        printf("=========Aluno %d=========\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]s", &A[i].nome);
        printf("Matricula: ");
        scanf("%d", &A[i].matricula);
        printf("Nota 1: ");
        scanf("%f", &A[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &A[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &A[i].nota3);
    }

    for(i=0; i<qtdA;i++){
        if(i==0){
            maior = A[i].nota1;
            indx1 = i;
        }
        else if(A[i].nota1>maior){
            maior = A[i].nota1;
            indx1 = i;
        } 
    }

    for(i=0; i<qtdA;i++){
        
        med = (A[i].nota1+A[i].nota2+A[i].nota3)/3;
        if(med>=6) strcpy(A[i].sts, "Aprovado");
        else strcpy(A[i].sts, "Reprovado");
        
        if(i==0){
            minMed = maxMed = med;
        }
        else if(med>maxMed){
            maxMed = med;
            indx2 = i;
        }else if(med<minMed){
            minMed = med;
            indx3 = i;
        }
    }


    printf("\n=== Maior Nota Prova 1 ===\n");
    printf("Nome: %s\n", A[indx1].nome);
	printf("Matricula: %d", A[indx1].matricula);
	printf("Notas: %.2f|%.2f|%.2f\n",A[indx1].nota1, A[indx1].nota2, A[indx1].nota3);
    printf("Status: %s\n",A[indx1].sts);
	printf("----------------------------\n");
    printf("\n=== Maior Media Geral ===\n");
    printf("Nome: %s\n", A[indx2].nome);
	printf("Matricula: %d\n", A[indx2].matricula);
	printf("Notas: %.2f|%.2f|%.2f\n",A[indx2].nota1, A[indx2].nota2, A[indx2].nota3);
    printf("Status: %s\n",A[indx2].sts);
	printf("----------------------------\n");
    printf("\n=== Menor Media Geral ===\n");
    printf("Nome: %s\n", A[indx3].nome);
	printf("Matricula: %d\n", A[indx3].matricula);
	printf("Notas: %.2f|%.2f|%.2f\n",A[indx3].nota1, A[indx3].nota2, A[indx3].nota3);
    printf("Status: %s\n",A[indx3].sts);
	printf("----------------------------\n");

    printf("\n=== Status Gerais ===\n");
        for (i=0; i<qtdA; i++){
            printf("Aluno: %s | Status: %s\n", A[i].nome, A[i].sts);
        }
	printf("----------------------------\n");
system("pause");    
}
