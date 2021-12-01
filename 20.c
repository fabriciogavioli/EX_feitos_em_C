#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  float angulobase, base, hipotenusa;
    printf("Digite o ângulo: ");
     scanf("%f",&angulobase);
    printf("digite a distancia: ");
      scanf("%f",&base);
    hipotenusa=base / cos(angulobase);
    printf("\nA medida para alcançar a escada é:%.2f",hipotenusa);
  
  return 0;
}