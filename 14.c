#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

    int ano_nasc, ano;

    printf("Digite o ano que você nasceu: ");
    scanf("%d",&ano_nasc);
    printf("digite o ano que estamos: ");
    scanf("%d",&ano);
    printf("\nsua idade é: %d anos",ano-ano_nasc);
    printf("\nou %d meses",(ano-ano_nasc)*12);
    printf("\nou %d dias",((ano-ano_nasc)*365));
    printf("\nou %d semanas",(ano-ano_nasc)*52);
  
  return 0;
}