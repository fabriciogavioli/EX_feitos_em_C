#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    float a, b, hipotenusa;

    printf("Para descobrir a hipotenusa, digite o primeiro cateto: ");
    scanf("%f",&a);
    printf("digite o segundo cateto: ");
    scanf("%f",&b);
    hipotenusa=(a*a)+(b*b);
    printf("o valor da hipotenusa será:%.1f",hipotenusa);
    printf("\no valor final da hipotenusa será:%.1f",sqrt(hipotenusa));
  
  return 0;
}