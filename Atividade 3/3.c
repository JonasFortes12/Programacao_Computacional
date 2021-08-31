#include <stdio.h>
#include <stdlib.h>

void main(){
   int a, m, d, aA, mA, dA;
   int diasA, diasN, diasTot;   
   printf("Digite a sua data de nascimento. Ano: ");
   scanf("%d", &a);
   printf("Mes: ");
   scanf("%d", &m);
   printf("Dia: ");
   scanf("%d", &d);
   printf("Digite a data atual. Ano: ");
   scanf("%d", &aA);
   printf("Mes: ");
   scanf("%d", &mA);
   printf("Dia: ");
   scanf("%d", &dA);
   
   diasA = (aA*365) + (mA*30) + dA;
   diasN = (a*365) + (m*30) + d;
   diasTot = diasA - diasN;

   printf("Voce viveu %d dias\n", diasTot);
   
   
   
   system("pause");
}