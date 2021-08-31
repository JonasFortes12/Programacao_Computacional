#include <stdio.h>
#include <stdlib.h>

void main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 10){
        printf("Eh MAIOR QUE 10!\n");
    }else{
        printf("NAO Eh MAIOR QUE 10\n!");
    }


system("pause");
}