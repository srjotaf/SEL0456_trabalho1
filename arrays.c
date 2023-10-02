#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

//double* criar_vetor(int tamanho_vetor){
//    double* vetor;
//    vetor=calloc(tamanho_vetor, sizeof(double));
//    for (int i=0;i<tamanho_vetor;i++){
//        vetor[i]=0;
//    }
//    return vetor;
//    
//}
//int adicionar_elemento(double * vetor, int* tamanho_vetor){
//    double novo_elemento;
//    printf("\nQual é o elemento que você deseja adicionar? ");
//    scanf("%lf", &novo_elemento);
//    int posicao;
//    printf("Em qual posicao vocẽ deseja adicionar o elemento %lf? ", novo_elemento);
//    scanf("%d", &posicao);
//    if (posicao>=(*tamanho_vetor)){
//        vetor=realloc(vetor, posicao+1);
//        printf("O vetor tinha %d elementos e agora terá %d elementos.\n", (*tamanho_vetor), posicao+1);
//        printf("O elemento %lf será inserido na posicao %d.\n", novo_elemento, posicao);
//        vetor[posicao]=novo_elemento;
//        (*tamanho_vetor)=posicao+1;
//    }
//    else if (posicao<(*tamanho_vetor)){
//        printf("O elemento %lf será inserido na posicao %d.\n", novo_elemento, posicao);
//        vetor[posicao]=novo_elemento;
//    }
//    
//}
//int remover_elemento(double * vetor){
//    int posicao;
//    printf("\nQual é a posicao cujo elemento vocẽ deseja remover? ");
//    scanf("%d", &posicao);
//    printf("O elemento da posição %d será removido (substituído por zero).\n", posicao);
//    vetor[posicao]=0;
//}

int main(){
    int tamanho_vetor;
    printf("Quantos elementos o vetor deverá ter? ");
    scanf("%d", &tamanho_vetor);

    double* vetor;
    vetor = criar_vetor(tamanho_vetor);
    int sair=0;
    char operacao;
    do{
        system("clear");
        printf("\nO vetor é: \n");
        printf("Posição    Valor\n");
        for (int i=0;i<tamanho_vetor;i++){
            printf("%d       %lf\n",i, vetor[i]);
        }
        printf("\nPara adicionar um novo elemento digite 'A'.\n");
        printf("Para remover um elemento digite 'R'.\n");
        printf("Para sair digite qualquer outra letra. ");
        scanf(" %c", &operacao);
        switch (operacao){
        case 'A':
            adicionar_elemento(vetor, &tamanho_vetor);
            break;
        case 'R':
            remover_elemento(vetor);
            break;
        default:
            sair=1;
            break;
        }
    } while (sair==0);
}