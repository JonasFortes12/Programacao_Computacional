#include <stdio.h>
#include<stdlib.h>


void main(){
    int i;
    float num, min, max;

    for(i=1; i<=100; i++){

        printf("Digite o numero: ");
        scanf("%f", &num);

       switch (i){
       case 1:
           min = max = num;
           break;
       default:
            if(num < min)
                min = num;
            else if(num > max)
                max = num;
           break;
        } 
    }   
    
    printf("Valor maximo: %.2f | Valor minimo: %.2f.\n", max, min);

system("pause");
}