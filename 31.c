#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float salario;

    printf("Digite seu salario base: ");
      scanf("%f",&salario);   
        printf("Você irá receber: %.1f",salario+(salario*0.05)-(salario*0.07));
  
  return 0;
}