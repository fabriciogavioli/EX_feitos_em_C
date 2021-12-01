#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

  int i, n;

    printf("Digite um número para saber sua tabuada: ");
      scanf("%d",&n);

    for(i=0;i<=10;i++){
      printf("\n%d X %d = %d",n,i,n*i);
    }  
    return 0;
}