#include <stdio.h>

//Enunciado Quest�o 3: Mostre o que ser� impresso por programa supondo que i ocupa o endere�o 4094 na mem�ria.

int main(){

  int i=5, *p;
  p = &i;
  printf("\n %x \n %d \n %d \n %d \n %d\n", p,*p+2,**&p,3**p,**&p+4);
  printf("\n o primeiro resultado equivale ao endereco da variavel i na memoria\n O segundo resultado vai ser o conteudo do ponteiro \n O terceiro resultado vai ser o conteudo do conteudo do ponteiro p");
  printf("\n O quarto valor vale a multiplicacao do conteudo de p por 3\n O quinto resultado equivale ao conteudo do ponteiro p + 9");	
	
	return 0;
}
