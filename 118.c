#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int idadeMS, idade, maior_idade, menor_idade;
    int pos, i, contM;
    float salario, menor_salario, soma_salario, media;
    char sexo, sexoMS;

    i = 0; 
    pos = 1; 
    contM = 0;
    maior_idade = 0;
    menor_idade = 999;
    menor_salario = 99999;
    soma_salario = 0;

    do {
        printf("%dº Pessoa \n", pos);
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade < 0) { 
            break;
        }
        printf("Digite seu sexo(M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("Digite seu salário: ");
        scanf("%f", &salario);

        if (sexo == 'f' && salario <= 200) {
            contM++;
        }
        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }
        if (salario < menor_salario) {
            menor_salario = salario;
            idadeMS = idade;
            sexoMS = sexo;
        }

        i++;
        pos++;
        soma_salario += salario; 
    } while (idade > 0);

    media = soma_salario / i;

    printf("\nDADOS FINAIS \n");
    if (i > 0) {
        printf("A media de salária é: R$ %.2f \n", media);
        printf("A menor idade é: %d. \n", menor_idade);
        printf("A maior idade é: %d. \n", maior_idade);
        printf("Quantidade de mulheres com salário inferior a R$ 200.00: %d \n", contM);
        printf("Menor salário é de R$ %.2f, pertence a uma pessoa do sexo %c com %d anos. \n", menor_salario, sexoMS, idadeMS);
    } else {
        printf("Nenhuma entrada registrada. \n");
    }

    return 0;
}
