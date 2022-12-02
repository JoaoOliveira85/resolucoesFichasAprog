/// CAMPEONATO

/// Teste de Algoritmia e Programação
/// Dezembro de 2022

/// NOME   :
/// Número :

#include <stdio.h>
#include <stdlib.h>

/// função para baralhar um vetor de carateres
void baralharvetor(char v[], int n)
{
    int p; char k;
    for(int i=n-1;i>0;i--)
    {
        p=rand()%(i+1);              // à sorte entre 0 e i
        k=v[p]; v[p]=v[i]; v[i]=k;   // troca i com p
    }
}

/// a)
/// Escreva uma função para escrever um vetor de carateres v
/// (de n elementos) separados por um espaço.

char* converterVetorParaString(char *vetor, int tamanhoDoVetor) {
    char stringConvertido[tamanhoDoVetor * 2 - 1];
    for (int i = 0; i < tamanhoDoVetor; i++) {
            *(stringConvertido + (2 * i)) = *(vetor + i ); 
            *(stringConvertido + (2 * i + 1)) = ' ';   
    }
    
    return stringConvertido;
}

/// b)
/// Escreva uma função que recebe um vetor de carateres v
/// e a respetiva quantidade de elementos n e roda o vetor v
/// 1 casa para a esquerda mantendo a posição 0 fixa.
/// Exemplo: recebendo v = [ A B C D E ] deve alterá-lo
///   de forma a ficar v = [ A C D E B ] (A mantém-se, o resto roda)

void rodarVetor(char *vetor, int tamanhoDoVetor) {
    for (int i = 0; i < tamanhoDoVetor; i++) {
        *(vetor + tamanhoDoVetor - (i % tamanhoDoVetor)) = *(vetor + tamanhoDoVetor - ((i + 1) % tamanhoDoVetor));
    }
    *(vetor + tamanhoDoVetor) = '\0';
}

/// Um campeonato com n equipas tem (n-1)*2 jornadas.
/// O sorteio de um campeonato processa-se da seguinte forma
/// (exemplo para 8 equipas):
/// Tendo o vetor das equipas:
/// [ A B C D E F G H ]
/// Colocam-se as equipas por ordem aleatória:
/// [ B C H G A F E D ]

/// Determinam-se os jogos da 1ª jornada.
/// Como se trata de uma jornada ímpar,
/// a primeira metade das equipas (B, C, H e G) joga em casa:
/// o 1º com o último, o 2º com o penúltimo, ...
/// BxD  CxE  HxF  GxA (jogos jornada 1)
///
/// Rodam-se as equipas uma posição, exceto a primeira (pos 0) que se mantém:
/// [ B H G A F E D C ]  (B mantém-se na pos 0 e as outras rodam)
///
/// Determinam-se os jogos da 2ª jornada:
/// Como se trata de uma jornada par,
/// a primeira metade das equipas (B, H G e A) joga fora:
/// o último com o 1º, o penúltimo com o 2º, ...
/// CxB  DxH  ExG  FxA   (jogos jornada 2)
///
/// Rodam-se as equipas uma posição, exceto a primeira (pos 0) que se mantém:
/// [ B G A F E D C H ]  (B mantém-se na pos 0 e as outras rodam)
///
/// Determinam-se os jogos da 3ª jornada:
/// Como se trata de uma jornada ímpar,
/// a primeira metade das equipas (B, G, A e F) joga em casa:
/// o 1º com o último, o 2º com o penúltimo, ...
/// BxH  GxC  AxD  FxE
/// ...
/// E assim sucessivamente até obter os jogos das (n-1)*2 jornadas.

/// c)
/// Escreva uma função 'escreverjornada' que recebe:
///  - um vetor de carateres v correspondente à jornada em questão
///  - o respetivo número de elementos n
///  - o número da jornada j
/// e escreve no ecran todos os n/2 jogos da jornada j do campeonato
/// Exemplo para jornada par:
/// Recebendo v = [ B H G A F E D C ], n=8 e j=2 deve escrever:
/// Jornada  2 :    j1 : C * B      j2 : D * H      j3 : E * G      j4 : F * A

/// Exemplo para jornada ímpar:
/// Recebendo v = [ B H G A F E D C ], n=8 e j=9 deve escrever:
/// Jornada  9 :    j1 : B * C      j2 : H * D      j3 : G * E      j4 : A * F

// uma função escreverJornada que recebe um vetor com n equipas, o número das equipas e o número da jornada. A funçãi escreve no ecrã o número da jornada e os jogos da jornada. Em cada jornada par jogam as equipas que estão na primeira metade do vetor fora e em cada jornada ímpar jogam as equipas que estão na primeira metade do vetor em casa. A função deve imprimir o resultado no formato "Jornada 1: j1: A * B j2: C * D j3: E * F j4: G * H" (sem aspas).

void escreverJornada(char *vetor, int tamanhoDoVetor, int numeroDaJornada) {
    printf("Jornada %2d: ", numeroDaJornada);
    for(int i = 0; i < tamanhoDoVetor / 2; i++) {
        if(numeroDaJornada % 2 == 0) {
            printf("      j%d : %c * %c ", i + 1, *(vetor + (tamanhoDoVetor - 1 - i)), *(vetor + i));
        } else {
            printf("      j%d : %c * %c ", i + 1, *(vetor + i), *(vetor + (tamanhoDoVetor - 1 - i)));
        }
    }
    printf("\n");
}

int main()
{
    char v[8] = {'A','D','G','B','E','F','H','C'};
    int n=8;

    /// d)
    /// Escreva a função main que
    /// escreva no ecran as (n-1)*2 jornadas de um campeonato

    /// Exemplo do que deve ser escrito:

    /// Ordem sorteada: A D G B E F H C

    printf("Ordem sorteada: %s\n", converterVetorParaString(v, n));

    for (int i = 0; i < (n - 1) * 2; i++) {
        escreverJornada(v, n, i + 1);
        rodarVetor(v, n);
    }


/// Jornada  1 :    j1 : A * C      j2 : D * H      j3 : G * F      j4 : B * E
/// Jornada  2 :    j1 : H * A      j2 : F * C      j3 : E * D      j4 : B * G
/// Jornada  3 :    j1 : A * F      j2 : H * E      j3 : C * B      j4 : D * G
/// Jornada  4 :    j1 : E * A      j2 : B * F      j3 : G * H      j4 : D * C
/// Jornada  5 :    j1 : A * B      j2 : E * G      j3 : F * D      j4 : H * C
/// Jornada  6 :    j1 : G * A      j2 : D * B      j3 : C * E      j4 : H * F
/// Jornada  7 :    j1 : A * D      j2 : G * C      j3 : B * H      j4 : E * F
/// Jornada  8 :    j1 : C * A      j2 : H * D      j3 : F * G      j4 : E * B
/// Jornada  9 :    j1 : A * H      j2 : C * F      j3 : D * E      j4 : G * B
/// Jornada 10 :    j1 : F * A      j2 : E * H      j3 : B * C      j4 : G * D
/// Jornada 11 :    j1 : A * E      j2 : F * B      j3 : H * G      j4 : C * D
/// Jornada 12 :    j1 : B * A      j2 : G * E      j3 : D * F      j4 : C * H
/// Jornada 13 :    j1 : A * G      j2 : B * D      j3 : E * C      j4 : F * H
/// Jornada 14 :    j1 : D * A      j2 : C * G      j3 : H * B      j4 : F * E


    getchar();
    return 0;
}
