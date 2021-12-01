#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int i, contSIM, contNAO, contMS, contHN, contHOMEM;
    float porcentagem;
     setlocale(LC_ALL, "portuguese");

    char opcao, sexo;

    contHN = 0;
    contMS = 0;
    contSIM = 0;
    contNAO = 0;

    for (i = 1; i <= 10; i++) {
        printf("%d° Pessoa \n", i);
        printf("Digite seu sexo (M. Masculino | F. Feminino): ");
        scanf(" %c", &sexo);
        printf("Você gostou do produto(S. Sim | N. Não): ");
        scanf(" %c", &opcao);
        printf("\n");

        if (opcao == 's') {
            contSIM++;
        } else if (opcao == 'n') {
            contNAO++;
        }

        if (sexo == 'm') {
            contHOMEM++;
            if (opcao == 'n') {
                contHN++;
            }
        }
        
        if (sexo == 'f' && opcao == 's') {
            contMS++;
        }
    }

    porcentagem = contHN * 100 / contHOMEM;

    printf("DADOS FINAIS \n");
    printf("Total de pessoas que responderam sim: %d \n", contSIM);
    printf("Total de pessoas que responderam não: %d \n", contNAO);
    printf("Total de mulheres que responderam sim: %d \n", contMS);
    printf("Porcentagem de homens que responderam não: %.1f %%\n", porcentagem);

    return 0;
}