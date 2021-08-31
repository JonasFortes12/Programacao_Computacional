#include <stdio.h>
#include <stdlib.h>

void main(){
    float num1, num2, R;
    int op;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o codigo da operacao: [1]-media [2]-diferenca [3]-produto [4]-divisao :");
    scanf("%d", &op);

    switch(op){
        case 1:
            R = (num1+num2)/2;
            printf("Resultado: %.2f\n", R);
            break;
        case 2:
            R = num1 - num2;
            printf("Resultado: %.2f\n", R);
            break;
        case 3:
            R = num1*num2;
            printf("Resultado: %.2f\n", R);
            break;
        case 4:
            R = num1/num2;
            printf("Resultado: %.2f\n", R);
            break;
        default:
            printf("Codigo Invalido. \n");
            break;
    }
    
    


system("pause");    
}
