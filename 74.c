#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

float preco, aumento, imposto;
    int categoria;
    char refrigeracao;

    printf("Classifica��o de produtos \n \n");
    printf("Digite a categoria do produto,sendo: \n"
            "1. Limpeza \n"
            "2. Alimenta��o \n"
            "3. Vestu�rio \n");
    printf("Digite a categoria desejada: ");
    scanf("%d", &categoria);
    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);
    printf("O produto precisa de refrigera��O? \n"
            "S - Sim \n"
            "N - N�o \n");
    printf("Digite a op��o desejada: ");
    scanf(" %c", &refrigeracao);

    switch (refrigeracao) {
        case 'S': case 's':
            if (preco <= 25) {
                if (categoria == 1) {
                    printf("\nEsse produto necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 5%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.05);
                } else if (categoria == 2) {
                    printf("\nEsse produto necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 8%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.08);
                    printf("\nVoc� pagar� 5%% de impostos. ");
                    printf("\nPagar� R$ %.2f", imposto = preco * 0.05);
                    printf("\nO novo valor do produto R$ %.2f.", preco = preco + imposto);
                }
            }
            if (categoria == 3) {
                printf("\nEsse produto necessita de rerigera��o ");
                printf("\nO porduto sofrer� um aumento de 10%%. ");
                printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.10);
            }

            if (categoria != 2) {
                printf("\nVoc� pagar� 8%% de impostos. ");
                printf("\nPagar� R$ %.2f", imposto = preco * 0.08);
                printf("\nO novo valor do produto R$ %.2f", preco = preco + imposto);
            }

            if (preco > 25) {
                if (categoria == 1)
                    printf("Esse produto necessita de rerigera��o ");
                printf("\nO porduto sofrer� um aumento de 12%%. ");
                printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.12);
            } else if (categoria == 2) {
                printf("\nEsse produto necessita de rerigera��o ");
                printf("\nO produto sofrer� um aumento de 15%%. ");
                printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.15);
            }

            if (categoria == 3) {
                printf("\nEsse produto necessita de rerigera��o ");
                printf("\nO produto sofrer� um aumento de 18%%. ");
                printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.18);
            }

            if (categoria != 2) {
                printf("\nVoc� pagar� 8%% de impostos. ");
                printf("\nPagar� R$ %.2f", imposto = preco * 0.08);
                printf("\nO novo valor do produto R$ %.2f", preco = preco + imposto);
            }
            break;

        case 'N': case 'n':
            if (preco <= 25) {
                if (categoria == 1) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 5%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.05);
                } else if (categoria == 2) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 8%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.08);
                }

                if (categoria == 3) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 10%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.10);
                }
            }
            if (preco > 25) {
                if (categoria == 1) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 12%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.12);
                } else if (categoria == 2) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 15%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.15);
                }

                if (categoria == 3) {
                    printf("\nEsse produto n�o necessita de rerigera��o ");
                    printf("\nO produto sofrer� um aumento de 18%%. ");
                    printf("\nO novo pre�o ser� de R$ %.2f", preco = preco * 1.18);
                }
                if (categoria != 2) {
                    printf("\nVoc� pagar� 8%% de impostos. ");
                    printf("\nPagar� R$ %.2f", imposto = preco * 0.08);
                    printf("\nO novo valor do produto R$ %.2f", preco = preco + imposto);
                }
            }
            break;
    }
    return 0;
}