#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, neg = 0;
    float N;

    for (i = 1; i <= 10; i++){
        printf("Digite o valor :");
        scanf("%f", &N);
        if (N < 0) neg++; 
    }

    printf("%d dos numeros digitados sao negativos.\n", neg);

system("pause");
}