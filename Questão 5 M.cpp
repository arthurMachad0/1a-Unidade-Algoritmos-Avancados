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
  p5= &vetor[2]-1;
  printf("%d \n", *p5);	
	
	return 0;	
}

//Ele define p5 como  endere�o do vetor na posi��o 2 e na mesma linhga de cod reduz uma posi��o, fazendo ele associar ao endere�o 
//da posi��o 1 vetor[1], printando na tela 45
