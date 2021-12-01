#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float dmaior, dmenor; 

    printf("para sabermos a área de um losango, digite o tamanho do diagonal menor: ");
    scanf("%f",&dmenor);
    printf("digite o tamanho do diagonal maior: ");
    scanf("%f",&dmaior);
    printf("A área do losango é:%.1f",(dmenor*dmaior)/2);
    
    
    
  
  return 0;
}