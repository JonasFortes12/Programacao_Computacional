#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float pesideal(float alt, char sex);

void main(){
    float peso, alt;
    char sex;
    printf("Digite a altura:" );
    scanf("%f", &alt);
    printf("Digite o sexo[M|F]: ");
    scanf(" %c", &sex);

    peso = pesideal(alt, sex);
    
    printf("O peso ideal eh %.2f\n", peso);

system("pause");
}

float pesideal(float alt, char sex){
    sex = toupper(sex);
    float peso;
    switch (sex){
    case 'M':
        peso = (72.7*alt) - 58;
        return peso;
        break;
    case 'F':
        peso = (62.1*alt) - 44.7;
        return peso;
        break;
    default:
        return 0;
        break;
    }
}

