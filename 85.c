#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>


int main (){  
  
  int d1, m1, a1, d2, m2 ,a2;

    printf("Digite o primeiro dia(xx): ");
      scanf("%d",&d1);
    printf("Digite o primeiro mes(xx): ");
      scanf("%d",&m1);
    printf("Digite o primeiro ano(xxxx): ");
      scanf("%d",&a1);   
    printf("Digite o segundo dia(xx): ");
      scanf("%d",&d2);
    printf("Digite o segundo mes(xx): ");
      scanf("%d",&m2);
    printf("Digite o segundo ano(xxxx): ");
      scanf("%d",&a2);               

    if(a1<a2){
      printf("A primeira data é a maior cronologicamente:%d %d %d",d1,m1,a1); 
    }if(a2<a1){
      printf("A segunda data é a maior cronologicamente:%d %d %d",d2,m2,a2); 
    }if(a1==a2 && m1<m2){
      printf("A primeira data é a maior cronologicamente:%d %d %d",d1,m1,a1); 
    }if(a1==a2 && m2<m1){
      printf("A segunda data é a maior cronologicamente:%d %d %d",d2,m2,a2);
    }if(a1==a2 && m1==m2 && d1<d2){
      printf("A primeira data é a maior cronologicamente:%d %d %d",d1,m1,a1); 
    }if(a1==a2 && m1==m2 && d2<d1){
      printf("A segunda data é a maior cronologicamente:%d %d %d",d2,m2,a2); 
    }         
  return 0;
}