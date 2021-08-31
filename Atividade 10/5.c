#include <stdio.h>
#include <stdlib.h>


void main(){
  int x, y;

  if(&x > &y) printf("%d\n", &x);
  else printf("%d\n", &y);

system("pause");
}
