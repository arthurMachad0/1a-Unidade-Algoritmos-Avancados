#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j ; //vairáveis da alocação de vetores
    float *x,*px, n, aux ;

    printf("Digite aqui o valor que desejas para n:");
    scanf("%f", &n);

    x = malloc(n * sizeof(int)); //alocando vetor
    px =&x[0];

    for (i = 0; i < n; i++) {
        printf("Digite o valor de numero %d\n",i+1);
        scanf("%f",&x[i]);
    }
    for (i = 0; i < n; i++) {
        printf("[%.1f] ",x[i]);
    }

    for(i=0;i<n;i++){
        int aux;
        for(int j=0;j<n;j++){
            if(*(x+i)<*(x+j)){
                aux=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=aux;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("[%.1f] ",*(x+i));
    }
    free(x);
    return 0;
}
