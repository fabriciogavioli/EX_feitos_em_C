#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float salario;

    printf("Digite o salario: ");
      scanf("%f",&salario); 
        printf("Após o aumento seu salário será: %.1f",salario+(salario*0.25));
  
  return 0;
}