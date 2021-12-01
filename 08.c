#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  float peso; 

    printf("digite o seu peso atual em quilos para converter em gramas: ");
    scanf("%f",&peso);
    printf("você possui:%.1f gramas", peso*1000);
    
    
  
  return 0;
}