/*
"Algoritmo MISTERIO"
"ED : X1, X2, X3, NUM inteiro"
"Inicio"
"    Escrever(‘Digite três dígitos inteiros:’)"
"    Ler(X1,X2,X3)"
"    NUM<-X1"
"    NUM<-NUM*10 + X2 NUMNUM*10 + X3 Escrever(‘Resultado final:’, NUM)"
"Fim"

"a) Diga qual é o objetivo deste algoritmo"
O objetivo deste algoritmo é ler três números inteiros e imprimir o resultado da concatenação dos três números.
*/

#include <stdio.h>

int main( void )
{
    int x1, x2, x3, num; // Declarar as variaveis x1, x2, x3 e num como inteiros. Não é necessário iniciar as variáveis
    // uma vez que o seu valor vai ser obtido scanf e do resultado da operação

    // Solicitar ao utilizador que introduza três valores inteiros
    printf("Digite três dígitos inteiros: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    num = x1; // Armazenar o valor do primeiro digito na variável num
    num = num * 10 + x2; // multiplicar num por 10 e somar o valor do segundo digito
    num = num * 10 + x3; // multiplicar num por 10 e somar o valor do terceiro digito
    printf("Resultado final: %d.\n", num); // Imprimir o valor da variável num que contém à concatenação dos três digitos

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa termina com sucesso
}