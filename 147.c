#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
  
    int i, contH, contF, sair;
    int contF_menos21, contH_mais45, contH_exp, contF_exp;
    int idade, soma_homem, menor_idade;

    float media_homem, per_homem;

    char sexo, experiencia;

    i = 1;
    sair = 1;
    contF = 0;
    contH = 0; 
    contF_menos21 = 0; 
    contH_exp = 0; 
    contH_mais45 = 0; 
    soma_homem = 0;
    menor_idade = 999999999;

    do {
        printf("%dº CANDITATO \n\n", i);
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);

        if (sexo == 'm') {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Você possui experiência no serviço (S. Sim | N. Não): ");
            scanf(" %c", &experiencia);

            if (experiencia == 's') {
                soma_homem = soma_homem + idade;
                contH_exp++;
            }

            if (idade > 45) {
                contH_mais45++;
            }
            contH++;

        }
        else if (sexo == 'f') {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Você possui experiência no serviço (S. Sim | N. Não): ");
            scanf(" %c", &experiencia);

            if (experiencia == 's') {

                if (idade < 21) {
                    contF_exp++;
                }

                menor_idade = idade;

                if (idade < menor_idade) {
                    menor_idade = idade;
                }
            }
            contF++;
        }

        i++;
       
        printf("Digite qualquer numero para continuar ou 0 para sair: ");
        scanf("%d", &sair);
    } while (sair != 0);

    media_homem = soma_homem / contH_exp;
    per_homem = contH_mais45 * 100/contH;

    printf("RESULTADO \n");

    if (contH > 0) {
        printf("Total de canditatos do sexo masculino: %d. \n", contH);
    } else {
        printf("Nenhum canditato do sexo masculino. \n");
    }

    if (contF > 0) {
        printf("Total de canditatos do sexo feminino: %d. \n", contF);
        printf("Menor idade das mulheres com experiência no serviço:  %d \n", menor_idade);

    } else {
        printf("Nenhum canditato do sexo feminino. \n");
    }

    if (contH_exp > 0) {
        printf("Media de idade de homens com experiência no serviço: %.2f \n", media_homem);
    } else {
        printf("Nenhum canditato masculino com experiência no serviço. \n");
    }

    if (contH_mais45 > 0) {
        printf("Percentual de homens com mais de 45 anos: %.2f. \n", per_homem);
    } else {
        printf("Nenhum candiato masculino com mais de 45 anos. \n");
    }

    if (contF_menos21 > 0) {
        printf("Quantidade de mulheres com menos de 21 anos com experiência no serviço: %d. \n", contF_exp);
    } else {
        printf("Nenhum canditato feminino com menos de 21 anos e experência no serviço. \n");
    }
    
    return 0;
}