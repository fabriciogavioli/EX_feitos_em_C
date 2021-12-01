#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float s;

  printf("\nDIgite seu salario inicial: ");
   scanf("%f",&s);

  if(s<=500){
  printf("seu salário com o auxilio escola será R$:%.1f",s+(s*0.05)+150); 
}if(s>500 && s<=600){
  printf("seu salário com o auxilio escola será R$:%.1f",s+(s*0.12)+150);
}if(s>600 && s<=1200){
  printf("seu salário com o auxilio escola será R$:%.1f",s+(s*0.12)+100);
}if(s>1200){
  printf("seu salário com o auxilio escola será R$:%.1f",s+(s*0.12)+100);
}
return 0;

}