#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese"); 
  float nota1, nota2, nota3, nota4, media;
    printf("digite a primeira nota: ");
      scanf("%f",&nota1);
    printf("digite a segunda nota: ");
      scanf("%f",&nota2);
    printf("digite a terceira nota: ");
      scanf("%f",&nota3);
    printf("digite a quarta nota: ");
      scanf("%f",&nota4);  
    media=(nota1+nota2+nota3+nota4)/4;   
      printf("A média do aluno é:%.1f",media);

    if (media>=60.0){
        printf("\nAPROVADO!");    
  } if (media>=20 && media<=59){ 
        printf("\nEXAME!");
  } else if (media<=19){
    printf("\nREPROVADO!");
  }
  return 0;
}