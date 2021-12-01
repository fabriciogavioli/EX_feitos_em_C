#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    float l, c, m;

    printf("Digite a largura do cômodo: ");
    scanf("%f",&l);
    printf("Digite o comprimento do cômodo: ");
    scanf("%f",&c);
    m=l*c;
    printf("seu cômodo precisará de%.1f W",m*18);
;
  
  return 0;
}