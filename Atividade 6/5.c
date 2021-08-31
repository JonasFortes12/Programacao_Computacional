#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, i, s=1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d - ", s);
        s += 4;
    }
    printf("\n");

system("pause");
}