#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float salario;
  int cod;

  printf("\nMenu de opções\n1.Imposto\n2.Novo salário\n3.Classificação\nDigite sua opção: ");
   scanf("%d",&cod);

  switch (cod){
   case 1:
     printf("Digite seu salário: ");
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float salario;
  int cod;

  printf("\nMenu de opções\n1.Imposto\n2.Novo salário\n3.Classificação\nDigite sua opção: ");
   scanf("%d",&cod);

  switch (cod){
   case 1:
     printf("Digite seu salário: ");
      scanf("%f",&salario);
       if(salario<500){
         printf("Você irá pagar R$%.1f de Imposto",salario*0.05);
      }if(salario>=500 && salario<=850){
         printf("Você irá pagar R$%.1f de Imposto",salario*0.10);
      }if(salario>850){
         printf("Você irá pagar R$%.1f de Imposto",salario*0.15);
      }   
      break;

   case 2:  
     printf("Digite seu salário: ");
      scanf("%f",&salario);
       if(salario>1500){
         printf("Seu salário será:%.1f",salario+25);
      }if(salario>=750 && salario<=1500){
         printf("Seu novo salário será:%.1f",salario+50);
      }if(salario>=450 && salario<750){
         printf("Seu novo salário será:%.1f",salario+75);
      }if(salario<450){
         printf("Seu novo salário será:%.1f",salario+100);
      }   
      break;

   case 3:  
     printf("Digite seu salário: ");
      scanf("%f",&salario); 
      if(salario>=700){
         printf("Você é bem remunerado!");
      }else{
         printf("Você é mal remunerado!");
      }    
      break;
}if(cod!=1 && cod!=2 && cod!=3){
  printf("codigo invalido!");     
}
return 0;

}