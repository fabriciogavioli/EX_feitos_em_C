#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      int datan, ano;

    printf("Digite o ano de nascimento: ");
      scanf("%d",&datan); 
    printf("Digite o ano atual: ");
      scanf("%d",&ano); 

      printf("\nA idade atual é:%d",ano-datan);
      printf("\nA idade em 2050: %d",2050-datan);

      
  
  return 0;
}