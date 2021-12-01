#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
    int num1, num2, sequencia;
    int i;
    num1 = 0;
    num2 = 1;
    
    for (i = 3; i <= 10; i++) {
        sequencia = num1 + num2;

        printf("%d \n",sequencia);
        
        num1 = num2;
        num2 = sequencia;
        sequencia = num1 + num2;  
    }

    return 0;
}