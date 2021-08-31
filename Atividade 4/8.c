#include <stdio.h>
#include <stdlib.h>

void main(){
    float sal;

    printf("Digite o salario: ");
    scanf("%f", &sal);

    if(sal <= 600){
        sal += sal*0.30;
    }else if(sal > 600 && sal <= 1100){
        sal += sal*0.25;
    }else if(sal > 1100 && sal <= 2400){
        sal += sal*0.20;
    }else if(sal > 2400 && sal <= 3550){
        sal += sal*0.15;
    }else if(sal > 3550){
        sal += sal*0.10;
    }

    printf("O novo salario eh %.2f \n", sal);


system("pause");    
}