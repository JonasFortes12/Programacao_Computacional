#include <stdio.h>
#include <stdlib.h>

void main(){
   
   int cont = 1;
   int R = 0;
   
    while(cont <= 100){
        R = R + (cont);
        cont += 1;
    }
    
    printf("%d\n", R);

    system("pause");
}
