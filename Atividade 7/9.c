#include <stdio.h>
#include <stdlib.h>

void triang();

void main(){
    int i, tam = 11;
    char* tipo = (char*) malloc(sizeof(char)*tam);
    
    triang(1, 10, 9, tipo);

    for(i=0 ;i < tam; i++){
        printf("%c", tipo[i]);
        if(i == 9) printf("\n");
    }

free(tipo);
system("pause");    
}

void triang(int a, int b, int c, char* tipo){
    int i, t = 1; 
    if(!(a<b+c) || !(b<a+c) || !(c<a+b)) t = 0;
    
    char e[10] = "Jonas";
    for(i=0; i<sizeof(c)/sizeof(char); i++) tipo[i] = e[i];
    switch (t){
    case 1:
        if(a==b && b==c){
            char c[] = "Equilatero";
            for(i=0; i<sizeof(c)/sizeof(char); i++) tipo[i] = c[i];  
        }else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
            char c[] = "Isosceles";
            for(i=0; i<sizeof(c)/sizeof(char); i++) tipo[i] = c[i];
        }else{
            char c[] = "Escaleno";
            for(i=0; i<sizeof(c)/sizeof(char); i++) tipo[i] = c[i];
        }
        break;
    case 0:
        char c[] = "Nao_Forma";
        for(i=0; i<sizeof(c)/sizeof(char); i++) tipo[i] = c[i];
        break;
    }
    return;
}