#include <stdio.h>
#include <stdlib.h>
float G; // variável global.

float soma(float a, float b);//parâmetros por cópia do valor
float ponteiro(float *a, float *b);//parâmetros por referencia de memoria


// pode-se criar o cabeçalho da função antes da main, e depois implementa-la
// depois da função main.

void main(){// função main
    float r;
    
    r = soma(1.0,1.0);
    
    printf("%f\n", r);

system("pause");
}

float soma( float a, float b){ // estrutura básica de uma função.
    float i; // variável local
    i = a+b;
    // printf("%.3f", a+b);
    return i;
}

float ponteiro(float *a, float *b){
    *a = 10;// modifica o valor da variável
    *b = 5;
    // b = 12234; //modifica o endereço da memória

    // com ponteiros é possivel alterar as variáveis diretamente, dispensando
    // o uso do "return".
}

