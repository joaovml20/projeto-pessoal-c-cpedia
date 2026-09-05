// Alocação dinâmica em c nos permitir alocar memoria em tempo de execuçâo, por exemplo, uma variavel de determinado tamanho pode ser modificada para ter mais ou menos tamanho, diferente da alocação estática, onde a variavel teria um tamanho fixo do inicio ao fim do programar quando declarada. com a diferença tambem que a dinâmica utilizar e precisar de ponteiros, diferente da estática que é opcional 
// um dos metodos para utilizar a alocação dinâmica é o malloc
// o malloc no modo utilizado aqui, recebe o numero de bytes e retorna para a variavel
// importe resaltar que para ele funcionar, é necessario informar o tipo do ponteiro antes dele com parenteses e com isso, ser passado como valor para a variavel ponteiro do tipo informado, se caso de errado, ele retornara NULL
// um exemplo abaixo
#include <stdio.h>
#include <stdlib.h> // biblioteca para utilização da função malloc

int main(){
    int tamanho,*vetor;
    //acima a declaração do ponteiro do tipo int, *vetor

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    vetor = (int*) malloc(tamanho * sizeof(int));
    // acima o processo com malloc, como dito acima, ele recebe o tamanho em bytes, nesse caso, ele recebe o tamanho informado pelo usuario e multiplicar com sizeof(int), sizeof() é uma outra função que retornara nesse caso o tamanho de bytes do tipo int definido pelo SO, então considerado que o tamanho de bytes do tipo int é 4 e o valor do tamanho informado pelo usuario seja 10, o resultado sera 40, logo esse 40 que é 40 bytes é o tamanho da variavel vetor se o processo com malloc dê certo
    // após esse calculo, o resultado será convertido adequadamente pelo tipo da variavel com asteristico, nesse caso, como a variavel vetor é do tipo inteiro, sera int* entre parenteses como visto na linha, (int*)
    // por fim, se caso deu tudo certo, agora a variavel ponteiro(vetor) tem o tamanho definido pela variavel tamanho, ou seja, se caso o usuario tenha informado o valor da variavel tamanho como 10, logo, vetor tem 10 de espaço para armazenar 10 numeros do tipo int. agora se caso não deu certo, vetor estara com o valor NUll, isso ocorre quando não a memoria o suficiente ou algum erro de logica ou outros motivos
    //abaixo, o tratamento se caso a alocação dinâmica com vetor não tenha dado certo, isso é extremamente importante para que o programar não prossiga com a variavel cujo não processou corretamente como queriamos
    if(vetor == NULL){
        printf("Erro na alocação Dinâmica");
        return 1; // return 1, de modo simples, significar que o programar encerrara com um erro
    }

    // agora com um vetor alocado dinamicamente, sera preenchido seus espaços com um laço, para exemplo
    for(int i = 0;i <= tamanho; i++){ 
        vetor[i] = i;
        printf("Resultado: %d\n",vetor[i]);
    }

    //por fim, ao final do programar, é importante liberar o espaço na memoria ja que ela não sera mais utilizada, para isso, utilize free() passando como parametro, a variavel ponteiro alocada dinamicamente, como abaixo
    free(vetor);
    vetor = NULL;
    // acima é uma boa pratica, para que o ponteiro seja zerado logo apos a liberação da memoria
    return 0;
}