// Alocação dinâmica em c nos permitir alocar memoria em tempo de execuçâo, por exemplo, uma variavel de determinado tamanho pode ser modificada para ter mais ou menos tamanho, diferente da alocação estática, onde a variavel teria um tamanho fixo do inicio ao fim do programar quando declarada. com a diferença tambem que a dinâmica utilizar e precisar de ponteiros, diferente da estática que é opcional. para esse tipo de alocação, sera usado um vetor de exemplo
// um dos metodos para utilizar a alocação dinâmica é o calloc
// o calloc no modo utilizado aqui, recebera dois parametros, o primeiro é o tamanho da variavel, e o segundo o tamanho do tipo da variavel com sizeof(). sizeof() é uma outra função que retornara o tamanho de determinado tipo de dado em bytes, assim não sera necessario o conhecimento do tamanho do tipo de dado pos sizeof() ja faz esses trabalho. logo apos esse processo, a variavel que recebe calloc tera o tamanho correspondente ao primeiro parametro e ja prrenchido com valores dependendo do tipo da variavel, pode ser desde 0 se for int ou ate uma string vazia se for char
// importe resaltar que para ele funcionar, é necessario informar o tipo do ponteiro antes dele com parenteses e com isso, ser passado como valor para a variavel ponteiro do tipo informado, se caso der errado, ele retornara NULL
// um exemplo abaixo
#include <stdio.h>
#include <stdlib.h> // biblioteca para utilização da função calloc

int main(){
    int tamanho,*vetor;
    //acima a declaração do ponteiro do tipo int, *vetor

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho);
    vetor = (int*) calloc(tamanho,sizeof(int));
    // acima o processo com calloc, como dito nos comentarios acima, ele recebe o tamanho que tera o vetor que nesse caso o usuario ira informar, e o segundo parametro é o sizeof() passando o tipo da variavel ponteiro, para que assim, ele retorne corretamente o tamanho do tipo de dados para a função. apos esse processo, a esquerda de calloc estara novamente o tipo de dado dessa vez com asteristico e entre aspas(int*) para garantir a conversão que enfim sera atribuido a variavel vetor para ter seu tamanho de memoria alocado dinamicamente
    // se o processo com calloc tenha dado erro seja por falta de memoria ou erro de logica ou outros motivos, a variavel vetor estara com valor NULL
    //abaixo, o tratamento se caso a alocação dinâmica com vetor não tenha dado certo, isso é extremamente importante para que o programar não prossiga com a variavel cujo não processou corretamente como queriamos
    if(vetor == NULL){
        printf("Erro na alocação Dinâmica");
        return 1; // return 1, de modo simples, significar que o programar encerrara com um erro
    }

    // agora com um vetor alocado dinamicamente, sera mostrado o que ele contem, lembre-se que calloc sempre preenche os espaços com algum dado dependendo do tipo da variavel, desde 0 para int ou um espaço vazio para char
    for(int i = 0;i <= tamanho; i++){ 
        printf("Resultado: %d\n",vetor[i]);
    }

    //por fim, ao final do programar, é importante liberar o espaço na memoria ja que ela não sera mais utilizada, para isso, utilize free() passando como parametro, a variavel ponteiro alocada dinamicamente, como abaixo
    free(vetor);
    vetor = NULL;
    // acima é uma boa pratica, para que o ponteiro seja zerado logo apos a liberação da memoria
    return 0;
}