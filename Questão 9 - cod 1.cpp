#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
  
  return 0;
}
// esse c�digo ele cria um vetor de 3 posi��es v, vet[0], vet[1], vet[2], um contador
// em seguida ele faz um la�o de repeti��o usando o i pra contar e reproduzir na tela os valores armazenados em cada posi��o do vetor 



