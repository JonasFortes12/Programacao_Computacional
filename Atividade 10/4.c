#include <stdio.h>
#include <stdlib.h>

int iqual(char *a, char *b);

void main(){
    char x, y;
    int r;
    x = 'B';
    y = 'B';

    r = iqual(&x, &y);

    printf("::: %d\n", r);

system("pause");
}

int iqual(char *a, char *b){
    int r;
    if(*a == *b) r = 1;
    else r = 0;
    return r;
}