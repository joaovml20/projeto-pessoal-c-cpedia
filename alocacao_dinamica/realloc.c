// na alocação dinamica em c, existe a função realloc
// realloc nada mais faz que aumentar ou diminuir o tamanho da variavel alocada dinamicamente com malloc ou calloc, realloc recebe a variavel alocada dinamicamente e novo valor de tamanho dela em bytes
// um exemplo abaixo
#include <stdio.h>
#include <stdlib.h> // biblioteca para a alocação dinamica

int main(){
    int tam,tam_nov,i,*vetor;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d",&tam);
    vetor = (int*) malloc(tam * sizeof(int)); 
    // acima, variavel com seu espaço alocado dinamicamente com malloc e abaixo, o tratamento se caso não der certo
    if(vetor == NULL){
        printf("Erro ao alocar o primeiro vetor \n");
        free(vetor);
        return 1;
    }
    for(i = 0;i < tam; i++){
        vetor[i] = i;
        printf("Resultado: %d \n",vetor[i]);
    }

    printf("\nAgora digite o novo tamanho do primeiro vetor: ");
    scanf("%d",&tam_nov);  // variavel para o novo tamanho
    vetor = (int*) realloc(vetor,tam_nov * sizeof(int));
    // acima e abaixo o processo com realloc, muito similar ao processo com calloc ou malloc
    if(vetor == NULL){
        printf("Erro ao realocar o primeiro vetor \n");
        free(vetor);
        return 1;
    }

    //abaixo, um loop para preencher os novos espaços da variavel e mostra-los
    for(i = tam;i < tam_nov; i++){
        vetor[i] = i;
        printf("Resultado: %d \n",vetor[i]);
    }

    free(vetor);
    return 0;
}