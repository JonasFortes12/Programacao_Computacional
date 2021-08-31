#include <stdio.h>

int palindromo(char *palavra){
	char *pf = &palavra[strlen(palavra)-1];
	char *pi = palavra;
	int tamanho = strlen(palavra);
	int eh_palindromo = 1;
	
	while(tamanho>1){
		if(*pf != *pi){
			eh_palindromo = 0;
			break;
		}
		pi++;
		pf--;
		tamanho = tamanho-2;
	}
	
	return eh_palindromo;
}

int main(){
	char pal[20] = "reinier";
	int resp = palindromo(pal);
	if(resp)
		printf("eh um palindromo");
	else
		printf("Nao eh um palindromo");
}
