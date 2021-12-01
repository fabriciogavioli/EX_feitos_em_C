#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  float h, he, sm;
    sm=1100;
    printf("Digite as horas trabalhadas: ");
     scanf("%f",&h);
    printf("digite as horas extras trabalhadas: ");
      scanf("%f",&he);
    printf("\nO salario bruto que deve receber é:%.2f",h*(sm/8)+he*(sm/4));
  
  return 0;
}