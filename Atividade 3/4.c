#include <stdio.h>
#include <stdlib.h>

void main(){
   int t;
   int A = 10;
   int B = 20;

    t = A;
    A = B;
    B = t;

    printf("A = %d, B = %d\n", A, B);



    system("pause");
}