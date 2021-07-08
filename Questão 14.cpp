#include<stdio.h>
#include<stdlib.h>

int compare (const void * a, const void * b) // funcao comparar receve dois ponteiros do tipo const void
{
     if(*(float *)a > *(float *)b){
        return 1;
    }

    else if (*(float *)a < *(float *)b){
           return -1;
    }

     else{
         return 0;
     }
   //return( *(float*)a - *(float*)b);
 }

int main(void){
    int i,n; // declarando vari�veis da aloca��o de vetores
    float *x;

    printf("Digite aqui o valor que desejas para n:"); // Intera��o com usu�rio para descobrir o tamano do vetor desejado
    scanf("%d", &n);

    x = (float*)malloc(n * sizeof(float)); //alocando vetor

    for (i = 0; i < n; i++) { //Processo de inser��o dos valores que desejam ser alocados
        printf("Digite o valor de numero %d\n",i+1);
        scanf("%f", &x[i]);
    }


    for (i = 0; i < n; i++) {  // Impress�o na tela do vetor em seu estado original
        printf("[%.1f] ",x[i]);
    }

    printf("\n");// apenas para est�tica de apresenta��o

    qsort ( x, n, sizeof(float), compare); // chamando a funcao qsort
    for (i=0; i<n; i++){
        printf ("[%.1f] ", x[i]);
    }

    free(x); // liberando memo�ria

    return 0;

}
