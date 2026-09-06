// todo programar feito na linguagem c, tem a extensão de arquivo .c

#include<stdio.h>
// acima esta a biblioteca padrão de entrada e saida na linguagem c, sem ela, não seria possivel imprimir alguma mensagem pelo terminal

//abaixo esta a funcao principal da linguagem, onde int significar o tipo de retorno da função, no caso de int, tipo inteiro, main significar o nome da função, no caso principal, ou seja, a função principal ira da um retorno do tipo int
// os parenteses são necessarios para qualquer função e as vezes metodos, tendo parametros ou não, no caso da função abaixo, como ela não tem parametros, ou seja, não esperar dado nenhum para trabalhar, basta abrir e fechar parenteses em seguida do nome da função
// por fim, apos os parenteses, tem as chaves, o conteudo dentro das chaves é o bloco de comandos que a função ira executar
int main(){

    printf("Ola mundo\n");
    // acima esta um metodo que recebi uma frase, veja que como a frase esta sendo recebida de forma direta pelo metodo, ela tem que esta entre aspas duplas, isso vale para qualquer frase com duas ou mais letras
    // printf é o metodo que vem da biblioteca #include<stdio.h>, ela trabalhar na saida dos dados, ou seja, ela recebe um dado que no caso acima, é uma frase("Ola mundo") e é exibido na tela pelo terminal, em outras palavras, faz a saida do dado pelo terminal
    // a parte "\n" que printf esta recebendo, nada mais faz que pula uma linha quando printf é executado na tela, existe outros comandos com barra invertida como \t que faz uma tabulação(espaçamento)
    // note tambem o ponto e virgula no final, em c, na maioria das vezes eles são necessarios, pois eles representam o fim de um metodo ou função

    // abaixo esta a parte final da função, o fim do bloco de comandos
    // return significar retorno, lembre-se que int main deve retorna um tipo inteiro por conta do int, e return faz esse retorno, o que ele retorna abaixo é 0, 0 nesse caso significar que o programar está ok, mas se fosse outro numero inteiro, o significado poderia mudar.
    return 0;
}

// enfim, um programar em linguagem c que apenas exibira uma mensagem, "Ola mundo"