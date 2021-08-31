#include <stdio.h>
#include <stdlib.h>

void main(){

    int num1, num2, op;
    float R;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Escolha uma das operacoes: Soma[1], Subtracao[2], multiplicacao[3] Divisao[4]: ");
    scanf("%d", &op);

    if(op == 1){
        R = num1 + num2;
    }else if(op == 2){
        R = num1 - num2;
    }else if(op == 3){
        R = num1*num2;
    }else if(op == 4){
        R = num1/num2;
    }else{
        printf("Operacao Invalida.");
    }

    printf("A operacao entre %d e %d = %.2f\n", num1, num2, R);

    system("pause");
}

// Como faço para resolver o problemas de divisões que resultam em número menor que 1? EX. 1/2 = 0.00.