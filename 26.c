#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      int n1, n2, n3, n4;

    printf("Digite o primeiro número: ");
      scanf("%d",&n1);
    printf("Digite o segundo número: ");
      scanf("%d",&n2);
    printf("Digite o terceiro número: ");
      scanf("%d",&n3);
    printf("Digite o quarto número: ");
      scanf("%d",&n4);   
    printf("A soma dos quatros números é:%d",n1+n2+n3+n4);
  
  return 0;
}