#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int num, maior, menor;
    maior = 0;
    menor = 999999;
    
    printf("Digite 0 para sair. \n\n");
    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        if (num != 0) {
            if (num < 0) {
                printf("Número inválido. \n");
            }
            
            if (num > maior) {
                maior = num;
            }

            if (num < menor) {
                menor = num;
            }
        }

    } while (num != 0);
    printf("Maior número digitado: %d \n", maior);
    printf("Menor número digitado: %d \n", menor);

    return 0;
}