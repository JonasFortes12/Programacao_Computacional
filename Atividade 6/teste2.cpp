#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int num;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	int cont = 2;
	int primo = 1;//indica que � primo
	while(cont<num){
		if(num % cont == 0){ //verifica se algum numero anterior divide o do usu�rio
			printf("%d mod %d == 0\n", num, cont);
			primo = 0;//indica que n�o � primo
			break;
		}
		cont = cont + 1;
	}
	
	//verifica se algum numero anterior dividiu o numero do usu�rio
	if(primo==1){
		printf("E primo");
	}else{
		printf("Nao primo");
	}
system("pause");
}

