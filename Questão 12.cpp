/* Os ponteiros s�o usados para armazenar todo tipo de informa��o, os ponteiros para fun��o armazenam 
onde as fun��es ficam na mem�ria virtual, eles guardam edere�os de �reas de c�digo.
Isto �, ponteiro pra fun��o � um tipo de ponteiro que possibilita utilizar ponteiros para chamada de fun��es. 
Isso � poss�vel porque as fun��es possuem endere�o fixo,  tamb�m chamado de ponto de entrada da fun��o. 
Deste modo, um ponteiro para fun��o deve ser declarado conforme a assinatura da fun��o que ser� chamada.
*/


#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int x, int y){
		return (x * y); // fun�ao multiplica��o
}
int main(){ 
	int(*p)(int, int)=multiplicacao; // (*p)() ponteiro para fun��o e ponteiro recebe fun��o multiplicacao
	int w, x = 2, y = 3; 
	w = p(x,y);
	printf("%d", w);
		return 0;
}
