#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float sm,sb;
  int ht, he, de;

  printf("\nDigite o sal�rio m�nimo: ");
   scanf("%f",&sm);
  printf("\nDigite as horas trabalhadas: ");
   scanf("%d",&ht);
  printf("\nDigite as horas extras trabalhadas: ");
   scanf("%d",&he);
  printf("\nDigite o n�mero de dependentes: ");
   scanf("%d",&de);         

  sb=(ht*(sm/5))+(he*(sm/2.5))+(de*36);

  if(sb<200){
   printf("\nO sal�rio a receber R$:%.1f",sb+100);    
  }if(sb>=200 && sb<=350){
   printf("\nO sal�rio a receber R$:%.1f",sb-(sb*0.1)+100);    
  }if(sb>350 && sb<=500){
   printf("\nO sal�rio a receber R$:%.1f",sb-(sb*0.1)+50);    
  }if(sb>500){
   printf("\nO sal�rio a receber R$:%.1f",sb-(sb*0.2)+50);    
  }

return 0;

}