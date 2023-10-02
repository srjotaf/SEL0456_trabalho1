#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

double* criar_vetor(int tamanho_vetor){
    double* vetor;
    vetor=calloc(tamanho_vetor, sizeof(double));
    for (int i=0;i<tamanho_vetor;i++){
        vetor[i]=0;
    }
    return vetor;
    
}