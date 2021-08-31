#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i, j;
    int M[4][4], M2[4][4];
    
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            M[i][j] = rand() % 20;
        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i<j) M2[i][j] = 0;
            else M2[i][j] = M[i][j];
        }
    }

    printf("Matrix______________\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d - ", M[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Transformada.\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d - ", M2[i][j]);
        }
        printf("\n");
    }

system("pause");    
}