#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2, n3, media;
   
    printf("Digite a primeira nota: ");
      scanf("%f",&n1);
    printf("Digite a segunda nota: ");
      scanf("%f",&n2);   
    printf("Digite a terceira nota: ");
      scanf("%f",&n3);   

    media=(n1+n2+n3)/3;

    if (media<=30){ 
      printf("sua média foi:%.1f REPROVADO!",media);
    }if (media>=31 && media<=70){ 
      printf("Sua média foi:%.1f EXAME!\n você necessita de %.1f para ser aprovado!",media,60-media);
    }if (media>=71){ 
      printf("Sua média foi:%.1f APROVADO!",media);
    }
  return 0;
}