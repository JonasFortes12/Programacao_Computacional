#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(char *S1, char *S2);

void main(){
    int r;
    
	char S1[100];
    char S2[100];
    
    printf("Digite a String 1:\n",-93);
	gets(S1);
	printf("Digite a String 2:\n",-93);
 	gets(S2);

    r = cmp(S1, S2);
    if(r == 1) printf("String 2 esta dentro de String 1\n");
    else printf("String 2 NAO esta dentro de String 1\n");

system("pause");
}

int cmp(char *a, char *b){
    int i, j, c = 0, r = 0;
    for(i=0; i<strlen(a)-1; i++){
        if(a[i] == b[0]){
            for(j=0; j<strlen(b)-1; j++){
                if(b[j] == a[i++]){
                    c++;
                }else{
                    c=0;
                    break;
                }
            }
            if(c == strlen(b)-1){
                r = 1;
                break;
            }
        }
    }
    return r;
}
