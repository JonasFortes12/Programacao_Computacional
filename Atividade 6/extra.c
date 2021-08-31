#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num1, num2, i, o;
    int div, primo;
    
    printf("Digite dois numeros, o segundo maior que o primeiro.\n");
    while (o){
        printf("Numero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);
        if(num1 < num2)
            break;
        else
            printf("O segundo numero maior que o primeiro!\n");
    }
    printf("Numeros primos entre %d e %d:\n ", num1, num2 );
    for(i = num1+1; i<num2; i++){
        div = 2;
        primo = 1;
        
        while(div < i){
            if(i % div == 0){ 
			    primo = 0;
			    break;
		    }
		    div++;
	    }
        if(primo == 1){
            printf("%d. ", i);
        }

    }

system("pause");    
}