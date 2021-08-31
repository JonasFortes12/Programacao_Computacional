#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float notavaliar(float n1, float n2, float n3, char l);

void main(){
    float n1,n2,n3, M;
    char l;
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Media [A]-Aritmetica, [P]-Ponderada; [H]-Harmonica: ");
    scanf(" %c", &l);

    M = notavaliar(n1,n2,n3,l);

    printf("A media eh %.2f\n", M);
    
system("pause");
}

float notavaliar(float n1, float n2, float n3, char l){
    float m;
    l = toupper(l);
    switch (l){
    case 'A':
        m = (n1+n2+n3)/3;
        break;
    case 'P':
        m = (n1*5)+(n2*3)+(n3*2)/10;
        break;
    case 'H':
        m = 3/((1/n1)+(1/n2)+(1/n3)); 
        break;
    default:
        printf("Funcao nao encontrada.\n");
        break;
    }
    return m;
}

