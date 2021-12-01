#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float num1; 

    printf("digite o valor do produto que irá ter dez por cento de desconto: ");
    scanf("%f",&num1);
    printf("O valor após o desconto é:%.2f", num1-(num1*0.1));
    
  
  return 0;
}