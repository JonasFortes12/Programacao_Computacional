#include <stdio.h>
#include <stdlib.h>

void categNadador();

void main(){
    int idade, i; 
    char* ctg = (char*) malloc(sizeof(char)*10);
    
    printf("Digite a Idade: ");
    scanf("%d", &idade);

    categNadador(idade, ctg);

    for(i=0 ;i < 10; i++){
        printf("%c", ctg[i]);
        if(i == 9) printf("\n");
    }

free(ctg);
system("pause");    
}

void categNadador(int idade, char* ctg){
    int i;   
    if(idade>=5 && idade<=7){
        char A[] = "Infantil A";
        for(i=0 ;i < sizeof(A)/sizeof(char); i++) ctg[i] = A[i];
    }else if(idade>=8 && idade<=10){
        char A[] = "Infantil B";
        for(i=0 ;i < sizeof(A)/sizeof(char); i++) ctg[i] = A[i];
    }else if(idade>=11 && idade<=13){
        char A[] = "Juvenil A";
        for(i=0 ;i < sizeof(A)/sizeof(char); i++) ctg[i] = A[i];
    }else if(idade>=14 && idade<=17){
        char A[] = "Juvenil B";
        for(i=0 ;i < sizeof(A)/sizeof(char); i++) ctg[i] = A[i];
    }else if(idade>=18){
        char A[] = "Adulto";
        for(i=0 ;i < sizeof(A)/sizeof(char); i++) ctg[i] = A[i];
    }
    return;
}


