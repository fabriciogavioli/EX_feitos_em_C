#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

 float f;
 int i;

 printf("Digite um numero: ");
  scanf("%f",&f);

 i=f;

  printf("parte inteira: %d\nparte fracionaria: %.2f\n", i,f);

if(f>0.5) i++;
  printf("numero arredondado: %d\n",i);

return 0;

}