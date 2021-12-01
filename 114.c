#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

   int i, idade, opiniao;
   int op1=0, op2=0, op3=0, qtde_regular=0, cont3=0;
   float media_otimo, perc_bom;

   printf ("Pesquisa de opiniao");
   printf ("\t[1] Regular");
   printf ("\t[2] Bom");
   printf ("\t[3] Otimo");

   for (i=1;i<=15;i++)
   {
       printf ("\n\ndade: ");
       scanf ("%d", &idade);
       printf ("\nOpiniao: ");
       scanf ("%d", &opiniao);

       if(opiniao==1){
       qtde_regular = qtde_regular + 1;
       }
       if(opiniao==2){
       op2 = op2 + 1;
       }
       if(opiniao==3){
       op3 = idade + op3;
       cont3 = cont3+1;
       }
   }

   media_otimo = op3 / cont3;

   perc_bom = ((float)op2 / 15) * 100;

       printf ("\nA media das idades das pessoas que responderam otimo.......: %.1f ", media_otimo);
       printf ("\nA quantidade de pessoas que respondeu regular..............: %d", qtde_regular);
       printf ("\nA percentagem de pessoas que respondeu BOM entre todos os espectadores analisados..: %.2f%%", perc_bom);

      return 0;
}