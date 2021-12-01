#include stdio.h
#include stdlib.h
#include locale.h


int main(void) {

  
    setlocale(LC_ALL, portuguese);

      float h, m;

    printf(Digite uma hora formada por hora e minutos(xx) );
      scanf(%f%f,&h,&m); 

      printf(nA hora digitada apenas em minutos será%.1f,(h60)+m);            
      
  
  return 0;
}