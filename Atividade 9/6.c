#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    // entrada
    int i, j;
    char M[5][10];
    int P[5] = {0, 0, 0, 0, 0};
    char G[10] = {'A', 'D', 'C', 'D', 'A', 'C', 'B', 'A', 'B', 'C'};
    
    // processamento
    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            printf("Aluno %d | Q%d: ",i+1, j+1);
            scanf(" %c", &M[i][j]);
            M[i][j] = toupper(M[i][j]);
        }
        printf("_________________________________________________\n");
    }

    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            if(M[i][j] == G[j]) P[i]++;
            printf("%c  ", M[i][j]); 
        }
        printf("\n");
    }

    // saida
    for(i=0; i<5; i++){
        printf("Pontos Aluno %d: %d/10\n", i+1, P[i]);
    }

system("pause");    
}