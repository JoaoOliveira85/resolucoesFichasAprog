/*
Ficha 5 - Exercicio 4

Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, 
troque o primeiro elemento com o último, o segundo com o penúltimo, o 
terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor 
depois da troca.
*/

#include <stdio.h>

const int NUMERO_DE_ELEMENTOS = 20;

void trocaDeElementos(int *vetor) {
    for (int i = 0; i < (NUMERO_DE_ELEMENTOS / 2); i++) {
        int swap = *(vetor + i);
        *(vetor + i) = *(vetor + NUMERO_DE_ELEMENTOS - (i + 1));
        *(vetor + NUMERO_DE_ELEMENTOS - (i + 1)) = swap;
    }
};

int main (void) {
    int vectorDeNumeros[NUMERO_DE_ELEMENTOS];

    for (int i = 0; i < NUMERO_DE_ELEMENTOS; i++) {
        printf("Por favor introduza o %iº valor: ", i + 1);
        scanf("%i", &vectorDeNumeros[i]);
    }

    printf("\nValores introduzidos: [");
    for (int i = 0; i < NUMERO_DE_ELEMENTOS; i++) {
        printf("%i", vectorDeNumeros[i]);
        if (i != NUMERO_DE_ELEMENTOS - 1) {
            printf(", ");
        } else {
            printf("].\n");
        }
    }

    trocaDeElementos(vectorDeNumeros);

    printf("Vector reordenado: [");
    for (int i = 0; i < NUMERO_DE_ELEMENTOS; i++) {
        printf("%i", vectorDeNumeros[i]);
        if (i != NUMERO_DE_ELEMENTOS - 1) {
            printf(", ");
        } else {
            printf("].\n");
        }
    }

    return 0;
};