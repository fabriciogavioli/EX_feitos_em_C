#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float salario,aumento;

    printf("Digite o salario: ");
      scanf("%f",&salario); 
    printf("Digite a porcentagem do aumento: ");
      scanf("%f",&aumento);  
        printf("Após o aumento seu salário será: %.1f",salario+(salario*(aumento/100)));
  
  return 0;
}