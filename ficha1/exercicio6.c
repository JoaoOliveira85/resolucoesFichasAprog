/*
Ficha #1 - Exercicio #6

"O cardápio de um restaurante numa praça de alimentação de um shopping é mostrado em abaixo. Proponha e descreva um 
algoritmo que leia a quantidade de cada item que um cliente consumiu e calcule a conta final.

a) Hambúrguer............. 3,00€
b) Cheeseburger ........ 2,50€
c) Batatas Fritas ............ 1,50€
d) Refrigerante ........... 1,10€
e) Milkshake................ 2,30€
f) Gelado ................... 2,50€"
*/

#include <stdio.h>

int main( void )
{
    int quantidade_hamburguer, quantidade_cheeseburger, quantidade_batatas_fritas, quantidade_refrigerante, 
    quantidade_milkshake, quantidade_gelado; // Declarar as variaveis necessarias como inteiros. Não é necessário 
    //iniciar as variáveis uma vez que o seu valor vai ser obtido scanf e do resultado da operação
    
    float conta_final; // Declarar a variável conta_final como float. Não é necessário iniciar a variável uma vez que o 
    //seu valor vai ser obtido do resultado da operação

    // Solicitar ao utilizador que introduza a quantidade de cada item consumido
    printf("Digite a quantidade de hambúrgueres consumidos: ");
    scanf("%d", &quantidade_hamburguer);
    printf("Digite a quantidade de cheeseburgers consumidos: ");
    scanf("%d", &quantidade_cheeseburger);
    printf("Digite a quantidade de batatas fritas consumidas: ");
    scanf("%d", &quantidade_batatas_fritas);
    printf("Digite a quantidade de refrigerantes consumidos: ");
    scanf("%d", &quantidade_refrigerante);
    printf("Digite a quantidade de milkshakes consumidos: ");
    scanf("%d", &quantidade_milkshake);
    printf("Digite a quantidade de gelados consumidos: ");
    scanf("%d", &quantidade_gelado);

    conta_final = quantidade_hamburguer * 3 + quantidade_cheeseburger * 2.5 + quantidade_batatas_fritas * 1.5 + 
    quantidade_refrigerante * 1.1 + quantidade_milkshake * 2.3 + quantidade_gelado * 2.5; // Armazenar o valor da 
    // conta final na variável conta_final
    
    printf("A conta final é: %.2f€.\n", conta_final); // Imprimir o valor da variável conta_final

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa termina com sucesso
}