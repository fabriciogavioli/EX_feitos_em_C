#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float salario;
  int cod;

  printf("Digite seu salario R$: ");
    scanf("%f",&salario);
  printf("1.Escriturário\n2.Secretário\n3.Caixa\n4.Gerente\n5.Diretor\nDigite seu código: ");
   scanf("%d",&cod);

   if(cod==1){
     printf("Seu novo salario será:R$%.1f",salario+(salario*0.50));
  }if(cod==2){
    printf("Seu novo salario será:R$%.1f",salario+(salario*0.35));
  }if(cod==3){
    printf("Seu novo salario será:R$%.1f",salario+(salario*0.20));
  }if(cod==4){
    printf("Seu novo salario será:R$%.1f",salario+(salario*0.10));
  }if(cod==5){
    printf("Não terá aumento!");
  }

return 0;

}