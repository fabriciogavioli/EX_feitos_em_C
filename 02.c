#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  int num1, num2, num3; 

    printf("digite três números para multiplicar, Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    printf("Digite o terceiro número: ");
    scanf("%d",&num3);
    printf("O resultado é:%d", num1*num2*num3);
    
  
  return 0;
}