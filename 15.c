#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    float salario, conta1, conta2;

    printf("Digite o salario: ");
    scanf("%f",&salario);
    printf("digite o valor da primeira conta atrasada : ");
    scanf("%f",&conta1);
    printf("Digite o valor da segunda conta atrasada: ");
    scanf("%f",&conta2);
    printf("irá sobrar %.2f reais do salário.",salario-(conta1+(conta1*0.02))-(conta2+(conta2*0.02)));
  
  return 0;
}