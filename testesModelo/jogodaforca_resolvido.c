/// JOGO DA FORCA

/// Teste de Algoritmia e Programação
/// Dezembro de 2022

/// NOME   :
/// Número :

#include<stdio.h>

/// a)
/// Escreva uma função 'escreverVetor' para escrever os elementos
/// de um vetor de n carateres.
//  Exemplo:                 se v = {'c','o','m','p','u','t','a','d','o','r'}
//                           deve escrever "computador" (sem aspas) e com um ENTER no fim.
void escreverVetor(char *vetor, int tamanhoDoVetor) {
    for (int i = 0; i < tamanhoDoVetor; i++) {
        printf("%c", *(vetor + i));
    }
    printf("\n");
}


/// b)
/// Escreva uma função 'compararVetores' que recebe 2 vetores de n carateres
/// e devolve 1 se os vetores forem iguais e 0 caso contrário.
int compararVetores(char *vetor1, char *vetor2, int tamanhoDoVetor) {
    for (int i = 0; i < tamanhoDoVetor; i++) {
        if (*(vetor1 + i) != *(vetor2 + i)) {
            return 0;
        }
    }
    return 1;
}



/// c)
/// Escreva uma função 'revelaCarater' que recebe 2 vetores
/// v e u de n carateres e ainda um carater c.
/// A função deve colocar no vetor o carater c nas posições do vetor u onde no vetor v
/// estiver o carater c
//  Exemplo:                 se v = {'c','o','m','p','u','t','a','d','o','r'}
//                            e u = {'-','-','-','-','-','-','-','-','-','-'}
//                            e n = 10
//                            e c = 'o'
//            deve alterar u para : {'-','o','-','-','-','-','-','-','o','-'}
void revelaCarater(char *vetor, char *vetor2, int tamanhoDoVetor, char caracter) {
    for (int i = 0; i < tamanhoDoVetor; i++) {
        if (*(vetor + i) == caracter) {
            *(vetor2 + i) = caracter;
        }
    }
}


int main()
{
    /// d)
    /// Complete o código abaixo de modo a jogar o jogo da forca com a palavra "banana"
    //  Exemplo do output pretendido:
    //  ------
    //  Introduza um carater : a
    //  -a-a-a
    //  Introduza um carater : x
    //  -a-a-a
    //  Introduza um carater : n
    //  -anana
    //  Introduza um carater : c
    //  -anana
    //  Introduza um carater : b
    //
    //  Acertou! :


    char palavra[6]={'b','a','n','a','n','a'};
    char mascara[6]={'-','-','-','-','-','-'};
    int tamanhoDaPalavra=6;
    char caracterInserido;

    while (compararVetores(palavra,mascara,tamanhoDaPalavra)==0) {
        escreverVetor(mascara,tamanhoDaPalavra);
        printf("Introduza um carater : ");
        scanf(" %c",&caracterInserido);
        revelaCarater(palavra,mascara,tamanhoDaPalavra,caracterInserido);
    }

    escreverVetor(mascara,tamanhoDaPalavra);
    printf("Acertou! :\n");

    // while ( xxxxxx )
    // {
    //    xxxxxx ;
    //    printf("Introduza um carater : ");
    //    scanf("%c%*c",&c); // comando para ler um carater do teclado
    //    xxxxxx ;
    // }
    // xxxxxx;

    getchar();
    return 0;
}
