#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float ht, sm, s;

    printf("Digite o número de horas trabalhadas: ");
      scanf("%f",&ht); 
    printf("Digite o valor do salário mínimo: ");
      scanf("%f",&sm); 
      s=sm*(ht/2);
      
      printf("Você irá receber:%.1f",s-(s*0.03));
      
  
  return 0;
}