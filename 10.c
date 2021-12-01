#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float lado; 

    printf("para sabermos a área de um quadrado, digite o tamanho do seu lado: ");
    scanf("%f",&lado);
    printf("A área do quadrado é:%.1f", lado*lado);
    
    
    
  
  return 0;
}