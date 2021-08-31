#include <stdio.h>
#include <stdlib.h>

/*
O ponteiro serve para armazenar um endereço de uma variávelque será
acesada remotamente.
*/
// void func(int *a, int *b, int *c);

void main(){
   int vet[3] = {1, 2, 3};

   int *vet2;

   vet2 = (int*) malloc(sizeof(int)*3);// Alocação literal de um Vetor.


system("pause");    
}




void func(int *a, int *b, int *c){
    *a = 10;
    *b = 20;
    *c = 30;
}

void main4(){
    int a = 10;
    int *b;
    int **c;// POnteiros que apontam para ponteiros que apontam para variaveis.

    b = &a;
    c = &b;

    // saida aqui


system("pause");    
}
void main3(){
    int a = 1, b = 2, c = 3; 
    
    func(&a, &b, &c);

    printf("*a = %d\n", a);
    printf("*b = %d\n", b);
    printf("*c = %d\n", c);

system("pause");    
}
void main1(){

    int a = 302; //variável de foco.
    int *b; // Instanciamento de um ponteiro.

    b = &a;// o ponteiro b recebe o endereço de a.
    printf("Endereco de b: %d\n", &b);
    printf("Valor de b: %d\n", b);
    printf("Valor da variavel que b aponta: %d\n", *b);
    /*
    
    b = 100 o valor do ponteiro está sendo modificado
    *b = 100 o valor da variável apontada esta sendo modificada, no caso a. 
    
    */
system("pause");    
}
void main2(){
    int a, b; 
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = p1;
    p3 = &b;

    a = 5;
    b = 6;

    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);

system("pause");    
}