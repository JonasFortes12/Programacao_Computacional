#include <stdio.h>
#include <stdlib.h>

int divisnum();

void main(){
    int num, numdiv;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);

    numdiv = divisnum(num);

    printf("O numero de divisores eh %d\n", numdiv);

system("pause");
}

int divisnum(int num){
    int i, div;
    for(i = 1;i <= num; i++)
        if(num%i == 0) div += 1;
    return div; 
}   



