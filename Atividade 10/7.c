#include <stdio.h>
#include <stdlib.h>

void minmax(int *v, int *mn, int *mx);

void main(){
    int min, max;
    int V[12] = {10, 2, 5, 7, 2, 92, 3, 123, 5, 55, 32, 67};

    minmax(V, &min, &max);

    printf("Min: %d | Max: %d\n", min, max);

system("pause");
}

void minmax(int *v, int *mn, int *mx){
    int i;
    for(i=0; i<12; i++){
        if(i==0) *mn = *mx = v[i];
        else if(v[i] < *mn) *mn = v[i];
        else if(v[i] > *mx) *mx = v[i];   
    }
    
}