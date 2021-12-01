#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
  float sal_carlos, sal_joao;
    int meses;

    printf("Digite o salário de Carlos: ");
    scanf("%f", &sal_carlos);

    sal_joao = sal_carlos / 3;

    meses=0;
    printf("O salário de João será de R$ %.2f \n", sal_joao);

    while (sal_joao < sal_carlos) {
        sal_joao = sal_joao +(sal_joao*0.05);
        sal_carlos = sal_carlos+(sal_carlos*0.02) ;
        meses++;

    }

    printf("Levará %d meses para o salario de João igual ao salário de Carlos. \n", meses);

    return 0;
}
