#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    const char login[14] = "jonasfortes92";
    const char senha[14] = "for14jon";
    int o;
    char log[14];
    char pass[14];

    while (o){
        printf("Login: ");
        scanf("%s", &log);
        printf("Senha: ");
        scanf("%s", &pass);

        if (strcmp(log, login) == 0 && strcmp(pass, senha) == 0){
            printf("                    \n");
            printf("Logado com sucesso!\n");
            break;
        }else{
            printf("                    \n");
            printf("Dados Incorretos!\n");
            printf("____________________\n");
        }       
    }

system("pause");    
}