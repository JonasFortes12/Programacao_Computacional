#include <stdio.h>
#include <stdlib.h>

void main(){

    int o;
    float num, max = 0;

    printf("Digite 0 para parar.\n");
    while (o){
        printf("Numero: ");
        scanf("%f", &num);
        if(num > max)
            max = num;
        else if(num == 0)
            break;
    }
    
    printf("O maior numero eh %.2f\n", max);

system("pause");
}