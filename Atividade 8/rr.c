#include  <stdio.h>
#include <stdlib.h>

void main(){
    int i, n, k = 0, e = 0;
    int v[10];
    int v1[10];
    int v2[10];

    for(i=0;i<10;i++){
        printf(" :");
        scanf("%d", &n);
        v[i] = n;
    }

    for(i=0;i<10;i++){
        if(v[i] % 2 == 0){
            v2[k] = v[i];
            ++k;
        }else{
            v1[e] = v[i];
            ++e;
        }
    }
    printf("v1= %d/nv2 = %d", v1, v2);

system("pause");
}