#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    float n, s, r;
    for(i = 0; i < 10; i++){
        printf("Digite o numero: ");
        scanf("%f", &n);
        s += n;
    }
    r = s/i;
    printf("A media aritmetica dos valores eh %.2f\n", r);


system("pause");
}