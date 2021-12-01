#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");
    char turno,cargo;
    float sal_min,sal_bruto,horas,vlr_h,imposto,sal_liq,vale_alimentacao;


    printf("Calculo de salário");
    printf("\nDigite o numéro de horas trabalhadas: ");
    scanf("%f",&horas);
    printf("Digite o valor do salário mínímo: ");
    scanf("%f",&sal_min);

    printf("\nTurnos de trablaho      Valor do coeficiente ");
    printf("\nMatutino - M          10%% do salário mínimo. ");
    printf("\nVespertino - V        15%% do salário mínimo. ");
    printf("\nNoturno - N           12%% do salário mínimo. ");

    printf("\nCom base na tebela digite a letra referente ao seu turno de trabalho: ");
    scanf(" %c",&turno);

    switch (turno)
    {
    case 'm' :
        vlr_h = sal_min * 0.1;
        sal_bruto = vlr_h * horas;
        printf("\nTurno matutino");
        printf("\nSeu salário bruto será de R$ %.2f.",sal_bruto);
        break;

    case 'v':
        vlr_h = sal_min * 0.15;
        sal_bruto = vlr_h * horas;
        printf("\nTurno vespertino");
        printf("\nSeu salário bruto será de R$ %.2f.",sal_bruto);
        break;

    case 'n':
        vlr_h = sal_min * 0.12;
        sal_bruto = vlr_h * horas;
        printf("Turno noturno");
        printf("\nSeu salário bruto será de R$ %.2f.",sal_bruto);
        break;

    default:
        printf("Comando inválido \n");

    }

    printf("Calculo dos impostos e gratificação");
    printf("\nO - Operario");
    printf("\nG- Gerente");
    printf("\nDigite o seu cargo: ");
    scanf(" %c%*c",&cargo);

    if (cargo == 'o')
    {
        if (sal_bruto >= 300)
        {
            imposto = sal_bruto * 0.05;
            printf("\nO seu imposto sera de R$ %.2f. ",imposto);
            printf("\nSeu salário liquido será de R$ %.2f",sal_liq);
        }

        else if (sal_bruto < 300)
        {
            imposto = sal_bruto *0.03;
            printf("\nO seu imposto sera de R$ %.2f. ",imposto);
        }
    }

    if (cargo == 'g')
    {
        if (sal_bruto >= 400)
        {
            imposto = sal_bruto *0.06;
            printf("\nO seu imposto sera de R$ %.2f. \n",imposto);
        }

        else if (sal_bruto < 400)
        {
            imposto = sal_bruto *0.03;
            printf("\nO seu imposto sera de R$ %.2f. \n",imposto);
        }
    }

    sal_bruto = sal_bruto - imposto;

    if (turno == 'n' && horas >80)
    {
        sal_liq = sal_bruto + 50;
        printf("\nGratificação: R$ 50,00");
    }

    else
    {
        sal_liq = sal_bruto + 30;
        printf("\nGratificação: R$ 30,00");

    }

    if (cargo == 'o' && vlr_h <= 25 )
    {
        vale_alimentacao = sal_bruto / 3;
        printf("\nVale alimentação: R$ %.2f",vale_alimentacao);
        sal_liq = sal_liq + vale_alimentacao;
    }

    printf("\nSeu salário liquido é R$ %.2f",sal_liq);

    if(sal_liq < 350)
    {
        printf("\nMal remunerado.");
    }

    else if (sal_liq >=350 && sal_liq < 600 )
    {
        printf("\nNormal.");
    }

    else if ( sal_liq > 600)
    {
        printf("\nBem remunerado");
    }
    return 0;
}
