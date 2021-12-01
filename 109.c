#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int idade, soma_idade;
    int i, cont1, cont2;

    float peso, altura, media_idade, porcentagem;

    for (i = 1; i <= 10; i++) {
        printf("%dº PESSOA", i);
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if (peso > 90 && altura < 1.5) {
            cont1++;
        }
        if ((idade >= 10 && idade <= 30) && (altura > 1.9)) {
            cont2++;
        }

        soma_idade += idade;
    }

    media_idade = soma_idade / 10;
    porcentagem = cont2 * 100 / 10;
    
    printf("\nPessoas com mais de 90Kg e altura menor que 1.5 metros: %d", cont1);
    printf("\nMedia de idade das pessoas: %.2f", media_idade);
    printf("\nPorcentagem de pessoas com idade entre 10 e 30 anos e que medem mais de 1,90 m: %.2f", porcentagem);
    return 0;
}