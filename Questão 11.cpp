#include <stdio.h>

int main(){

	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;	
	
	aloha[2] = value; // v�lido, pois printa um valor em float 
	
	printf("%d", value);
	printf("\n");
	scanf("%f", &aloha); //v�lido, pois printa um valor em float
	printf("%d", aloha);	
	printf("\n");
	//aloha = "value"; // inv�lido, pois aloha � uma vari�vel do tipo float e n�o char
	//printf("%s", aloha);
	printf("%f", aloha); // � v�lido, pois imprime um valor float, sendo compat�vel com a vari�vel declarada no escopo 
	printf("\n");
	coisas[4][4] = aloha[3]; // � valido, pois est� associando o valor de coisas linha 11 e coluna 6 com o elemnto da posi��o 3 de aloha
	printf("%f", aloha[3]);
	printf("\n");
	// coisas[5] = aloha; //inv�lido, pois nao referencia a posi��o de aloha que deseja igualar ao valor de coisas[5]
	//printf("%f", aloha);
	//printf("\n");
	//pf = value; // est� mal declarado, por isso se torna uma alternativa falsa
	//printf("%d", pf);
	pf = aloha; // compila, mas n entrega nada
	printf("%x", pf);
	return 0;	
	
	
}

// pra vc verificar os cods vc precisa deixar cada linha como comentada e ir testando linha por linha e verificar se existe algum erro que deixei passar



