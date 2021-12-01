#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float salario;

    printf("Digite seu salario base: ");
      scanf("%f",&salario);   
        printf("Você irá receber: %.1f",(salario+50)-(salario*0.1));
  
  return 0;
}