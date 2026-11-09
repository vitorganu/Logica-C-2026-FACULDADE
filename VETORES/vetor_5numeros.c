/******************************************************************************

Crie um programa em C que:
• Declare um vetor de tamanho 5 para armazenar números inteiros.
• Solicite ao usuário que insira 5 valores inteiros e armazene esses valores no vetor.
• Calcule a soma de todos os valores do vetor.
• Exiba todos os elementos do vetor, um por linha, e depois exiba a soma total dos valores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numeros[4];
    int soma = 0;
    
    for(int i = 0;i<=4;i++){
        printf("Digite um numero para ocupar a posição %d:", i);
        scanf("%d", &numeros[i]);
        
        soma += numeros[i];
    }
    
    for(int i = 0;i<=4;i++){
        printf("\nO numero que esta na posição %d é %d", i, numeros[i]);
    }
    printf("\nA soma dos 5 Vetores é %d", soma);
}