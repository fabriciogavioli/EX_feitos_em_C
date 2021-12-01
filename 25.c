#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    int hr, min;

    printf("Digite um número em horas: ");
      scanf("%d",&hr);
    printf("digite um número em minutos: ");
      scanf("%d",&min);
    printf("\nA hora em minutos:%d",hr*60);
    printf("\nOs minutos totais:%d",hr*60+min);
    printf("\nO total em segundos:%d",60*(hr*60)+min*60);
    
  
  return 0;
}