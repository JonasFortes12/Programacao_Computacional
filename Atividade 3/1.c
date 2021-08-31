#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1,num2,num3, med;

    printf("Digite o numero 1: ");
    scanf("%f", &num1);
    printf("Digite o numero 2: ");
    scanf("%f", &num2);
    printf("Digite o numero 3: ");
    scanf("%f", &num3);
    
    med = (num1+num2+num3)/3;
    
    printf("A media entre %.0f, %.0f e %.0f: %.1f\n", num1, num2,num3, med);
    
    system("pause");
}