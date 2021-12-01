#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float peso; 

    printf("digite o seu peso atual em quilos: ");
    scanf("%f",&peso);
    printf("se você engordar 20 por cento, terá:%.1f quilos\n", peso+(peso*0.2));
    printf("se você emagrecer 15 por cento, terá:%.1f quilos\n", peso-(peso*0.15));
    
  
  return 0;
}