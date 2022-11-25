//
// Submetido por Gonçalo Melo (1211710@isep.ipp.pt) a 25/11/2022.
//

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
// Função para calcular a quota do condominio 
// A função é em float por causa da variavel de retorno ser float
float quotaCondominio(int orcamentoAnual, int permilagens)
{
    float result ;//variavel float devido a ter uma divisão pode dar numeros fracionarios
    result = orcamentoAnual * (permilagens/1000.00); // formula para calcular

    return result;
}


void main()
{
    int orcamentoAnual, permilagens; 
    printf("Inserir o valor Orcamento anual:\t");
    scanf("%d",&orcamentoAnual);
    printf("Inserir o valor da Permilagens: \t");
    scanf("%d",&permilagens);
    
    printf("Valor anual da cota de mercado quota do condomino:\t %1.2f",quotaCondominio(orcamentoAnual,permilagens));
}