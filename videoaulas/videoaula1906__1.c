#include <stdio.h>
#include <stdlib.h>

void apresentar(void);// void obriga que não seja mandado parâmetros para a função
int fatorial();// não precisa definir os parâmetros aqui.
int somar();

void main(){
    
    int r;
    
    r = somar(10, 1, 0);

    printf("%d\n", r);

system("pause");
}






void apresentar(){
    printf("Nome: Jonas Fortes");
}
//5! = 5 * 4 * 3 * 2 * 1
//5! = 5 * 4!
//4! = 4 * 3!
//3! = 3 * 2!
//2! = 2 * 1!
// r = n * fat(n-1);
int fatorial(int n){  
    if(n <= 1) return 1;
    else return n * fatorial(n-1);
}

// Entender esse recursão!!
int somar(int max, int cont, int soma){
    // printf("%d\n", cont);
    // printf("%d\n", soma);
    if(cont == max) return soma;
    else{
        soma = soma + cont;
        somar(max, ++cont, soma);
    }
}



