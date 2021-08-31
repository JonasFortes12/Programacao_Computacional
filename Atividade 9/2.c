#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i, j;
    int M[10][10];
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i == j) M[i][j] = 1;
            else M[i][j] = 0;
        }
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d - ", M[i][j]);
        }
        printf("\n");
    }

system("pause");    
}