#include <stdio.h> // 1� Erro - Faltou colocar a(s) bibl�otecas

int main() {
  int valor;
  int *p1;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  
 return 0;
 
}

/*  neste cod foi criado uma vari�vel do tipo inteiro (valor) e um ponteiro (p1) para apontar o endere�o (ou indiretamente o valor armazenado na vari�vel "valor")
    tendo o valor modificado indiretamente e imprimindo o valor 20
    Aconteceu o que esper�vamos (codigo retornando o valor 20) */
    
    
     
