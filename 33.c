#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float deposito, juros;

    printf("Digite o valor do depósito: ");
      scanf("%f",&deposito); 
    printf("Digite a porcentagem de juros: ");
      scanf("%f",&juros);          
        printf("Você irá receber: %.1f",deposito+(deposito*(juros/100)));
  
  return 0;
}