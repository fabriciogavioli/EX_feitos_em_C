#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float qw, sm, total;

    printf("Digite a quantidade de quilowatts consumida: ");
      scanf("%f",&qw); 
    printf("Digite o valor do sal�rio m�nimo : ");
      scanf("%f",&sm);  

    total=qw*(sm/5);    
      
      printf("\ncada quilowatts custa %.1f",sm/5);
      printf("\nO valor a ser pago ser� %.1f",total);
      printf("\nO valor a ser pago com 15 por cento de desconto ser�:%.1f",total-(total*0.15));            
      
  
  return 0;
}