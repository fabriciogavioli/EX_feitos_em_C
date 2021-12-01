#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  float raio,pi;

    pi=3.14;
    printf("Digite o valor do raio: ");
     scanf("%f",&raio);
    printf("\nO comprimento será:%.1f",2*pi*raio);
    printf("\nA área será:%.1f",pi*(raio*raio));
    printf("\nO volume será:%.1f",4*pi*(raio*raio*raio)/3); 
  return 0;
}