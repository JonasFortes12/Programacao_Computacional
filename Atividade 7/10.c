#include <stdio.h>
#include <stdlib.h>

long int fat();

void main(){
    long int r;
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    r = fat(num);

    printf("Fatorial de %d eh %ld\n", num, r);

system("pause");    
}

long int fat(int num){
    long int r;
    if(num == 1) return 1;
    r = num * fat(num-1);
    return r;
}