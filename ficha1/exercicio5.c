/*
Ficha #1 - Exercicio #5

"Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos.
O algoritmo deve calcular e escrever a percentagem que cada um dos valores representa em relação ao total de 
eleitores."
*/

#include <stdio.h>

int main( void )
{
    int total_eleitores, votos_brancos, votos_nulos, votos_validos; // Declarar as variaveis total_eleitores, 
    // votos_brancos, votos_nulos e votos_validos como inteiros. Não é necessário iniciar as variáveis uma 
    // vez que o seu valor vai ser obtido scanf e do resultado da operação

    // Solicitar ao utilizador que introduza os valores dos votos brancos, nulos e válidos
    printf("Digite o número total de eleitores: ");
    scanf("%d", &total_eleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votos_validos);

    // Imprimir o valor da percentagem de votos brancos, nulos e válidos em relação ao total de eleitores
    printf("A percentagem de votos brancos é: %.2f%%.\n", (float)votos_brancos / total_eleitores * 100);
    printf("A percentagem de votos nulos é: %.2f%%.\n", (float)votos_nulos / total_eleitores * 100);
    printf("A percentagem de votos válidos é: %.2f%%.\n", (float)votos_validos / total_eleitores * 100);

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa termina com sucesso
}