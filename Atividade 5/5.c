#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    int i;
    char usa[] = "Estados_Unidos";
    char esp[] = "Espanha";
    char ru[] = "Reino_Unido";
    char rss[] = "Russia";
    char itl[] = "Italia"; 
    char alm[] = "Alemanha";
    char br[] = "Brasil";
    char pais[16];

    printf("_______Numeros de casos da covid-19 por pais_________\n");
    printf("*digite sem acentos.\n*digite '_' para espaco.\n");
    printf("Digite o nome do pais: ");
    scanf("%s", &pais);

    if(!strcmp(pais, usa)){
        i = 1;
    }else if (!strcmp(pais, esp)){
        i = 2;
    }else if(!strcmp(pais, ru)){
        i = 3;
    }else if(!strcmp(pais, rss)){
        i = 4;
    }else if(!strcmp(pais, itl)){
        i = 5;
    }else if(!strcmp(pais, alm)){
        i = 6;
    }else if(!strcmp(pais, br)){
        i = 7;
    }else{
        i = 0;
    }   
    
    switch (i){
    case 1:
        printf("Casos Confirmados: 1,37 milhoes\n");
        break;
    case 2:
        printf("Casos Confirmados: 227 mil\n");
        break;
    case 3:
    printf("Casos Confirmados: 223 mil\n");
        break;
    case 4:
    printf("Casos Confirmados: 221 mil\n");
        break;
    case 5:
    printf("Casos Confirmados: 219 mil\n");
        break;
    case 6:
    printf("Casos Confirmados: 172 mil\n");
        break;
    case 7:
    printf("Casos Confirmados: 163 mil\n");
        break;
    default:
        printf("*Pais nao encontrado.\n");
        break;
    }

system("pause");
}