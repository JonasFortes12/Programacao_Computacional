#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(char *S1, char *S2);

int main(){
    int R;
    char S1[100] = "ANA , LAYLA, MAIANA, LOSANA E MARIANA GOSTAM DE BANANA";
    char S2[50] = "ANA";

    R = cmp(S1, S2);
    printf("%s Aparece %d veses na frase\n", S2, R);

system("pause");
return 0;
}

int cmp(char *a, char *b){
    int i, j, aux, c = 0, cont = 0;
    for(i=0; i<strlen(a); i++){
        if(a[i] == b[0]){
            aux = i;
            for(j=0; j<strlen(b); j++){
                if(b[j] == a[aux++]){
                    c++;
                }
            }
            if(c == strlen(b)){
                cont++;
            }
        }
        c =0;
    }
    return cont;
}