#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float altura, bmaior, bmenor; 

    printf("para sabermos a área de trapézio comece digitando o tamanho da base maior: ");
    scanf("%f",&bmaior);
    printf("digite o tamanho da base menor: ");
    scanf("%f",&bmenor);
    printf("digite o tamanho da altura: ");
    scanf("%f",&altura);
    printf("A aréa do trapézio é:%.1f",(bmaior+bmenor)*altura/2);
    
    
  
  return 0;
}