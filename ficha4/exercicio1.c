/*
Ficha #4 - Exercicio #1

"a) Este programa tem como objetivo a leitura de três valores inteiros (horas, minutos e segundos) e a apresentação do
 resultado da soma desses valores em segundos. Para tal, o programa deve ler os valores e calcular a soma dos segundos,
 apresentando o resultado no ecrã."

*/


#include <stdio.h>

int conversao(int h, int m, int s)
{
    int seg;
    seg = h*3600+m*60+s;
    return seg;
}

/*
"b) Esta funcao recebe dois valores inteiros, um limite inferior e um limite superior, e solicita ao utilizador a
 introdução de um número inteiro entre esses limites sempre que o utilizador não o faça. A função deve devolver o número
 inteiro introduzido pelo utilizador."
*/

int leitura (int limiteInferior, int limiteSuperior) {
    int resultado; // A variável resultado é declarada mas não necessita ser inicializada uma vez que o valor é atribuido no scanf.

    // loop que é executado enquanto o valor introduzido pelo utilizador não estiver entre os limites.
    do {
        scanf("%i", &resultado); // A variável resultado é lida e atribuida ao valor introduzido pelo utilizador.

        if (resultado < limiteInferior || resultado > limiteSuperior) {
            // se o valor introduzido pelo utilizador não estiver entre os limites, é apresentada uma mensagem de erro a indicar entre quais limites o número introduzido se deve situar.
            printf("Valor invalido, por favor insira um valor entre %i e %i: ", limiteInferior, limiteSuperior);
        };
    } while (resultado < limiteInferior || resultado > limiteSuperior);

    return resultado; // A função devolve o valor introduzido pelo utilizador.
}

int main( void ) {
    int hor, min, seg, segundos;

    // as variáveis hor, min e seg são lidas e atribuidas aos valores introduzidos pelo utilizador. O recurso à função da stdlib 'scanf' foi substituida pela nossa função 'leitura' que verifica se o valor introduzido pelo utilizador está entre os limites.

    printf("Digite as horas: ");
    hor = leitura (0, 24);

    printf("Digite os minutos: ");
    min = leitura (0, 60);

    printf("Digite os segundos: ");
    seg = leitura (0, 60);

    // no final é feita a conversão dos valores introduzidos pelo utilizador para segundos e é apresentado o resultado no ecrã.

    segundos = conversao(hor,min,seg);
    printf("Total em segundos: %i \n", segundos);

    // por convenção o valor de retorno de uma função main é 0 quando esta termina sem erros.
    return 0;
}