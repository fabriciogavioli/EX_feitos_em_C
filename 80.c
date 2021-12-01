#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2, n3, n4;
   
    printf("\nDigite três números em ordem crescente e o quarto sem padrão\nDigite o primeiro número: ");
      scanf("%f",&n1);
    printf("Digite o segundo número: ");
      scanf("%f",&n2);
    printf("Digite o terceiro número: ");
      scanf("%f",&n3);      
    printf("Digite o quarto número: ");
      scanf("%f",&n4);

      if (n4>n3){  
        printf("A ordem descrescente é %.0f,%.0f,%.0f,%.0f",n4,n3,n2,n1);
    } if (n4<n1){  
      printf("A ordem descrescente é %.0f,%.0f,%.0f,%.0f",n3,n2,n1,n4);
    } if (n4>n2 && n4<n3){  
      printf("A ordem descrescente é %.0f,%.0f,%.0f,%.0f",n3,n4,n2,n1);
    } if (n4>n1 && n4<n2){  
      printf("A ordem descrescente é %.0f,%.0f,%.0f,%.0f",n3,n2,n4,n1);
    }  
  return 0;
}