#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "portuguese");
  float p;
  int vm;

  printf("\nDigite o preço do produto: ");
   scanf("%f",&p);
  printf("\nDigite a venda média mensal: ");
   scanf("%d",&vm);

  if(vm<500 && p<30){
   printf("\nO novo preo do produto será R$:%.1f",p+(p*0.1));    
  }if(vm>=500 && vm<=1200 && p>=30 && p<80){
   printf("\nO novo preço do produto será R$:%.1f",p+(p*0.15));    
  }if(vm>=1200 && p>=80){
   printf("\nO novo preço do produto será R$:%.1f",p-(p*0.2));    
  }else{
   printf("\nO preço não terá alteração"); 
  } 

return 0;

}