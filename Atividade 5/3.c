#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

void main(){

    int op;
    float L, C, H, R;

    printf("[1]-cubo [2]-paralelepipedo [3]-cilindro\n");
    printf("Digite o codigo do solido geometrico que deseja calcular: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Digite o valor da altura: ");
            scanf("%f", &H);
            R = pow(H,3);
            printf("Volume: %.2f\n", R);
            break;
        case 2:
            printf("Digite o valor do comprimento: ");
            scanf("%f", &C);
            printf("Digite o valor da largura: ");
            scanf("%f", &L);
            printf("Digite o valor da altura: ");
            scanf("%f", &H);
            R = C*L*H;
            printf("Volume: %.2f\n", R);
            break;
        case 3:
            printf("Digite o valor do raio: ");
            scanf("%f", &L);
            printf("Digite o valor da altura: ");
            scanf("%f", &H);
            R = PI*(pow(L, 2)*H);
            printf("Volume: %.2f\n", R);
            break;
    }


system("pause");    
}