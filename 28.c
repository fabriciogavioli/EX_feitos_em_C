#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      int p1, p2, p3;
      float n1, n2, n3, v1, v2, v3;

    printf("Digite o peso da primeira nota: ");
      scanf("%d",&p1); 
    printf("Digite o peso da segunda nota: ");
      scanf("%d",&p2); 
    printf("Digite o peso da terceira nota: ");
      scanf("%d",&p3);                
    printf("Digite a primeira nota: ");
      scanf("%f",&n1);      
    printf("Digite a segunda nota: ");
      scanf("%f",&n2);
    printf("Digite a terceira nota: ");
      scanf("%f",&n3);
    v1=n1*p1;
    v2=n2*p2;
    v3=n3*p3;
      printf("A nota final é:%.1f",(v1+v2+v3)/(p1+p2+p3));
  
  return 0;
}