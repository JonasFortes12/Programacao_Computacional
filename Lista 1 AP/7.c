#include <stdio.h>
#include <stdlib.h>

void main(){
    int op, i, j, num, primo, soma=0;
    printf("[1]-Analisar numero| [2]-Sequencia de primos| [3]-Soma de primos:");
    scanf("%d", &op);

    switch(op){
        case 1:
            primo = 1;
            printf("Digite o numero: ");
            scanf("%d", &num);
            for(i=2; i<num; i++){
                if(num%i == 0) primo = 0;
            }
            if(primo){
                printf("O numero %d eh primo\n", num);
            }else printf("O numero %d nao eh primo\n", num);
        break;
        case 2:
            printf("Digite um numero: ");
            scanf("%d", &num);
            for(i=2; i<=num; i++){
                primo = 1;
                for(j=2; j<i; j++){
                    if(i%j == 0) primo = 0;
                }
                if(primo) printf("%d - ", i);
            }
            printf("\n");
        break;
        case 3:
            printf("Digite um numero: ");
            scanf("%d", &num);
            for(i=2; i<=num; i++){
                primo = 1;
                for(j=2; j<i; j++){
                    if(i%j == 0) primo = 0;
                }
                if(primo) soma += i;
            }
            printf("Soma dos Primos entre 1 e %d eh %d \n", num, soma);
        break;
    }

system("pause");    
}