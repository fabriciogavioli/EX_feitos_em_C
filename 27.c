#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float n1, n2, n3;

    printf("Digite a primeira nota: ");
      scanf("%f",&n1);
    printf("Digite a segunda nota: ");
      scanf("%f",&n2);
    printf("Digite a terceira nota: ");
      scanf("%f",&n3);
       printf("A média é:%.1f",(n1+n2+n3)/3);
  
  return 0;
}