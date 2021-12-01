#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
  int num, resto, verificacao = 0;
  int i = 1;

    printf("Verificar se um número é primo ou não. \n\n");
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        resto = num % i;

        if (resto == 0) {
            verificacao++;
        }
    }

    if ((verificacao > 2) || (num==4)) {
        printf("Não é primo. \n");
    }
    else {
        printf("É primo. \n");
    }
    
    return 0;
}