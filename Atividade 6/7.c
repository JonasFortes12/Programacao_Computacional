#include <stdio.h>
#include <stdlib.h>

void main(){
    int numM, i;
    float valor, S, M;

    printf("Digite o numero de mercadorias: ");
    scanf("%d", &numM);

    printf("__Digite o valor das mercadorias__\n");
    for(i = 1; i<=numM; i++){
        printf("Mercadoria %d: ", i);
        scanf("%f", &valor);
        S += valor;
    }
    M = S/numM;

    printf("Valor total: RS_%.2f | Media por mercadoria: RS_%.2f\n", S, M);

system("pause");    
}