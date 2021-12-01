#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2, n3;
   
    printf("Digite o primeiro número: ");
      scanf("%f",&n1);
    printf("Digite o segundo número: ");
      scanf("%f",&n2);   
    printf("Digite o terceiro número: ");
      scanf("%f",&n3);       

    if (n1>n2 && n1>n3){ 
      printf("O maior número é %.1f",n1);
    }if (n2>n1 && n2>n3){ 
      printf("O Maior número é %.1f",n2);
    }if (n3>n1 && n3>n2){ 
      printf("O maior número %.1f",n3);
    }

  return 0;
}