#include <stdio.h>
  
int main(){
		 
  char aux;
  char nome[] = "Ponteiros" ;
  char *p3;		
  
  /* (f) */
  p3= &nome[4];
  p3 = p3 + 4;
  printf("%c \n", *p3);
	
	return 0;
}

//como p3 foi definido como ponteiro originalmente apontando para a letra e nome[4], quando mandamos ele avançar mais 4 posições ele vai apontar para a letra s nome[8]
