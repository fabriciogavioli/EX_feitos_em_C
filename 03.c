#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  int num1, num2; 

    printf("digite dois números para dividir, Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d",&num2);
    printf("O resultado é:%d", num1/num2);
    
  
  return 0;
}