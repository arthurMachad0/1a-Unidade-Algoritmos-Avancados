#include <stdio.h>

int main(){
	

  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  
 //---- letra j----//
  
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  p5 = p4+1;
  p4 = p5+1;
  idade= *p4;
  printf("%d \n", idade);	
	
	return 0;	
}

// a opera��o feita ela se baseou no exerc�cio anterior como refer�ncia e andamos uma posi��o.. fazendo o cod
// imprimir a idade 27
