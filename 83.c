#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int main() {
  float n1, n2, opc;

    printf("Digite 1 para somar dois números\nDigite 2 para a raiz quadrada de um número\nDigite qual sua opção: ");
      scanf("%f",&opc);

      if (opc==1){
        printf("Digite o primeiro número: ");
          scanf("%f",&n1);
        printf("Digite o segundo número: ");
          scanf("%f",&n2);       
            printf("A soma dos dois números é:%.1f",n1+n2);
      }else{  
        printf("Digite o número: ");
          scanf("%f",&n1);
            printf("O resultado da raiz quadrada é:%.1f",sqrt(n1));
      }
  return 0;
}