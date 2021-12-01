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

      if (n1>n2 && n2>n3){  
        printf("A ordem crescente é %.0f,%.0f,%.0f",n3,n2,n1);
    } if (n1>n3 && n3>n2){
        printf("A ordem crescente é %.0f,%.0f,%.0f",n2,n3,n1);
    } if (n2>n1 && n1>n3){  
        printf("A ordem crescente é %.0f,%.0f,%.0f",n3,n1,n2);
    } if (n2>n3 && n3>n1){
        printf("A ordem crescente é %.0f,%.0f,%.0f",n1,n3,n2);
    } if (n3>n1 && n1>n2){  
        printf("A ordem crescente é %.0f,%.0f,%.0f",n2,n1,n3);
    } if (n3>n2 && n2>n1){
        printf("A ordem crescente é %.0f,%.0f,%.0f",n1,n2,n3);
    }
  return 0;
}