#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float n;

    printf("Digite um número positivo e maior que 0: ");
      scanf("%f",&n);           
        printf("\nO número ao quadrado:%.2f",n*n);
        printf("\nO número ao cubo:%.2f",n*n*n);
        printf("\nRaiz quadrada do número:%.2f",sqrt(n));
        printf("\nRaiz cubica do número:%.2f",cbrt(n));
      
  
  return 0;
}