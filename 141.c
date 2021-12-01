#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
  float area, altura, base;


    do {
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite a base: ");
        scanf("%f", &base);

        if (base <= 0 || altura <= 0) {
            printf("ENTRADA INVALIDA \n");
        }
        
    } while (altura <= 0 || base <= 0);

    area = (altura * base) / 2;
    printf("A area do tirangulo é de: %.2f \n", area);

    return 0;
}