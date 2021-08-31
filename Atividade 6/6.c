#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, i, s = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    
    for(i = n1; i <= n2; i++){
        s += i; 
    }
    
    printf("A soma dos valores entre o intervalo [%d,%d] eh %d\n", n1, n2, s);

system("pause");
}
