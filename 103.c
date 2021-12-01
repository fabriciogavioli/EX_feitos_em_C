#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int idade;
    int i, cont1, cont2, cont3, cont4, cont5;

    float porcentagem1, porcentagem2;

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    cont5 = 0;

    for (i = 1; i <= 8; i++) {
        printf("Digite a %dº idade: ", i);
        scanf("%d", &idade);

        if (idade <= 15) {
            cont1++;
        } else if (idade > 16 && idade <= 30) {
            cont2++;
        } else if (idade > 31 && idade <= 45) {
            cont3++;
        } else if (idade > 46 && idade <= 60) {
            cont4++;
        } else if (idade > 60) {
            cont5++;
        }
    }

    porcentagem1 = cont1 * 100 / 8;
    porcentagem2 = cont5 * 100 / 8;
    
    printf("TOTAL \n");
    printf("\n1º Faixa etária: %d ", cont1);
    printf("\n2º Faixa etária: %d ", cont2);
    printf("\n3º Faixa etária: %d ", cont3);
    printf("\n4º Faixa etária: %d ", cont4);
    printf("\n5º Faixa etária: %d ", cont5);
    printf("\nPorcentagem de pessoas na 1º Faixa etária: %.2f %% ", porcentagem1);
    printf("\nPorcentagem de pessoas na 5º Faixa etária: %.2f %% ", porcentagem2);

    return (EXIT_SUCCESS);
}