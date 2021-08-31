#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bask();

void main(){
    int a, b, c, x1, x2;
    printf("Digite valode de A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    
    bask(a, b, c, &x1, &x2);
    
    printf("As raizes sao %d e %d\n", x1, x2);

system("pause");
}

void bask(int a, int b, int c, int *x1, int *x2){
    int delt;
    delt = pow(b,2) - (4*a*c);
    if(delt >= 0){ 
        *x1 = (-b + sqrt(delt))/(2*a);
        *x2 = (-b - sqrt(delt))/(2*a);
        return;
    }else 
    *x1 = *x2 = 0;
}

