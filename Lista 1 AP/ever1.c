//Primeira questão
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, k, max=1, cont=1, n, *vi;
	
    do{
	printf("Digite o tamanho da sequencia: ");
	scanf("%d", &n);
	if(n<1 || n>500)
		printf("Tamanho inválido. O tamanho deve esta no intervalo [1,500].\n ");
	}while(n<1 || n>500);

	vi = (int*) malloc(sizeof(int)*n);
    
	for(i=0;i<n;i++){
		do{
		printf("Digite os numeros um de cada vez na sequencia: ");
		scanf("%d", &vi[i]);
		}while(vi[i]<1 || vi[i]>n);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			cont=1;
			if(vi[i]!=vi[j]){
				cont++;
				int aux1=vi[i], aux2=vi[j];
				for(k=j+1;k<n;k++){
					if(aux1==vi[k]){
						cont++;
						if(aux1==vi[i]){
							aux1=vi[j];
							aux2=vi[i];
						}else{
							aux1=vi[i];
							aux2=vi[j];
						}	
						if(max<cont)
							max=cont;
						
					}else if(aux2==vi[k])
						break;
				}
			}
		}
	}
	printf("%d", max);		
	free(vi);

system("pause");
}