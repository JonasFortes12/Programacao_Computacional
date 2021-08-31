#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    for(i=10; i<=20; i++){
        if(i%2 == 1){
            printf("%d\n", i);
        }
    }

    system("pause");
}