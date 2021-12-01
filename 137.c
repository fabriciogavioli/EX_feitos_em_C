#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
char sexo;

    int i, cont_m, cont_f;
    int num_peca, num_operario, maior_num;
    int total_pecaH, total_pecaF, total_peca;

    float maior_salario;
    float medPeca_homem, medPeca_mulher;
    float salario_minimo = 450, sal_operario, bonus, folha_de_pagamento = 0;


    for (i = 1; i <= 15; i++) {
        printf("OPERARIO %d \n", i);
        printf("Digite seu sexo: ");
        scanf(" %c", &sexo);

        if (sexo == 'm') {
            printf("Digite o número do operário: ");
            scanf("%d", &num_operario);
            printf("Digite o número de peças fabricadas: ");
            scanf("%d", &num_peca);
            printf("Nº Operário: %d \n", num_operario);

            if (num_peca <= 30) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 30 && num_peca <= 50) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 50) {
                bonus = (num_peca - 30) * (0.05 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);
            }
            total_pecaH = total_pecaH + num_peca;

        } else if (sexo == 'f') {
            printf("Digite o número do operário: ");
            scanf("%d", &num_operario);
            printf("Digite o número de peças fabricadas: ");
            scanf("%d", &num_peca);
            
            if (num_peca <= 30) {
                sal_operario = salario_minimo;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 30 && num_peca < 50) {
                bonus = (num_peca - 30) * (0.03 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);

            } else if (num_peca > 50) {
                bonus = (num_peca - 30) * (0.05 * 450);
                sal_operario = salario_minimo + bonus;
                printf("Seu salário será de R$ %.2f. \n", sal_operario);
            }
            total_pecaH = total_pecaH + num_peca;
        }

        maior_salario = sal_operario;
        maior_num = num_operario;

        if (sal_operario > maior_salario) {
            maior_salario = maior_salario;
            maior_num = num_operario;
        }

        total_pecaF = total_pecaH + num_peca;
        folha_de_pagamento = folha_de_pagamento + sal_operario;

        total_peca = total_pecaF + total_pecaH;
        medPeca_homem = total_peca / total_pecaH;
        medPeca_mulher = total_peca / total_pecaF;

    }

    printf("FOLHA DE PAGAMENTO \n");
    printf("Total folha de pagamento: R$ %.2f. \n", folha_de_pagamento);

    printf("Média de peças fabricada por mulheres: %.2f \n", medPeca_mulher);
    printf("Média de peças fabricada por homem: %.2f \n", medPeca_homem);

    printf("O funcionário de número %d recebe o maior salário, sendo de R$ %.2f. \n", maior_num, maior_salario);

    return 0;
}