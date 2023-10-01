#include <stdio.h>
#include <stdlib.h>

double* criar_vetor(int tamanho_vetor){
    double* vetor;
    vetor=calloc(tamanho_vetor, sizeof(double));
    for (int i=0;i<tamanho_vetor;i++){
        vetor[i]=0;
    }
    return vetor;
    
}
int adicionar_elemento(){}
int remover_elemento(){}

int main(){
    int tamanho_vetor;
    printf("Quantos elementos o vetor deverá ter? ");
    scanf("%d", &tamanho_vetor);

    double* vetor;
    vetor = criar_vetor(tamanho_vetor);

    printf("O vetor é: \n");
    printf("Posição    Valor\n");
    for (int i=0;i<tamanho_vetor;i++){
        printf("%d       %lf\n",i, vetor[i]);
    }
}