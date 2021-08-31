#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.14159265359;

long long int fatorial(int n){  
    if(n <= 1) return 1;
    else return n * fatorial(n-1);
}

int main(){
    float Tn=1, Tp=1, x, lim, sumN=0, sumP=0, exN=3, exP=1, senX;
    printf("Digite o valor de X: ");
    scanf("%f", &x);
              
    x = (x*pi)/180;

    lim = pow(10, -12);

    while (Tn>lim || Tp>lim){
        Tp = pow(x, exP)/fatorial(exP);
        Tn = - (pow(x, exN)/fatorial(exN));

        sumN += Tn;
        sumP += Tp;

        exN += 4;
        exP +=4;

    }
    senX = sumN + sumP;
    printf("Sen(x) = %.12lf\n", senX);

system("pause");    
    return 0;
}