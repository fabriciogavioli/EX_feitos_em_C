#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int sexo;
    float h;

      printf("Digite seu sexo\n1.para masculino\n2.para feminino\n: ");
        scanf("%d",&sexo);
      printf("Digite sua altura: ");
        scanf("%f",&h);  

      if(sexo==1){
        printf("Seu peso ideal é: %.1f Kg",(72.7*h)-58);
      }if(sexo==2){
        printf("Seu peso ideal é: %.1f Kg",(62.1*h)-44.7);
      }if(sexo!=1 && sexo!=2){
        printf("valores inválidos!");
      }

return 0; 
}
