#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  float n1, n2, n3, notaf;
   
    printf("Digite a nota do trabalho de laboratório: ");
      scanf("%f",&n1);
    printf("Digite a nota da avaliação semestral: ");
      scanf("%f",&n2);   
    printf("Digite a nota do exame final: ");
      scanf("%f",&n3);      

    notaf=(n1*0.2)+(n2*0.3)+(n3*0.5);

    if (notaf<=50){ 
      printf("Sua nota final é E (%.1f)",notaf);
    }if (notaf>=51 && notaf<=60){ 
      printf("Sua nota final é D (%.1f)",notaf);
    }if (notaf>=61 && notaf<=70){ 
      printf("Sua nota final é C (%.1f)",notaf);
    }if (notaf>=71 && notaf<=80){
      printf("Sua nota final é B (%.1f",notaf);
    }if (notaf>= 81){
      printf("Sua nota final é A (%.1f)",notaf); 
    }     
  return 0;
}