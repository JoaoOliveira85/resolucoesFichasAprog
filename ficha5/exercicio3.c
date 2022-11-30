/*
Ficha #5 - Exercicio 3

Escreva um algoritmo que leia para um vetor, um conjunto de n valores inteiros (1<n<=50) e determine o elemento maior e o elemento menor desse vetor. O utilizador deve introduzir o valor n devendo ser repetida a operação enquanto aquele não estiver dentro dos limites pedidos.
*/

#include <stdio.h>
#include <stdlib.h>

const int LIMITE_MINIMO = 0;
const int LIMITE_MAXIMO = 50;
const int NUMERO_DE_ELEMENTOS = 10;

typedef enum {
    true,
    false
} bool;

bool validarNumero (int numero) {
    return numero >= LIMITE_MINIMO && numero <= LIMITE_MAXIMO;
};

int main (void) {
    int vectorDeNumeros[NUMERO_DE_ELEMENTOS];
    int numeroMaior = 0;
    int numeroMenor = 0;

    for (int i = 0; i < NUMERO_DE_ELEMENTOS; i++) {
        printf("Por favor introduza o %iº valor: ", i + 1);
        bool numeroEValido = false;
        do {
            scanf("%i", &vectorDeNumeros[i]);
            numeroEValido = validarNumero(vectorDeNumeros[i]);
            if (!numeroEValido) {
                printf("Numero inválido!\nPor favor introduza um número entre %i e %i: ", LIMITE_MINIMO, LIMITE_MAXIMO);
            };
        } while (!numeroEValido);
        if (vectorDeNumeros[i] > numeroMaior) {
            numeroMaior = vectorDeNumeros[i];
        } else if (vectorDeNumeros[i] < numeroMenor) {
            numeroMenor = vectorDeNumeros[i];
        }
    }

    printf("\nValores introduzidos: ");
    for (int i = 0; i < NUMERO_DE_ELEMENTOS; i++) {
        printf("%i", vectorDeNumeros[i]);
        if (i != NUMERO_DE_ELEMENTOS - 1) {
            printf(", ");
        } else {
            printf(".\n");
        }
    }

    printf("numero maior: %i\n", numeroMaior);
    printf("numero menor: %i\n", numeroMenor);



    return 0;
};