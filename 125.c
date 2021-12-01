#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int i, tipo, codigo;
    float vlr_investido, juros, rendimento;
    i = 1;
    do {
        printf("%dº Cliente \n", i);
        printf("Digite seu codigo: ");
        scanf("%d", &codigo);
        printf("Digite o valor do investimento: ");
        scanf("%f", &vlr_investido);
        printf("Tipos de investimentos \n");
        printf("1. Poupança \n");
        printf("2. Poupança Plus \n");
        printf("3. Fundos de renda fixa \n");
        printf("Digite a opção desejada ou 0  para sair: ");
        scanf("%d", &tipo);
        if (tipo == 0) {
            break;
        }

        switch (tipo) {
            case 1:
                rendimento = (vlr_investido / 100) * 1.5;
                break;
            case 2:;
                rendimento = (vlr_investido / 100) * 2;
                break;
            case 3:
                rendimento = (vlr_investido / 100) * 4;
                break;
        }
        printf("TOTAL \n");
        printf("Valor investido: R$ %.2f. \n", vlr_investido);
        printf("Valor do rendimento mensal: R$ %.2f. \n", rendimento);
        i++;
    } while (tipo != 0);

    return 0;
}
