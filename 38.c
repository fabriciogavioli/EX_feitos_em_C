#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float pe, polegada, jarda, milha;

    printf("Digite uma medida em pés: ");
      scanf("%f",&pe); 
      
      polegada=pe*12;
      jarda=pe/3;
      milha=pe/5280;

        printf("\nA medida em pe: %.1f",pe);
        printf("\nA medida em polegada: %.1f",polegada);
        printf("\nA medida em jarda: %.1f",jarda);
        printf("\nA medida em milha: %.1f",milha);

      
  
  return 0;
}