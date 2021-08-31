#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, A[5], cod, o;
    for(i=0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%d", &A[i]);
    }
    while (o){
        printf("Codigo: ");
        scanf("%d", &cod);

        switch (cod){
        case 1:
            for(i=0; i < sizeof(A)/sizeof(A[0]); i++) printf("%d; ", A[i]);
            o = 0;
            break;
        case 2:
            for(i= sizeof(A)/sizeof(A[0]) - 1; i >= 0; i--) printf("%d; ", A[i]);
            o = 0;
            break;
        default:
            printf("Digite [1]-Direta ou [2]-Inversa\n");
            break;
        }
    }
system("pause");    
}
