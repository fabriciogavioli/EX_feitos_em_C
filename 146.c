#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
int num, soma, verificar_par, maior_num, menor_num, sair;
    int i, cont_impar, cont_par;

    soma = 0;
    i = 0;
    maior_num = 1;
    menor_num = 999999999;

    float media, media_pares, soma_pares, per_impar;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("\n");

        soma = soma + num;
        verificar_par = num % 2;

        if (verificar_par == 0) {
            soma_pares = soma_pares + num;
            cont_par++;
        } else {
            cont_impar++;
        }


        if (num > maior_num) {
            maior_num = num;
        }if (num < menor_num) {
            menor_num = num;
        }

        i++;
        printf("Para continuar digite qualquer número ou digite 30000 para sair: ");
        scanf("%d", &sair);
    } while (sair != 30000);

    media = soma / i;
    media_pares = soma_pares / cont_par;
    per_impar = cont_impar * 100 / i;

    printf("A soma dos números digitados dos números digitados é %d. \n ", soma);
    printf("Foi digitado %d números. \n", i);
    printf("A média dos números digitados é %.2f. \n", media);
    printf("O maior número digitado foi o %d. \n", maior_num);
    printf("O menor número digitado foi o %d. \n", menor_num);
    printf("O percentual de números impares é de %.1f %%. \n", per_impar);

    return 0;
}