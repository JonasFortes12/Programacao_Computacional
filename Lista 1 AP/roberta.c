#include<stdio.h>
#include<stdlib.h>
int main(){
	char **entrada;
	int **saida;
	int tam, i, j, k, l;
	int dis=0, min;

	printf("Digite a dimensao da folha: ");
	scanf("%d", &tam);
	
	min=tam+1;
	printf("tam: %d  min: %d", tam, min);

	entrada =(char**)malloc(sizeof(char*)*tam);
	
	for(i=0; i<tam; i++){
		entrada[i]=(char*)malloc(sizeof(char)*tam);
	}
	 
	saida=(int**)malloc(sizeof(int*)*tam);
	
	for(i=0; i<tam; i++){
		saida[i]=(int*)malloc(sizeof(int)*tam);
	}

	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Digite * para sem cor e 0 para tom 0: ");
			scanf(" %c", &entrada[i][j]);
		}
	}

	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%c ", entrada[i][j]);
		}
	 printf("\n");
	}

    for(i=0; i<tam; i++){
    	for(j=0; j<tam; j++){

    		if(entrada[i][j]!='0'){
    			printf("\nachou\n");
    			

    		    for(k=0; k<tam; k++){
    				for(l=0; l<tam; l++){

    					if(entrada[k][l]=='0'){
    				 
							printf("i %d j %d \n", i ,j);

    						dis=abs(i-k)+abs(j-l);

    							printf("calculou a distancia\n");
    							printf("dis %d min %d \n", dis, min);
							
							if(dis<=min){
    							printf("entrou\n");// nao entrou em [1][0] pq? pq ta dando 16? 
    						   	min=dis;// min=1
    						   	saida[i][j] = min;// saida[0][0]=2, saida[0][1]=1, saida[1][0]=1
    					    }
    					   dis=0;
						}
							
					}
				}
				min = tam+1;

			}else if(entrada[i][j] == '0'){
    			saida[i][j]=0;
			}
			else{
				printf("slfjdlfsdgjdfoigjsdo´fjgojgdfijo\n");
				printf("slfjdlfsdgjdfoigjsdo´fjgojgdfijo\n");
				printf("slfjdlfsdgjdfoigjsdo´fjgojgdfijo\n");
				printf("slfjdlfsdgjdfoigjsdo´fjgojgdfijo\n");
				printf("slfjdlfsdgjdfoigjsdo´fjgojgdfijo\n");
			}
			
		}
	}
    for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", saida[i][j]);
		}
	  printf("\n");
	}
	
	for(i=0; i<tam; i++){
		free(entrada[i]);
	}
	free(entrada); 
	
	for(i=0; i<tam; i++){
		free(saida[i]);
	}
	free(saida);
}