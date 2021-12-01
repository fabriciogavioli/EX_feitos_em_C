#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2;
   
    printf("Digite o primeiro número: ");
      scanf("%f",&n1);
    printf("Digite o segundo número: ");
      scanf("%f",&n2);   

    if (n1<n2){ 
      printf("O menor número é %.1f",n1);
    }else{ 
      printf("O menor número é %.1f",n2);
    }

  return 0;
}