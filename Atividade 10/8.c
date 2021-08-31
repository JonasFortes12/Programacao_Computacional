#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float PI = 3.14159265359;
void calc_esfera(float R, float *area, float *volume);

void main(){
    float area, volume, R;
    printf("Digite o Raio: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("Area: %.4f | Volume: %.4f\n", area, volume);
    

system("pause");
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4*PI*sqrt(R);
    *volume = (4/3)*PI*pow(R,3);
}