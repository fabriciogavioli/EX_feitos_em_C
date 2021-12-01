#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float salario; 

    printf("Digite seu salário: ");
    scanf("%f",&salario);
    printf("Seu salário é: %.2f vezes maior que o salário mínimo(baseado em R$1.100,00)", salario/1100);
    
    
    
  
  return 0;
}