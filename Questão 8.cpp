#include <stdio.h>

int main(){
	
	int mat[4], *p, x;
	
	p= mat +1; // � verdadeiro, pois est� pintando o endere�o do vetor mat + 1;
	//printf("%p", p ); //teste da validade da primeira senten�a 
	
	p= mat; // � verdadeiro, pois est� pintando o endere�o do vetor mat
	//printf("%p", p); //teste da validade da segunda senten�a 
	
	//p = mat +1; // acredito que seja falso, pois causa erro de compila��o (motivo ?? n�o sei) 
	//printf("%p", p); //teste da validade da terceira senten�a
	
	x= (*mat); // � verdadeiro, pois associa o valor do conte�do de mat � x.
	printf("%d", x); //teste da validade da quarta senten�a
	
		
	return 0;
}
