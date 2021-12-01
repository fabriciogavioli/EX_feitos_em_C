#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
   int parcela;

    float vlr_veiculo, preco_prazo, preco_avista, juros;
    juros = 3;

    printf("Digite o valor do veículo: ");
    scanf("%f", &vlr_veiculo);

    preco_avista = vlr_veiculo - (vlr_veiculo * 0.2);
    printf("\nPreco a vista do veiculo R$ %.2f", preco_avista);

    //Calculo das parcelas
    for (parcela = 6; parcela <= 60; parcela += 6) {
        printf("\n%d Parcelas ", parcela);
        preco_prazo = vlr_veiculo + (vlr_veiculo * juros / 100);
        printf("\nTotal: R$ %.2f", preco_prazo);
        juros += 3;
    }

    return 0;
}