#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float x, y, z;

    printf("Digite a altura em que deseja pregar o quadro: ");
      scanf("%f",&x); 
    printf("Digite o tamanho da escada: ");
      scanf("%f",&z);     

      y=(z*z)-(x*x);
      y=sqrt(y);
      
      printf("aque dist�ncia a escada deve estar da parede � %.1f",y);
      
  
  return 0;
}