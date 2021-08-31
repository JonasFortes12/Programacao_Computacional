#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool existe(char* palavra, char* frase){
    int teste[ strlen(palavra) ];
    int aux;
    bool ok;


    if( strlen(palavra) > strlen(frase) ){
        return false;
    }

    if( strcmp(palavra,frase) ==0 ){
        return true;
    }

    for(int i=0; i <= strlen(frase) - strlen(palavra); i++){
        if(frase[i]==palavra[0]){

            for(int k=0;k<strlen(palavra);k++)
                teste[k]=0;

            aux=i;
            for(int j=0;j<strlen(palavra);j++){
                if(palavra[j]==frase[aux]){
                    teste[j]=1;
                    aux++;
                }
            }

            ok=true;
            for(int m = 0;m < strlen(palavra) ; m++){
                if(teste[m]==0){
                    ok=false;
                }
            }

            if( ok ){
                return true;
            }
        }
    }
    return false;
}

int main(){
    char frase[20];
    char palavra[5];

    printf ("Digite a frase: ");
    scanf ("%s", &frase);
    printf ("Digite a palavra: ");
    scanf ("%s", &palavra);
    
    if(existe(palavra,frase)){
        printf("\nA palavra existe");
    }else{
        printf("\nA palavra nao existe");
    }
    return 0;
}