#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int canal, quant_pessoas;
    int cont4, cont5, cont7, cont12;
    int soma4, soma5, soma7, soma12, soma_total;
    float porcentagem4, porcentagem5, porcentagem7, porcentagem12;

    cont4 = 0;
    cont5 = 0;
    cont7 = 0;
    cont12 = 0;

    soma4 = 0;
    soma5 = 0;
    soma7 = 0;
    soma12 = 0;
    soma_total = 0;

    do {
        printf("\nDigite o número do canal(0 para terminar): ");
        scanf("%d", &canal);

        switch (canal) {
            case 4:
                cont4++;
                printf("Digite a quantidade de pessoas que esta assistindo: ");
                scanf("%d", &quant_pessoas);
                soma4 += quant_pessoas;
                soma_total += quant_pessoas;
                break;

            case 5:
                cont5++;
                printf("Digite a quantidade de pessoas que esta assistindo: ");
                scanf("%d", &quant_pessoas);
                soma5 += quant_pessoas;
                soma_total += quant_pessoas;
                break;

            case 7:
                cont7++;
                printf("Digite a quantidade de pessoas que esta assistindo: ");
                scanf("%d", &quant_pessoas);
                soma7 += quant_pessoas;
                soma_total += quant_pessoas;
                break;

            case 12:
                cont12++;
                printf("Digite a quantidade de pessoas que esta assistindo: ");
                scanf("%d", &quant_pessoas);
                soma12 += quant_pessoas;
                soma_total += quant_pessoas;
                break;

            default:
                printf("Opção inválida. \n");
                break;
        }


    } while (canal != 0);

    if (cont4 > 0) {
        porcentagem4 = soma4 * 100 / soma_total;
        printf("Porcentagem de pessoas que assistem o canaal 4: %.1f\n", porcentagem4);
    } else {
        printf("Nehuma pessoa assiste o canal 4. \n");
    }

    if (cont5 > 0) {
        porcentagem5 = soma5 * 100 / soma_total;
        printf("Porcentagem de pessoas que assistem o canaal 5: %.1f \n", porcentagem5);
    } else {
        printf("Nehuma pessoa assiste o canal 5. \n");
    }

    if (cont7 > 0) {
        porcentagem7 = soma7 * 100 / soma_total;
        printf("Porcentagem de pessoas que assistem o canaal 7: %.1f \n", porcentagem7);
    } else {
        printf("Nehuma pessoa assiste o canal 7. \n");
    }
    
    if (cont12 > 0) {
        porcentagem12 = soma12 * 100 / soma_total;
        printf("Porcentagem de pessoas que assistem o canaal 12: %.1f \n", porcentagem12);
    } else {
        printf("Nehuma pessoa assiste o canal 12. \n");
    }
    
    return 0;
}