#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float pesor, pesog1, pesog2;

    printf("Digite o peso do saco de ra��o de gato(Kg): ");
      scanf("%f",&pesor); 
    printf("Digite a quantidade de ra��o diaria para o gato 1(Gramas): ");
      scanf("%f",&pesog1); 
    printf("Digite a quantidade de ra��o diaria para o gato 2(Gramas): ");
      scanf("%f",&pesog2);       
      
      printf("Ap�s 5 dias restar�:%.2f Kg de ra��o",pesor-(pesog1/1000*5)-(pesog2/1000*5));
      
  
  return 0;
}