#include <stdio.h>

int main(){

  char aux;
  char nome[] = "Ponteiros" ;
  char *p3;	

	/* (c) */

  p3 = &nome[0];
  
  aux = *p3;
  printf(" %c\n ", aux);
	
	
	return 0;
	
}

// O c�digo se tornar� v�lido ao transformar a linha [char *nome = "Ponteiros";] para uma string da seguinte maneira:
// [char nome[]="Ponteiros";]
// Sendo assim mostrando o esperado na tela imprimindo o valor da posi��o [0] na tela (P)
