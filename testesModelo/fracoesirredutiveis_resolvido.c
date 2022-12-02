/// FRAÇÔES IRREDUTÌVEIS

/// Teste de Algoritmia e Programação
/// Dezembro de 2022

/// NOME   :
/// Número :

#include<stdio.h>
#include<math.h>

/// a)
/// Escreva uma função que recebe dois inteiros positivos,
/// calcula e devolve o seu máximo divisor comum.
/// Exemplo mdc(6,9) resulta 3

int maximoDivisorComum(int numero1, int numero2)
{
    if (numero1 < 0) {
        numero1 = -numero1;
    }

    if (numero2 < 0) {
        numero2 = -numero2;
    }

    int restoDaDivisao;
    while (numero2 != 0)
    {
        restoDaDivisao = numero1 % numero2;
        numero1 = numero2;
        numero2 = restoDaDivisao;
    }

    return numero1;
}

/// b)
/// Escreva uma função 'fracaoirredutivel' que recebe:
///  - o numerador n de uma fração (inteiro)
///  - o denominador d de uma fração (inteiro)
/// E devolve dois inteiros ni e di (por referência) de forma a que:
/// ni/di = n/d e ni/di seja uma fração irredutível
/// Exemplo: se n=12 e d=9 deve resultar ni=4 e di=3, pois
/// 4/3 é a fração irredutível que tem o mesmo valor de 12/9.

void fracaoirredutivel(int *n, int *d)
{
    int mdc = maximoDivisorComum(*n, *d);
    *n = *n / mdc;
    *d = *d / mdc;
}

/// c)
/// Escreva uma função 'numeradoresirredutiveis' que recebe um inteiro d
/// representando o denominador de uma fração
/// e preenche um vetor com todos possíveis numeradores n de forma
/// a que n/d seja uma fração irredutível e n/d < 1
/// Deve devolver a quantidade de elementos do vetor.
/// Exemplo: se n=9, o vetor fica [ 1 2 4 5 7 8 ] e a função devolve 6.

int numeradoresirredutiveis(int d, int v[])
{
    int quantidadeDeNumeradoresIrredutiveis = 0;
    for (int n = 1; n < d; n++)
    {
        if (maximoDivisorComum(n, d) == 1)
        {
            v[quantidadeDeNumeradoresIrredutiveis] = n;
            quantidadeDeNumeradoresIrredutiveis++;
        }
    }

    return quantidadeDeNumeradoresIrredutiveis;
}

int main()
{

    /// d)
    /// Escreva o código que, usando as funções anteriores, escreva
    /// todas as frações irredutíveis n/d em que n/d < 1 e d <= 10
    /// O que deve ser escrito é:
    /// 1/2
    /// 1/3 2/3
    /// 1/4 3/4
    /// 1/5 2/5 3/5 4/5
    /// 1/6 5/6
    /// 1/7 2/7 3/7 4/7 5/7 6/7
    /// 1/8 3/8 5/8 7/8
    /// 1/9 2/9 4/9 5/9 7/9 8/9
    /// 1/10 3/10 7/10 9/10

    for (int d = 2; d <= 10; d++)
    {
        int vetor[10];
        int quantidadeDeNumeradoresIrredutiveis = numeradoresirredutiveis(d, vetor);
        for (int i = 0; i < quantidadeDeNumeradoresIrredutiveis; i++)
        {
            printf("%d/%d ", vetor[i], d);
        }
        printf("\n");
    }
    

    getchar();
    return 0;
}
