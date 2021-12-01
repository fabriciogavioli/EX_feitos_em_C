#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    char pagamento;
    int i;
    float parcelas, valor, somaP, somaV, soma_total, total_1parcela;
    
    somaP = 0;
    somaV = 0;
    soma_total = 0;

    for (i = 1; i <= 2; i++) {
        printf("%dº TRANSAÇÃO ", i);
        printf("\nDigite o valor da transação: ");
        scanf("%f", &valor);
        printf("Digite o valor (V. Vista | P. Prazo): ");
        scanf(" %c", &pagamento);
        
        switch (pagamento) {
            case 'v':
                somaV = somaV+valor;
                break;

            case 'p':
                somaP = somaP+valor;
                break;
        }

        soma_total += valor;
    }

    total_1parcela = somaP / 3;
    
    printf("\n TOTAL \n");
    printf("\ntotal das compras a vista: R$ %.2f.", somaV);
    printf("\nTotal das compras a prazo: R$ %.2f.", somaP);
    printf("\nTotal das compras efetuadas: R$ %.2f", soma_total);
    printf("\nTotal das 1º Parcelas em 3 vezes: R$ %.2f", total_1parcela);

    return 0;
}