#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
int a,A,b,B,c,C,delta,opcao;
float x1,x2;

      printf("Digite o valor de a: ");
      scanf("%d",&a);
      printf("\nDigite o valor de b: ");
      scanf("%d",&b);
      printf("\nDigite o valor de c: ");
      scanf("%d",&c);

       printf("Sua equacao: %dx^2 + %dx + %d = 0\n", a, b, c);



         delta=b*b-4*a*c;

         printf("\n\nO resultado e: %d\n",delta);


             if (delta<0)
             {
             printf("\nNao e possivel extrair a raiz deste numero\n\n");
}else{
     x1 = ((-B) + sqrt(delta))/(2*(a));
     x2 = ((-B) - sqrt(delta))/(2*(a));

    }

    printf("O resultado da equacao é: %.1f\n e %.1f\n",x1,x2);

return 0;

}