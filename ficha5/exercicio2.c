/*
 Ficha 5 - Exercicio 2

 Escreva um algoritmo que leia e mostre um vetor de n elementos inteiros. A seguir, conte quantos valores pares existem
 no vetor. O valor de n deve ser validado por forma a garantir que seja sempre positivo e esteja no intervalo 1<n<=100.
 */

#include <stdio.h> // Incluir a biblioteca stdio.h para poder usar as funções printf e scanf

// Função que valida se o valor de um número está no intervalo 1<n<=100. A função recebe como parâmetro um número inteiro e retorna 1 se o número estiver no intervalo e 0 caso contrário.
int validarNumero (int numero) {
    return numero >= 1 && numero <= 100;
}

// Função que valida se o valor de um número é par. A função recebe como parâmetro um número inteiro e retorna 1 se o número for par e 0 caso contrário.
int validarSeNumeroEPar(int numero) {
    return numero % 2 == 0;
}

int main (void) {

    // Declarar as variáveis necessárias. numeroSelecionado é a variável que vai armazenar o número que o utilizador introduzir. numerosPares é a variável que vai armazenar o número de números pares que existem no vetor. vectorDeNumerosPares é o vetor que vai armazenar os números pares que o utilizador introduzir.
    int numeroSelecionado; // é apenas inicializada uma vez que o seu valor vai ser obtido através do scanf
    int numerosPares = 0; // é inicializada a 0 uma vez que o seu valor vai ser utilizado para iterar o vetor de números pares
    int numeroValido = 0; // é inicializada a 0 uma vez que o seu valor vai ser utilizado para validar o número introduzido pelo utilizador. Inicialmente vai ser 0 porque o número introduzido pelo utilizador ainda não foi validado

    // Ciclo que vai iterar até que o número introduzido pelo utilizador seja válido
    printf("Selecione um número entre 0 e 100: ");
    do {
        scanf("%i", &numeroSelecionado); // Ler o número introduzido pelo utilizador

        numeroValido = validarNumero(numeroSelecionado); // Validar o número introduzido pelo utilizador caso o número seja válido o ciclo vai terminar caso contrário vai iterar novamente e pedir para o utilizador introduzir um número válido
        if (!numeroValido) {
            printf("Numero invalido!\n");
            printf("Por favor selecione um número entre 0 e 100");
        }
    } while (!numeroValido);

    int vectorDeNumerosPares[numeroSelecionado]; // O vector é declarado com o tamanho do número introduzido pelo utilizador. O tamanho do vector é definido pelo utilizador uma vez que o número de números pares que o utilizador introduzir vai ser sempre inferior ao número de números que o utilizador introduzir

    // Ciclo que vai iterar até que o número introduzido pelo utilizador seja atingido. Em cada iteração o utilizador vai ser solicitado a introduzir um número e esse número vai ser validado. Caso o número seja válido vai ser adicionado ao vetor de números pares e o número de números pares vai ser incrementado em 1

    for (int i = 0; i < numeroSelecionado; i++) {
        int numero;
        printf("Insira o número %i: ", i + 1); // Pedir para o utilizador introduzir um número
        
        // Ler o número introduzido pelo utilizador e validar se o número é positivo. Se o número for negativo vai ser solicitado ao utilizador que introduza um número positivo
        do {
            scanf("%i", &numero);
            if (numero < 0) {
                printf("Por favor insira somente núnmeros positivos.\n");
            }
        } while (numero < 0);

        // Validar se o número é par. Se o número for par vai ser adicionado ao vetor de números pares e o número de números pares vai ser incrementado em 1
        if (validarSeNumeroEPar(numero)) {
            vectorDeNumerosPares[numerosPares] = numero; // Adicionar o número ao vetor de números pares
            numerosPares++; // Incrementar o número de números pares em 1 
        }
    }

    // Mostrar os números pares que existem no vetor
    printf("Números pares: ");
    for (int i = 0; i < numerosPares; i++) {
        printf("%i ", vectorDeNumerosPares[i]);
    }

    // Mostrar o número de números pares que existem no vetor
    printf("\nTotal de números pares: %i \n", numerosPares);

    return 0; // Por convenção a função main retorna 0 quando termina a sua execução com sucesso
}