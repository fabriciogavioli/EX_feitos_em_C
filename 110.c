#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h> 

main() { 
  setlocale(LC_ALL, "portuguese");
   int i, j, k, sm=0, n[10], p=0, pr, r; 
   for(i=0; i<10; i++) { 
      printf("Digite o %d� n�mero: ", i+1); 
      scanf("%d",&n[i]); 
   } 
   for(j=0;j<10;j++) { 
      if(n[j]%2 == 0) { 
         sm += n[j]; 
      } 
      pr = 0; 
      for (k=2; k<n[j]; k++) { 
         if (n[j]%k == 0) 
            pr++; 
      } 
      if(pr == 0) { 
         p += n[j]; 
      } 
   } 
   printf("\nA soma dos numeros pares � %i", sm); 
   printf("\nA soma dos numeros primos e %i", p); 


   return 0;
}