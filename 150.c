#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
 float preco_unitario, seguro, valor_transporte, preco_final;
    float total_impostos = 0, imposto;

    int pais_origem;
    int i = 1, contSeguro = 0;
    char meio_transporte, carga_perigosa;

    do {
        printf("%dº Produto \n", i);
        printf("Digite o preço unítario do produto: ");
        scanf("%f", &preco_unitario);
        printf("País de origem (1. EUA | 2.México | 3. Outros): ");
        scanf("%d", &pais_origem);
        printf("Meio transporte (T. Terrestre | F. Fluvial | A. Aéreo): ");
        scanf(" %c", &meio_transporte);

        if (preco_unitario <= 100) {
            imposto = preco_unitario * 0.05;
        } else if (preco_unitario > 100) {
            imposto = preco_unitario * 0.10;
        }

        total_impostos = total_impostos + imposto;

        printf("A carga é perigosa (S. Sim | N. Não): ");
        scanf(" %c", &carga_perigosa);

        switch (carga_perigosa) {
            case 's':
                if (pais_origem == 1) {
                    valor_transporte = 50;
                    preco_final = preco_unitario + valor_transporte;
                }
                else if (pais_origem == 2) {
                    valor_transporte = 21;
                    preco_final = preco_unitario + valor_transporte;
                }
                else if (pais_origem == 3) {
                    valor_transporte = 24;
                    preco_final = preco_unitario + valor_transporte;
                }
                break;

            case 'n':
                if (pais_origem == 1) {
                    valor_transporte = 12;
                    preco_final = preco_unitario + valor_transporte;
                }
                else if (pais_origem == 2) {
                    valor_transporte = 21;
                    preco_final = preco_unitario + valor_transporte;
                }
                else if (pais_origem == 3) {
                    valor_transporte = 60;
                    preco_final = preco_unitario + valor_transporte;
                }
                break;
        }

        if (pais_origem == 2 || meio_transporte == 'a') {
            seguro = preco_unitario / 2;
            preco_final = preco_final + seguro;
            contSeguro++;
        }
        
        printf("\n ");
        printf("DADOS SOBRE O PRODUTO \n");
        printf("Preço unitarío: R$ %.2f \n",preco_unitario);
        printf("Total de impostos: R$ %.2f \n",imposto);
        printf("Valor do transporte: RS %.2f \n",valor_transporte);
        if (contSeguro > 0) {
            printf("Valor do seguro: R$ %.2f \n",seguro);
        }else {
            printf("Produto não necessita de seguro. \n");
        }
        printf("Preço total: R$ %.2f. \n",preco_final);

        i++;
    } while (preco_unitario > 0);

    printf("Total impostos: R$ %.2f. \n",total_impostos);
    return 0;
}