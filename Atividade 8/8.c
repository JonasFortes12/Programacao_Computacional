#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    const int n = 10;
    int i, o;
    float DP, media, variancia, soma;
    o = soma = 0;
    int v[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    for(i=0; i<n; i++) soma+=v[i];
    media = soma/n;

    for(i=0; i<n; i++){
        o = v[i]-media;
        variancia += pow(o,2);
    }
    variancia = variancia/(n-1);
    DP = sqrt(variancia);
        
    printf("Desvio Padrao: %.3f\n",DP);
    printf("Variancia: %.3f\n",variancia);
    printf("Media: %.3f\n",media);

system("pause");    
}