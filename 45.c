#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float ang, alt, es, r;

    printf("Digite a medida do �ngulo: ");
      scanf("%f",&ang); 
    printf("Digite a altura da parede onde est� a ponta da escada: ");
      scanf("%f",&alt);     

    r=ang*3.14/180;
    es=alt/r;  
      
      printf("a medida da escada � %.1f",es);
      
  
  return 0;
}