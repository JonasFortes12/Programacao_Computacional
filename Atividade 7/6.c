#include <stdio.h>
#include <stdlib.h>


int imppar();

void main(){
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);

   if(imppar(num)) printf("O numero eh Par.\n");
   else printf("O numero eh Impar.\n");

system("pause");
}

int imppar(int a){
    if(a%2 == 0) return 1;
    else return 0;
}