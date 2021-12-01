#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float salario, total; 

    printf("digite o salario fixo: ");
    scanf("%f",&salario);
    printf("Digite o valor recebido no mês: ");
    scanf("%f",&total);
    printf("sua comissão foi:%.2f \n", total-salario);
    printf("você vendeu:%.2f", (total-salario)*25);
    
  
  return 0;
}