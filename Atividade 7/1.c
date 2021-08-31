#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float pi = 3.14159265359;

float volesfera(float raio);

void main(){
    float r, v;
    printf("Digite o raio: ");
    scanf("%f", &r);
    v = volesfera(r);
    printf("O volume da esfera eh %.2f\n", v);

system("pause");
}

float volesfera(float raio){
    float Ve;
    Ve = (4*pi*pow(raio,3))/3;
    return Ve;
}
