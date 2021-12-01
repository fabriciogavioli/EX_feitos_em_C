#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

 int idade, i;
    int cont1, cont2, cont3, cont4;

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;

    float peso, media1, media2, media3, media4;
    float soma1, soma2, soma3, soma4;

    soma1 = 0;
    soma2 = 0;
    soma3 = 0;
    soma4 = 0;

    for (i = 1; i <= 15; i++) {
        printf("%d° Pessoa \n", i);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if (idade > 1 && idade <= 10) {
            soma1 += peso;
            cont1++;
        }
        if (idade > 11 && idade <= 20) {
            soma2 += peso;
            cont2++;
        }
        if (idade > 21 && idade <= 30) {
            soma3 += peso;
            cont3++;
        }
        if (idade > 31) {
            soma4 += peso;
            cont4++;
        }
    }

    media1 = soma1 / cont1;
    media2 = soma2 / cont2;
    media3 = soma3 / cont3;
    media4 = soma4 / cont4;

    printf("MEDIA DE PESOS \n");

    if (cont1 > 0) {
        printf("\nEntre 1 e 10 anos: %.2f kg.", media1);
    } else {
        printf("\nNenhuma pessoa com idade entre 1 e 10 anos.");
    }

    if (cont2 > 0) {
        printf("\nEntre 11 e 20 anos: %.2f kg.", media2);
    } else {
        printf("\nNenhuma pessoa com idade entre 11 e 20 anos.");
    }

    if (cont3 > 0) {
        printf("\nEntre 21 e 30 anos: %.2f kg.", media3);
    } else {
        printf("\nNenhuma pessoa com idade entre 21 e 30 anos.");
    }

    if (cont4 > 0) {
        printf("\nMais de 31 anos: %.2f kg.", media4);
    } else {
        printf("\nNenhuma pessoa com mais de 31 anos.");
    }

    return 0;
}
