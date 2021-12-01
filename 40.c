#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float fabrica, lucro, imposto;

    printf("Digite o preço da fábrica: ");
      scanf("%f",&fabrica); 
    printf("Digite o percentual de lucro do distribuidor: ");
      scanf("%f",&lucro); 
    printf("Digite o percentual dos impostos: ");
      scanf("%f",&imposto);       

      printf("\nO valor correspondente ao lucro do distribuidor é: %.1f",(fabrica*lucro/100)+fabrica-fabrica);
      printf("\nO valor correspondente aos impostos é: %.1f",(fabrica*imposto/100)+fabrica-fabrica);
      printf("\no preço final do veículo é: %.1f",fabrica+(fabrica*lucro/100)+(fabrica*imposto/100));

      
  
  return 0;
}