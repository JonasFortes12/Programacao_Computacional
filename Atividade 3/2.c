#include <stdio.h>
#include <stdlib.h>

void main(){
    float B, b, h, R;

    printf("Informe a base maior: ");
    scanf("%f", &B);
    printf("Informe a base menor: ");
    scanf("%f", &b);
    printf("Informe altura: ");
    scanf("%f", &h);
    
    R = ((B+b)*h)/2;

    printf("O valor da area do trapezio: %.1f\n", R);
    
    system("pause");
    }