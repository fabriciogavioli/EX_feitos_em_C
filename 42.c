#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float cb, ch1, ch2;

    printf("Digite o valor de seu salário depositado na conta bancária: ");
      scanf("%f",&cb); 
    printf("Digite o valor do primeiro cheque: ");
      scanf("%f",&ch1); 
    printf("Digite o valor do segundo cheque: ");
      scanf("%f",&ch2);       
      
      printf("O valor em sua conta bancaria será:%.2f",cb-ch1-ch2-(ch1*0.0038)-(ch2*0.0038));
      
  
  return 0;
}