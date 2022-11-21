/*
Ficha #4 - Exercício #3

"Considere um programa em C constituído por várias funções"

Como este é o terceiro exercício achei pertinente implementar algumas optimizações mais simples.
*/

#include <stdio.h> // a biblioteca stdio.h é necessária para a função printf e scanf.
#include <math.h> // a biblioteca math.h é necessária para operações matemáticas como sqrt(), pow() e fabs().

// "a) Crie uma função que receba um valor e retorne se ele é positivo ou não."

int validarSePositivo (int numeroAserComparado) { // De forma geral e considerado boa pratica usar verbos para dar nomes
    // a funções e substantivos para nomes de variáveis.
    return numeroAserComparado >= 0; // O resultado duma comparação de igualdade é um inteiro 0 (falso) ou 1
    // (verdadeiro). Por isso pode-se colocar a operação que se pretende avaliar diretamente no retorno da função.
};

// "b) Crie uma função que receba um valor e retorne se é nulo ou não."

int validarSeNulo (int numeroAserComparado) {
    return numeroAserComparado == 0; // Mesmo que a funcao validarSePositivo().
};

// "c) Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau
// e retorne o valor do delta, que é dado por 'b2 – 4ac'"

int calcularDelta(float a, float b, float c) {
    return b * 2 - 4 * a * c; // Como o que nos interessa é o resultado desta operação matemática escusamos estar a
    // criar variáveis para armazenar o resultado que é retornado.
};

// "d) Usando obrigatoriamente as 3 funções acima, complete o programa por forma a calcular as raízes de uma equação do
// 2o grau: ax2 + bx + c=0"
// "Considere que para haver raízes, o coeficiente 'a' deve ser diferente de zero e caso o delta seja maior ou igual a
// zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas e da forma: x + iy"

int main (void) {
    float a; // Aqui declaramos as três variáveis correspondentes aos três coeficientes da função que se está a avaliar.
    // De forma geral desgosto usar nomes para variávies que sejam só uma letra porém neste caso acho que faz sentido
    // pois corresponde com o que se vería na equação. Neste caso as variáveis não são inicializadas pois o valor vai
    // ser solicitado no scanf.

    // Solicita-se ao utilizador que introduza o coeficiente de a;
    printf("Por favor introduza o valor de a: ");
    scanf("%f", &a);

    // Optei por colocar dois ifs encadeados porque se a for nulo é escusado estar a perder tempo a fazer mais coisas.
    if (validarSeNulo(a)) {
        printf("A equação não tem raízes reais.\n");
    } else {
        // Só vale a pena correr mais comandos se a for diferente de zero. Neste caso continuamos a solicitar os
        // restantes coeficientes;
        float b, c;

        printf("Por favor introduza o valor de b: ");
        scanf("%f", &b);

        printf("Por favor introduza o valor de c: ");
        scanf("%f", &c);

        // Como o valorDelta vai ser utilizado multiplas vezes na função faz sentido armazenar numa variável.
        int valorDelta = calcularDelta(a, b, c);

        // Aqui chegamos ao suminho do problema. Eu achei o enunciado um pouco confuso mas penso que essencialmente o
        // objetivo é avaliar se o coeficiente a é nulo pois nesse caso significa que não tem raízes reais.
        if (validarSePositivo (valorDelta)) { // caso seja diferente de 0 vamos verificar se o
            // valor de delta é positivo;

            // Se for positivo significa que temos uma ou mais raízes reais.
            float raizNeg = -b + sqrt(valorDelta) / (2 * a);
            float raizPos = -b - sqrt(valorDelta) / (2 * a);
            if (raizNeg == raizPos ) { // se as duas raízes forem iguais significa que temos uma raíz dupla.
                printf("A equação tem uma raiz dupla: %.2f.\n", fabs(raizPos));
            } else { // Caso contrário temos duas raízes distintas.
                printf("A equação tem duas raízes reais: %.2f e %.2f.\n", raizNeg, raizPos);
            }
        } else { // Se, no entanto, o valor de delta for negativo significa que temos uma raíz imaginária (porque, como
            // sabemos, não se podem ter raízes reais de índice pares para valores negativos).
            printf("A equação tem uma raiz imaginária: x + iy.\n");
        }}

    // por convenção o valor de retorno de uma função main é 0 quando esta termina sem erros.
    return 0;
};
