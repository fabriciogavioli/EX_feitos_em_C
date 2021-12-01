#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    float c, f;

    printf("Digite a temperatura em celsius: ");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("sua temperatura em fahrenheit será:%.1f",f);
;
  
  return 0;
}