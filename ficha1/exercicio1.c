/* 
Ficha #1 - Exercicio #1

"Algoritmo RestoDivisao" 
"ED : NUM, RESTO inteiro"
"Inicio"
"   Escrever(‘Digite um número inteiro:’)"
"   Ler(NUM)"
"   RESTO<-NUM MOD 2"
"   Escrever(‘Resto=’,RESTO)"
"Fim"
*/

#include <stdio.h> // Importar stfdio.h para ter acesso ao scanf e printf

int main( void )
{
    int numero, resto; // Declarar as variaveis num e resto como inteiros. Não é
    // necessário iniciar as variáveis uma vez que o seu valor vai ser obtido 
    // scanf e do resultado da operação

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Armazenar o resto da divisão por dois na variável resto e imprimir 
    // esse resultado;
    resto = numero % 2;
    printf("Resto=%d.\n", resto);

    return 0; // Por convenção, o valor de retorno de main é 0 quando o programa
    // termina com sucesso
}
