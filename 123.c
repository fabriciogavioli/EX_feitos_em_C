#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

  int opcao, meses;
  float salario, n_salario, ferias, decimo_terceiro;

    do {
        printf("Menu de opções \n");
        printf("\t 1. Novo salário \n\t 2. Férias \n\t 3. 13º Salário \n\t 4. Sair \n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 4) {
            break;
        }

        switch (opcao) {
            case 1:
                printf("Novo salário \n");
                printf("Digite seu salário atual: ");
                scanf("%f", &salario);

                if (salario < 210) {
                    n_salario = salario * 1.15; 
                } else if (salario >= 210 && salario <= 600) {
                    n_salario = salario * 1.10; 
                } else if (salario > 600) {
                    n_salario = salario * 1.05;
                }

                printf("Seu novo salário sera de R$ %.2f. \n \n", n_salario);
                break;

            case 2:
                printf("Férias \n");
                printf("Digite seu salário atual: ");
                scanf("%f", &salario);
                ferias = salario + (salario / 3);
                printf("Você receberá R$ %.2f de férias: ",ferias);
                break;

            case 3:
                printf("13º Salário \n");
                printf("Digite seu salário atual: ");
                scanf("%f", &salario);
                do {
                    printf("Digite a quantidade de meses trabalhados (No máximo 12): ");
                    scanf("%d", &meses);

                    decimo_terceiro = salario * meses / 12;

                    printf("Você receberá R$ %.2f de 13º. \n\n", decimo_terceiro);
                } while (meses > 12);
                break;
                
            default: 
                printf("Opção inválida. \n\n");
        }
    } while (opcao != 4);



    return 0;
}
