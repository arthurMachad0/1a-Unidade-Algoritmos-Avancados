#include <stdio.h>

int main(){
  
  float temp;
  float *p2;

/* (b) */

  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
  
  return 0;	
}

// o codigo � semelhante ao da letra a, a diferen�a aparece no momento em que se padroniza a execu��o do valor real para apenas uma casa ap�s a v�rgula
// o c�digo compila como esperado


