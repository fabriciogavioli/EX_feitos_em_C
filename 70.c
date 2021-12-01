#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int idade;

      printf("Digite sua idade: ");
        scanf("%d",&idade);  

       if(idade<5){
        printf("Muito jovem qualquer categoria!");
      }if(idade>=5 && idade<=7){
        printf("Categoria infantil!");
      }if(idade>=8 && idade<=10){
        printf("Categoria juvenil!");
      }if(idade>=11 && idade<=15){
        printf("Categoia adolescente!");
      }if(idade>=16 && idade<=30){
        printf("Categoria adulto!");
      }if(idade>30){
        printf("Categoria sênior!");
      }

return 0; 
}
