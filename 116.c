#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

  int idade, contador, somador;

  idade=1;
  contador=-1;
  somador=0;
    while(idade>0){
      printf("Digite sua idade: ");
        scanf("%d",&idade);
          contador++;
            somador = somador+idade;
   }
     printf("A média das idades é %d",somador/contador);
      return 0;
}