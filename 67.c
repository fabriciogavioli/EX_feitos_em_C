#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int idade;

      printf("Digite sua idade: ");
        scanf("%d",&idade);

      if(idade>=18){
        printf("Maior de idade!");
      }else{
        printf("menor de idade");
      }

return 0; 
}
