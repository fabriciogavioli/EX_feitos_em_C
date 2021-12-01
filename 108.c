#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
char cabelo, olhos;

    int idade, soma_idade;
    int i, cont1, cont2, cont3, cont4;

    float media_idade, per_olhoAzul, per_Ruiva;
    float peso, altura;

    cont1 = 0; //a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
    cont2 = 0; //a média das idades das pessoas com altura inferior a 1,50 m;
    cont3 = 0; //a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
    cont4 = 0; //a quantidade de pessoas ruivas e que não possuem olhos azuis. 

    for (i = 1; i <= 6; i++) {
        printf("\nPESSOA %d ", i);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite sua altura: ");
        scanf("%f", &altura);
        printf("Digite a cor dos olhos (A. Azul | P. Preto | V. Verde): ");
        scanf(" %c", &olhos);
        printf("Digite a cor dos cabelos (P. Preto | C. Castanho | L. Loura | R. Ruivo): ");
        scanf(" %c", &cabelo);

        if (idade > 50 && peso < 60) {
            cont1++;
        }

        if (altura < 1.5) {
            soma_idade = soma_idade + idade;
            cont2++;
        }

        if (olhos == 'A') {
            cont3++;
        }

        if (cabelo == 'R' && olhos != 'A') {
            cont4++;
        }
    }

    media_idade = soma_idade / cont2;
    per_olhoAzul = cont3 * 100 / 6;
    per_Ruiva = cont4 * 100 / 6;

    printf("\nDADOS FINAL ");
        if (cont1 > 0) {
            printf("\nPessoas com mais de 50 anos: %d.", cont1);
        } else {
            printf("\nNenhuma pessoa com mais de 50 anos.");
        }

        if (cont2 > 0) {
            printf("\nPorcentagem de pessoas com olhos azuis: %.1f.", media_idade);
        } else {
            printf("\nNenhuma pessoa com menos de 1.5 metros de altura.");
        }

        if (cont3 > 0) {
            printf("\nPorcentagem de pessoas com olhos azuis: %.1f.", per_olhoAzul);
        } else {
            printf("\nNenhuma pessoa com olho azual.");
        }

        if (cont4 > 0) {
            printf("\nPorcentagem de pessoas ruivas que não possuem olhos azuis: %.1f.", per_Ruiva);
        } else {
            printf("\nNenhuma pessoa ruiva que não possui olhos azuis.");
        }

    return 0;
}