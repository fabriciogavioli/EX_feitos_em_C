#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float num1, num2; 

    printf("digite duas notas para calcular a média, sendo a primeria peso 2 e segunda peso 3, Digite a primeira nota: ");
    scanf("%f",&num1);
    printf("Digite a segunda nota: ");
    scanf("%f",&num2);
    printf("O resultado é:%.1f", (num1-(num1*0.6))+(num2-(num2*0.4)));
    
  
  return 0;
}