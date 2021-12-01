#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  int a1, a2, a3;
    printf("Digite  o primeiro ângulo: ");
     scanf("%d",&a1);
    printf("Digite  o segundo ângulo: ");
     scanf("%d",&a2);
    a3=180-a1-a2;
    printf("O terceiro ângulo é:%d",a3);

  
  return 0;
}