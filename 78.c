#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2;
   
    printf("Digite um número: ");
      scanf("%f",&n1);
    printf("Digite outro número: ");
      scanf("%f",&n2);

      if (n1>n2){  
        printf("%.1f é o maior número",n1);
    }else{
        printf("%.1f é o maior número",n2);
    }
  return 0;
}