/*
Ficha #1 - Exercicio #4
Implementar o teorema de pitágoras para calcular a hipotenusa de um triângulo retângulo. O algoritmo deve ler os 
valores dos catetos e imprimir o valor da hipotenusa.

*/

#include <stdio.h>
#include <math.h>

int main( void )
{
    float cateto1, cateto2, hipotenusa; // Declarar as variaveis cateto1, cateto2 e hipotenusa como float. Não é 
    // necessário iniciar as variáveis uma vez que o seu valor vai ser obtido scanf e do resultado da operação

    // Solicitar ao utilizador que introduza os valores dos catetos
    printf("Digite o valor dos catetos: ");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); // Armazenar o valor da hipotenusa na variável hipotenusa
    printf("A hipotenusa é: %.3f.\n", hipotenusa); // Imprimir o valor da variável hipotenusa com três casas decimais

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa termina com sucesso
}