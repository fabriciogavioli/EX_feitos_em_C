#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float salario;
  int cod;

  printf("\nMenu de op��es\n1.Imposto\n2.Novo sal�rio\n3.Classifica��o\nDigite sua op��o: ");
   scanf("%d",&cod);

  switch (cod){
   case 1:
     printf("Digite seu sal�rio: ");
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float salario;
  int cod;

  printf("\nMenu de op��es\n1.Imposto\n2.Novo sal�rio\n3.Classifica��o\nDigite sua op��o: ");
   scanf("%d",&cod);

  switch (cod){
   case 1:
     printf("Digite seu sal�rio: ");
      scanf("%f",&salario);
       if(salario<500){
         printf("Voc� ir� pagar R$%.1f de Imposto",salario*0.05);
      }if(salario>=500 && salario<=850){
         printf("Voc� ir� pagar R$%.1f de Imposto",salario*0.10);
      }if(salario>850){
         printf("Voc� ir� pagar R$%.1f de Imposto",salario*0.15);
      }   
      break;

   case 2:  
     printf("Digite seu sal�rio: ");
      scanf("%f",&salario);
       if(salario>1500){
         printf("Seu sal�rio ser�:%.1f",salario+25);
      }if(salario>=750 && salario<=1500){
         printf("Seu novo sal�rio ser�:%.1f",salario+50);
      }if(salario>=450 && salario<750){
         printf("Seu novo sal�rio ser�:%.1f",salario+75);
      }if(salario<450){
         printf("Seu novo sal�rio ser�:%.1f",salario+100);
      }   
      break;

   case 3:  
     printf("Digite seu sal�rio: ");
      scanf("%f",&salario); 
      if(salario>=700){
         printf("Voc� � bem remunerado!");
      }else{
         printf("Voc� � mal remunerado!");
      }    
      break;
}if(cod!=1 && cod!=2 && cod!=3){
  printf("codigo invalido!");     
}
return 0;

}