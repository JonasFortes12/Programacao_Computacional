#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b);

void main(){
    float x, y;
    x = 0.23;
    y = 1002.6;

    troca(&x, &y);

    printf("X = %.2f  Y = %.2f\n", x, y);

system("pause");
}

void troca(float *a, float *b){
    float aux;   
    aux = *a;
    *a = *b;
    *b = aux;
}
