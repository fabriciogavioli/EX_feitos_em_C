#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float ht, sm, s;

    printf("Digite o n�mero de horas trabalhadas: ");
      scanf("%f",&ht); 
    printf("Digite o valor do sal�rio m�nimo: ");
      scanf("%f",&sm); 
      s=sm*(ht/2);
      
      printf("Voc� ir� receber:%.1f",s-(s*0.03));
      
  
  return 0;
}