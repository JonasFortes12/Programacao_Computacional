#include <stdio.h>
#include <stdlib.h> 

void main(){

    int o, pass;

    while (o){
        printf("Senha: ");
        scanf("%d", &pass);

        if(pass == 1234){
            printf("ACESSO PERMITIDO.\n");
        break;
        }else{
            printf("ACESSO NEGADO.\n");
        } 
        }



system("pause");
}

// Porque quando "pass" recebe um valor não inteiro o "acesso negado" execulta 
// em loop infinito?