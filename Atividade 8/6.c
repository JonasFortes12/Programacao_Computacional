#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j, V[10];

    for(i=0; i < sizeof(V)/sizeof(V[0]); i++){
        printf("Digite o valor posicao[%d]: ", i);
        scanf("%d", &V[i]);
    }

    printf("Numeros Repetidos: \n");
    for(i=0; i < sizeof(V)/sizeof(V[0]); i++){
        for(j = i + 1; j < sizeof(V)/sizeof(V[0]); j++){
            if(V[i] == V[j]){
                printf("%d\n", V[i]);
            }
        }
    }

system("pause");    
}