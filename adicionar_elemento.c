#include <stdio.h>
#include <stdlib.h>


int adicionar_elemento(double * vetor, int* tamanho_vetor){
    double novo_elemento;
    printf("\nQual é o elemento que você deseja adicionar? ");
    scanf("%lf", &novo_elemento);
    int posicao;
    printf("Em qual posicao vocẽ deseja adicionar o elemento %lf? ", novo_elemento);
    scanf("%d", &posicao);
    if (posicao>=(*tamanho_vetor)){
        vetor=realloc(vetor, posicao+1);
        printf("O vetor tinha %d elementos e agora terá %d elementos.\n", (*tamanho_vetor), posicao+1);
        printf("O elemento %lf será inserido na posicao %d.\n", novo_elemento, posicao);
        vetor[posicao]=novo_elemento;
        (*tamanho_vetor)=posicao+1;
    }
    else if (posicao<(*tamanho_vetor)){
        printf("O elemento %lf será inserido na posicao %d.\n", novo_elemento, posicao);
        vetor[posicao]=novo_elemento;
    }
    
}