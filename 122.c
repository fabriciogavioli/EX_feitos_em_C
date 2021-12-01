#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
    int i, idade;
    float altura, peso, soma_altura, media_altura;
    i = 0;

do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        if (idade <= 0) {
            break;
        }
        
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        if (idade > 50) {
            soma_altura += altura;
            i++;
        }

    } while (idade > 0);

    if (i > 0) {
        media_altura = soma_altura / i;
        printf("A média de altura das pessoas com mais de 50 é %.2f. \n", media_altura);
    } else {
        printf("Nenhuma idade digitada. \n");
    }

    return 0;
}


