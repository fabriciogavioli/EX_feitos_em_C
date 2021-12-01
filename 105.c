#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

  int i, n;


    for (n = 1; n<= 10; n++) {
    for(i=0;i<=10;i++){
      printf("\n%d X %d = %d",n,i,n*i);
    }  
}    
    return 0;
}