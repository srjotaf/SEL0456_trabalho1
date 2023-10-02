#include <stdio.h>
#include <stdlib.h>

int remover_elemento(double * vetor){
    int posicao;
    printf("\nQual é a posicao cujo elemento vocẽ deseja remover? ");
    scanf("%d", &posicao);
    printf("O elemento da posição %d será removido (substituído por zero).\n", posicao);
    vetor[posicao]=0;
}