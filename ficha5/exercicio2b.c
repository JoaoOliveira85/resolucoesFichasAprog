/*
 Ficha 5 - Exercicio 2

 Escreva um algoritmo que leia e mostre um vetor de n elementos inteiros. A seguir, conte quantos valores pares existem
 no vetor. O valor de n deve ser validado por forma a garantir que seja sempre positivo e esteja no intervalo 1<n<=100.
*/

// Aparentemente eu não percebi bem o enunciado do problema e implementei uma solução desnecessariamente complexa. 
// Ainda assim era uma pena deitar este código ao lixo por isso deixo aqui para o caso de alguém querer consultar outra 
// forma de abordar este problema com funcionalidades adicionais como validação de input, geração de números 
// aleatórios, ou operação de salto entre blocos de instruções entre outras coisas. Acho também que os limite são uma 
// boa forma de exemplificar um bom caso de uso de constantes globais.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int LIMITE_MINIMO = 1;
const int LIMITE_MAXIMO = 100;


enum boolean {
        false,
        true
};

enum boolean validarNumero (int numero) {
    return numero >= LIMITE_MINIMO && numero <= LIMITE_MAXIMO;
}

enum boolean validarSeNumeroEPar(int numero) {
    return numero % 2 == 0;
}

void popularVectorAleatoriamente(int *vector, int tamanho) {
    srand (time(NULL));

    for (int i = 0; i < tamanho; i++) {
        *(vector + i) = rand() % LIMITE_MAXIMO;
    }
}

void popularVectorManualmente(int *vector, int tamanho) {
    int numero;

    for (int i = 0; i < tamanho; i++) {
        printf("Insira o número %i: ", i + 1);
        scan:
        if (scanf("%i", &numero) != 1) {
            printf("Por favor insira somente números.\n");
            fflush(stdin);
            goto scan;
        } else if (numero < 0) {
            printf("Por favor insira somente núnmeros positivos.\n");
            goto scan;
        }
        *(vector + i) = numero;
    }
}

int main (void) {

    int numeroSelecionado;
    enum boolean numeroValido = false;

    scan:
    printf("Selecione um número entre %i e %i: ", LIMITE_MINIMO, LIMITE_MAXIMO);
    do {
        if (scanf("%i", &numeroSelecionado) != 1) {
            printf("\033[0;31m");
            printf("Por favor insira somente núnmeros!\n");
            printf("\033[0m");
            fflush(stdin);
            goto scan;
        }
        numeroValido = validarNumero(numeroSelecionado);
        if (!numeroValido) {
            printf("\033[0;31m");
            printf("Numero invalido!\n");
            printf("\033[0m");
            printf("Por favor selecione um número entre");
            printf("\033[0;36m");
            printf(" %i ", LIMITE_MINIMO);
            printf("\033[0m");
            printf("e ");
            printf("\033[0;36m");
            printf("%i", LIMITE_MAXIMO);
            printf("\033[0m");
            printf(": ");
            fflush(stdin);
        }
    } while (!numeroValido);

    int vectorDeNumeros[numeroSelecionado];

    char selecao;
    printf("Pretender que o vetor seja prenchido aleatoriamente ou manualmente?\n(A)leatoriamente;\n(M)anualmente;\n");

    input_selecao:
    scanf(" %c", &selecao);
    switch (selecao) {
        case 'a':
        case 'A':
            popularVectorAleatoriamente(vectorDeNumeros, numeroSelecionado);
            break;

        case 'm':
        case 'M':
            popularVectorManualmente(vectorDeNumeros, numeroSelecionado);
            break;

        default:
            printf("\033[0;31m");
            printf("Opção invalida!\n");
            printf("\033[0m");
            printf("Por favor selecione");
            printf("\033[0;36m");
            printf(" a ");
            printf("\033[0m");
            printf("para automático ou ");
            printf("\033[0;36m");
            printf("m");
            printf("\033[0m");
            printf(" para manual: ");
            goto input_selecao;
    }

    int numerosPares = 0;
    int vectorDeNumerosPares[numeroSelecionado];
    for (int i = 0; i < numeroSelecionado; i++) {
        if (validarSeNumeroEPar(vectorDeNumeros[i])) {
            vectorDeNumerosPares[numerosPares] = vectorDeNumeros[i];
            numerosPares++;
        }
        if (selecao == 'a'){
            printf("Número %i: ", i + 1);
            if (validarSeNumeroEPar(vectorDeNumeros[i])) {
                printf("\033[0;39m");
            } else {
                printf("\033[0;37m");
            }
            printf("%i\n", vectorDeNumeros[i]);
            printf("\033[0m");
        }
    }

    printf("Números pares: ");
    for (int i = 0; i < numerosPares; i++) {
        printf("%i", vectorDeNumerosPares[i]);
        if (i == numerosPares - 1) {
            printf(".\n");
        } else {
            printf(", ");
        }
    }

    printf("Total de números pares: %i \n", numerosPares);

    return 0;
}