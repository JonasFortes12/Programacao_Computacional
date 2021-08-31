#include <stdio.h>
#include <stdlib.h>

void main(){
    int t, **Out, i, j, p, q;
    char **In;

    printf("Digite a dimensao da matriz: ");
    scanf("%d", &t);
    
    In = (char**) malloc(sizeof(char*) * t);
    Out = (int**) malloc(sizeof(int*) * t);

    for(i=0; i<t; i++){
        In[i] = (char*) malloc(sizeof(char) * t);
        Out[i] = (int*) malloc(sizeof(int) * t);
    }
    
    printf("Digite * ou 0___ \n");
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("[%d][%d]: ", i, j);
            scanf(" %c", &In[i][j]);
        }
    }
    
    int  d, dMin = t+1;

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){

            if(In[i][j] == '0') Out[i][j] = 0;

            else{
                
                for(p=0; p<t; p++){
                    for(q=0; q<t; q++){

                        if(In[p][q] == '0'){
                            d = abs(i - p) + abs(j - q);

                            if(d <= dMin){
                                dMin = d;
                                Out[i][j] = dMin;
                            }
                        }
                    }
                }
            dMin = t+1;
            }
        }
    }

    printf("______________%dX%d____________________\n", t,t);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%c ", In[i][j]);
        }
        printf("\n");
    }
    printf("______________%dX%d____________________\n", t,t);
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%d ", Out[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<t; i++){
        free(In[i]);
        free(Out[i]);
    }
    free(In);
    free(Out);

system("pause");    
}