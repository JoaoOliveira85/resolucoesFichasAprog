//
// Submetido por Gonçalo Melo (1211710@isep.ipp.pt) a 25/11/2022.
//

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
// Função para calcular a quota do condominio 
// Void pois não vai returnar nenhum valor visto que este é retornado por paramentro
void quotaCondominio(int *orcamentoAnual, int *permilagens, float *result)
{
    // formula para calcular
    *result = *orcamentoAnual * (*permilagens / 1000.00); // o * var com que acedemos ao valor que está no variavel para podemos fazer as contas com o valor desta
    
}


void main()
{
    int orcamentoAnual, permilagens; 
    float result;
    printf("Inserir o valor Orcamento anual:\t");
    scanf("%d",&orcamentoAnual);
    printf("Inserir o valor da Permilagens: \t");
    scanf("%d",&permilagens);
    // Funcao para calcular
    quotaCondominio(&orcamentoAnual,&permilagens,&result); // O & envia o endereço da variavel

    printf("Valor anual da cota de mercado quota do condomino:\t %.2f",result);
}