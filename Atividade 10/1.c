#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, y, *p;
    
    y = 0;// Variavel y recebe 0 
    p = &y;// Ponteiro p recebe o endereço da variável y.
    x = *p;// Variavel x recebe o valor que p aponta, no caso y.
    x = 4;// Variavel  x recebe 4. 
    (*p)++;// Variavel y recebe ela mesma mais 1.
    --x;// decrementa 1 da variavel x.
    (*p) += x;// variavel y recebe ela mesma mais x.

    /* Logo o valor de X == 3; Y == 4; P == endereço de memória do Y*/
system("pause");
}