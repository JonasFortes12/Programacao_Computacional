#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct horario{
        int hora;
        int minuto;
        int segundo;
    } Horario;
    typedef struct data{
        int dia;
        int mes;
        int ano;
    } Data;
    typedef struct compromisso{
        Data data;
        Horario horario;
        char desc[50];
    } Compromisso;

void main(){
    Compromisso c1, c2;

    c1.data.dia = 4;
    c1.data.mes = 7;
    c1.data.ano = 2021;
    c1.horario.hora = 16;
    c1.horario.minuto = c1.horario.segundo = 0;
    strcpy(c1.desc,"Evento do dia da independência");

    c2.data.dia = 25;
    c2.data.mes = 12;
    c2.data.ano = 2021;
    c2.horario.hora = 8;
    c2.horario.minuto = c1.horario.segundo = 0;
    strcpy(c2.desc,"Branch de manhã de natal");

    printf("\n=== Compromisso 1 ===\n");
    printf("Horario: %d:%d:%d\n",c1.horario.hora, c1.horario.minuto, c1.horario.segundo);
	printf("Data: %d / %d / %d\n", c1.data.dia, c1.data.mes, c1.data.ano);
	printf("Descricao: %s\n",c1.desc);
	printf("----------------------------\n");
    printf("\n=== Compromisso 2 ===\n");
    printf("Horario: %d:%d:%d\n",c2.horario.hora, c2.horario.minuto, c2.horario.segundo);
	printf("Data: %d / %d / %d\n", c2.data.dia, c2.data.mes, c2.data.ano);
	printf("Descricao: %s\n",c2.desc);
	printf("----------------------------\n");


system("pause");
}