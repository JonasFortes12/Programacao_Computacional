#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%3 == 0){
            printf("%d\n", i);
        }
    }

    system("pause");
}