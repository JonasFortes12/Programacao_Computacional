#include <stdio.h>
#include <stdlib.h>

int marcadosEm(int *numeros, int t);

void main(){
    int *A, t, i, R;
    printf("Digite quantidade da sequencia: ");
    scanf("%d", &t);
    
    A = (int*) malloc(sizeof(int) * t);

    for(i=0;i<t;i++){
        printf("pos[%d]: ", i);
        scanf("%d", &A[i]);
    }
    R = marcadosEm(A, t); 
    printf("%d\n", R);

    free(A);
system("pause");    
}

int marcadosEm(int *numeros, int t){
    int h, i, j, n1, n2, cont, sequeMaior = 1;
    
    for(i=0;i<t;i++){
		for(j=i+1;j<t;j++){
			cont=1;

            if(numeros[i]==numeros[j]) break;

			cont++;
			n1=numeros[i];
            n2=numeros[j];
            
			for(h=j+1;h<t;h++){
				if(n1==numeros[h]){
					cont++;
					n1=numeros[j];
					n2=numeros[i];	
					if(sequeMaior<cont) sequeMaior = cont;
				}
			}
		}
	}
    return sequeMaior;
}
