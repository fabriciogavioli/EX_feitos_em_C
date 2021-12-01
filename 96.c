#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese"); 
    float salario,tempo,gratificacao,imposto;

    printf("Digite seu salário: ");
    scanf("%f",&salario);
    printf("Digite seu tempo de serviço: ");
    scanf("%f",&tempo);



    if (salario < 500)
      if (salario < 200) {
          printf("\nVocê está insento de impostos.");
          printf("\nSua classificação é A");

        if (tempo > 0 && tempo <3)
        {
          printf("\nVocê reberá R$ 23,00 de gratificação.");
          printf("\nSeu salário líquido será de R$ %.2f.",salario + 23);
        }

        else if (tempo >=3 && tempo <6)
        {
          printf("\nVocê reberá R$ 35,00 de gratificação.");
          printf("\nSeu salário líquido será de R$ %.2f.",salario + 33);
        }

        else if (tempo >= 6)
        {
          printf("\nVocê reberá R$ 33,00 de gratificação.");
          printf("\nSeu salário líquido será de R$ %.2f.",salario + 33);
        }

        if (salario >=200 && salario <450)
        {
          printf("\nSua classificação é B");
        }
        if (tempo > 0 && tempo <3)
        {
          imposto = salario * 0.03;
          printf("\nVocê reberá R$ 23,00 de gratificação.");
          printf("\nVocê pagará R$ %.2f de impostos.",imposto);
          printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
        }

        else if (tempo >=3 && tempo <6)
        {
          imposto = salario * 0.03;
          printf("\nVocê reberá R$ 35,00 de gratificação.");
          printf("\nVocê pagará R$ %.2f de impostos.",imposto);
          printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
        }

        else if (tempo >= 6)
        {
          imposto = salario * 0.03;
          printf("\nVocê reberá R$ 33,00 de gratificação.");
          printf("\nVocê pagará R$ %.2f de impostos.",imposto);
          printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
        }
        }

    if (salario >=450 && salario<500)
    {
          printf("\nSua classificação é B");

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.03;
        printf("\nVocê reberá R$ 23,00 de gratificação.");
        printf("\nVocê pagará R$ %.2f de impostos.",imposto);
        printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
    }

    else if (tempo >=3 && tempo <6)
    {
      imposto = salario * 0.03;
      printf("\nVocê reberá R$ 35,00 de gratificação.");
      printf("\nVocê pagará R$ %.2f de impostos.",imposto);
      printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
    }

    else if (tempo >= 6)
    {
      imposto = salario * 0.03;
      printf("\nVocê reberá R$ 33,00 de gratificação.");
      printf("\nVocê pagará R$ %.2f de impostos.",imposto);
      printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 23);
    }
}

if (salario >= 500 && salario < 700)
{
    if (salario >=500 && salario < 600)
    {
      printf("\nSua classificação é B");
    }
    else
    {
      printf("\nSua classificação é C ");
    }

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.08;
        printf("\nVocê reberá R$ 20,00 de gratificação.");
        printf("\nVocê pagará R$ %.2f de impostos.",imposto);
        printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 20);
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.08;
        printf("\nVocê reberá R$ 30,00 de gratificação.");
        printf("\nVocê pagará R$ %.2f de impostos.",imposto);
        printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 30);
    }
}
if (salario >= 700)
{
    printf("\nSua classificação é C");
    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.12;
        printf("\nVocê reberá R$ 20,00 de gratificação.");
        printf("\nVocê pagará R$ %.2f de impostos.",imposto);
        printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 20);
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.12;
        printf("\nVocê reberá R$ 30,00 de gratificação.");
        printf("\nVocê pagará R$ %.2f de impostos.",imposto);
        printf("\nSeu salário líquido será de R$ %.2f.",salario - imposto + 30);
    }
}
}
