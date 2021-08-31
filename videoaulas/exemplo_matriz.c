#include <stdio.h>
#include <stdlib.h>

void exibir(int **mat, int lin, int col){
	int i, j;
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int **mat;
	int lin, col;
	
	printf("Digite a dimensao:");
	scanf("%d", &lin);
	col = lin;
	
	
	//aloca o primeiro vetor, as linhas
	mat = (int**) malloc(lin*sizeof(int*));
	int i, j;
	
	//percorre o vetor inicial e aloca um vetor dentro de cada posição
	for(i=0; i<lin; i++){
		mat[i] = (int*) malloc(col*sizeof(int));
	}
	
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			if(i==j)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
		}
	}
	
	exibir(mat, lin, col);
	
	
	
	//apaga matriz
	for(i=0; i<lin; i++){
		free(mat[i]);
	}
	free(mat);
	
	
	
}
