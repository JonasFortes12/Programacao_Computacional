#include <stdio.h>
#include <stdlib.h>

	
int main(){
	int n, i, j, x, y, res, dis, **q;
	char **v;
	do{
		printf("Digite as dimensoes que o quadriculado tera: ");
		scanf("%d", &n);
		if(n<3 || n>1000)
			printf("\nDimensao invalida. Tente de novo.");
	}while(n<3 || n>1000);
	
	v=(char**) malloc(sizeof(char*)*(n+1));
	
	for(i=0;i<n;i++){
		v[i]=(char*) malloc(sizeof(char)*(n+1));
	}
	
	q=(int**) malloc(sizeof(int)*(n));
	
	for(i=0;i<n;i++){
		q[i]=(int*) malloc(sizeof(int)*n);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			do{
			printf("Digite * para indicar que o quadrado nao sera colorido\nOu digite 0 para indicar que o quadrado sera colorido com tom 0: ");
			scanf(" %c", &v[i][j]);
			if(v[i][j]!='*' && v[i][j]!='0')
				printf("Comando invalido. Digite * ou 0");
			}while(v[i][j]!='*' && v[i][j]!='0');
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dis=9;
			if(v[i][j]=='0')
				q[i][j]=0;
			
			if(v[i][j]=='*'){
				for(x=0;x<n;x++){
					for(y=0;y<n;y++){
						if(v[x][y]=='0'){
							res=abs(x-i)+abs(y-j);
							if(res>9)
								res=9;
							
							if(dis>res)
								dis=res;
						
							q[i][j]=dis;
						}
					}
			
				}
			}
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", q[i][j]);
		}
		printf("\n");
	}

system("pause");
}