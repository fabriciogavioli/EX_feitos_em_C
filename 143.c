#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() { 
  setlocale(LC_ALL, "portuguese");
    float num, quadrado, cubo, raiz;

    do {
        printf("Digite um número: ");
        scanf("%f", &num);
        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raiz = sqrtf(num);

        printf("%.2f ao Quadrado: %.2f. \n", num, quadrado);
        printf("%.2f ao Cubo : %.2f. \n", num, cubo);
        printf("Raiz quadrada de %.2f: %.2f. \n\n", num, raiz);

        printf("Para encerrar digite um número negativo ou 0. Para continuar digite um número qualquer.\n");

    } while (num > 0);


    return 0;

}