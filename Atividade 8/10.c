#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, v[10], v1[10], v2[10];
    int u1, u2;
    u1 = u2 = 0;
    
    printf("Digite %d numeros inteiros.\n", sizeof(v)/sizeof(v[0]));
    for(i=0; i < sizeof(v)/sizeof(v[0]); i++){
        printf("Posicao[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for(i=0; i < sizeof(v)/sizeof(v[0]); i++){
        if(v[i]%2 == 0){
            v1[u1] = v[i];
            u1++;
        }else{
            v2[u2] = v[i];
            u2++;
        }
    }
    
    printf("Pares: ");
    for(i=0; i < u1; i++){
        printf("%d - ", v1[i]);
    }
    printf("\n");
    printf("Impares: ");
    for(i=0; i < u2; i++){
        printf("%d - ", v2[i]);
    }

system("pause");    
}