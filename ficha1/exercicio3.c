/*
Ficha #1 - Exercicio #3

"Escreva um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias (ler três valores inteiros) e 
escreva a idade dessa pessoa expressa apenas em dias. Para facilitar os cálculos considerar um ano tem sempre 365 
dias e qualquer mês tem 30 dias."
*/

#include <stdio.h>

int main( void )
{
    int anos, meses, dias, idade_dias; // Declarar as variaveis anos, meses, dias e idade_dias como inteiros. Não é 
    // necessário iniciar as variáveis uma vez que o seu valor vai ser obtido scanf e do resultado da operação

    // Solicitar ao utilizador que introduza os valores da idade em anos, meses e dias
    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idade_dias = anos * 365 + meses * 30 + dias; // Armazenar o valor da idade em dias na variável idade_dias
    printf("A idade da pessoa em dias é: %d.\n", idade_dias); // Imprimir o valor da variável idade_dias

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa termina com sucesso
}