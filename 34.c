#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float base, altura;

    printf("Para saber a área do triangulo digite o valor da base: ");
      scanf("%f",&base); 
    printf("Digite o valor da altura: ");
      scanf("%f",&altura);          
        printf("A área do triangulo será: %.1f",(base*altura)/2);
  
  return 0;
}