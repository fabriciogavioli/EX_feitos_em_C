#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  float a;
    printf("Digite  o valor em R$: ");
     scanf("%f",&a);
    printf("\nO valor em dolar é:%.2f",a/1.8);
    printf("\nO valor em marco alemão é:%.2f",a/2);
    printf("\nO valor em Libra esterlina é:%.2f",a/3.57);

  
  return 0;
}