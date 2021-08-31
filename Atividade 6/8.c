#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){

    int i = 0, loop, op;
    char l;
    float valor, S = 0, M;

    printf("Digite o valor das mercadorias__\n");
    while (loop){
        op = 1;        
        i++;
        printf("Valor %d : ", i);
        scanf("%f", &valor);
        S += valor;
    
        while (op){
            printf("Mais Mercadorias?(S|N): ");
            scanf(" %c", &l);
            l = toupper(l);
            
            switch (l){
            case 'S': 
                op = 0;
                break;
            case 'N':
                loop = 0;
                op = 0;
                break;
            default:
                printf("Digite 'S' ou 'N' \n");
                break;
            }
        }
    }

    M = S/i;
    printf("Valor total: RS_%.2f | Media por mercadoria: RS_%.2f\n", S, M);

system("pause");    
}
