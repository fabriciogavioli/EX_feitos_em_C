#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int idade;
    int i, contMaior50, contEntre10e20, contPeso40;
    float altura, peso, somaAltura, mediaAltura, porcentagem;

    contEntre10e20 = 0;
    contMaior50 = 0;
    contPeso40 = 0;

    for (i = 1; i <= 5; i++) {
        printf("PESSOA %d", i);
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite seu peso: ");
        scanf("%f", &peso);


        if (idade > 50) {
            contMaior50++;
        }

        if (idade >= 10 && idade <= 20) {
            somaAltura = somaAltura + altura;
            contEntre10e20++;
        }

        if (peso < 40) {
            contPeso40++;
        }
    }
    mediaAltura = somaAltura / contEntre10e20;
    
    printf("\nTotal de pessoas com mais de 50 anos: %d;", contMaior50);
    printf("\nMedia de altura das pessoas entre 10 e 20 anos: %.2f;", mediaAltura);
    printf("\nPercentual das pessoas com menos de 40 KG: %.1f%%;", porcentagem = contPeso40 * 100 / 5);

    return 0;
}