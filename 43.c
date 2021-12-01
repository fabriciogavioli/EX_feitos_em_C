#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float pesor, pesog1, pesog2;

    printf("Digite o peso do saco de ração de gato(Kg): ");
      scanf("%f",&pesor); 
    printf("Digite a quantidade de ração diaria para o gato 1(Gramas): ");
      scanf("%f",&pesog1); 
    printf("Digite a quantidade de ração diaria para o gato 2(Gramas): ");
      scanf("%f",&pesog2);       
      
      printf("Após 5 dias restará:%.2f Kg de ração",pesor-(pesog1/1000*5)-(pesog2/1000*5));
      
  
  return 0;
}