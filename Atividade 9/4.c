#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int i, j;
    int M[10][10];
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i < j) M[i][j] = (2*i) + (7*j) - 2;
            else if(i > j) M[i][j] = (4*pow(i, 3)) - (5*pow(j, 2)) + 1;
            else M[i][j] = (3*pow(i, 2)) - 1;
            
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