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
    int sair=0;
    char operacao;
    do{
        printf("\nO vetor é: \n");
        printf("Posição    Valor\n");
        for (int i=0;i<tamanho_vetor;i++){
            printf("%d       %lf\n",i, vetor[i]);
        }
        printf("\nPara adicionar um novo elemento digite 'A'.\n");
        printf("Para remover um elemento digite 'R'.\n");
        printf("Para sair digite qualquer outra letra.");
        scanf(" %c", &operacao);
        switch (operacao){
        case 'A':
            adicionar_elemento();
            break;
        case 'R':
            remover_elemento();
            break;
        default:
            sair=1;
            break;
        }
    } while (sair==0);
}