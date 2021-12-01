#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float n1, n2;

    printf("Digite um número positivo e maior que 0: ");
      scanf("%f",&n1); 
    printf("Digite outro número positivo e maior que 0: ");
      scanf("%f",&n2);               
        printf("\nO %.0f elavado a %.0f é:%.2f",n1,n2,pow(n1,n2));
        printf("\nO %.0f elavado a %.0f é:%.2f",n2,n1,pow(n2,n1));

      
  
  return 0;
}