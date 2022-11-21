/*
Ficha #4 - Exercicio #2

"Escreva um programa em linguagem C que calcule e mostre o N-ésimo número natural cuja soma dos seus algarismos seja
 igual a X."
"O cálculo da soma dos algarismos de um número deverá ser efetuado numa função específica."
"O valor N e X devem ser pedidos ao utilizador."

"Penso que a pergunta é um pouco ambígua mas vou assumir que o N-ésimo número natural é um número inteiro cuja soma dos
 algarismos individuais é igual a X."

Por exemplo: 22 é o 3º número natural cuja soma dos algarismos é igual a 4.

*/

#include <stdio.h> // a biblioteca stdio.h é necessária para a função printf e scanf.

// a função somaDeDigitos recebe um número inteiro e devolve a soma dos seus algarismos.

int somaDeDigitos(int numeroEscolhido) {
    int soma = 0; // a variável soma é declarada e inicializada a 0.

    // o loop é executado enquanto o número escolhido for maior que 0. Em cada iteração o número escolhido é dividido
    // por 10 e o resto da divisão é adicionado à soma.
    while (numeroEscolhido > 0) {
        // a variável soma é incrementada com o resto da divisão do número escolhido por 10.
        soma += numeroEscolhido % 10;
        // o número escolhido é dividido por 10.
        numeroEscolhido /= 10;
    }

    // a função devolve o valor da variável soma.
    return soma;
}

int main () {

    // as variáveis numeroDeIteracoes e numeroEscolhido são declaradas sem serem inicializadas uma vez que o seu valor
    // é atribuido no scanf.
    int numeroDeIteracoes; 
    int numeroEscolhido;

    // as variáveis combinacoesEncontradas e iteracao são declaradas e inicializadas a 0.
    int combinacoesEncontradads = 0;
    int iteracao = 0;

    // é solicitado ao utilizador que introduza o número de iterações.
    printf("Por favor introduza o numero de iteracoes desejadas: ");
    scanf("%i", &numeroDeIteracoes);

    // é solicitado ao utilizador que introduza o número desejado.
    printf("Por favor introduza o numero a ser comparado: ");
    scanf("%i", &numeroEscolhido);

    // o loop é executado enquanto o número de iterações for maior que o número de combinações encontradas. Escolhi um
    // loop while porque a execução do loop está dependente da realação do numero de iterações com o numero de
    // combinações encontradas e não com o numero da iteração.

    do {
        int somaTemporaria = somaDeDigitos(iteracao); // a variável somaTemporaria é declarada e
        // inicializada com o valor da função somaDeDigitos com o numero da iteração atual como parâmetro.

        if (somaTemporaria == numeroEscolhido) {
            // se a soma temporária for igual ao número escolhido, o número de combinações encontradas é incrementado
            // em 1 e o utilizador é informado do número da combnação e do valor cuja soma dos algoritmos corresponde ao
            // número escolhido pelo utilizador.
            combinacoesEncontradads++;
            printf("Combinacao valida #%i: %i\n", combinacoesEncontradads, iteracao);
        }
        // o número da iteração é incrementado em 1.
        iteracao++;
    } while (numeroDeIteracoes != combinacoesEncontradads);

    // por convenção o valor de retorno de uma função main é 0 quando esta termina sem erros.
    return 0;
}