#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float raio;

    printf("Para saber a área de um circulo digite o valor do raio: ");
      scanf("%f",&raio);           
        printf("A área do circulo será: %.2f",3.14*(raio*raio));
  
  return 0;
}