#include <stdio.h>

int main(){
  
  char aux;
  char nome[] = "Ponteiros" ;
  char *p3;		
  
   /* (e) */
  
  p3 =nome;
  printf("%c \n", *p3);
  
  return 0;
}

// O c�digo se tornar� v�lido ao transformar a linha [char *nome = "Ponteiros";] para uma string da seguinte maneira:
// [char nome[]="Ponteiros";]
// Sendo assim mostrando o esperado na tela imprimindo o valor  de forma autom�tica da posi��o [0] na tela (P)
