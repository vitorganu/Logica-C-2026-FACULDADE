/******************************************************************************

Crie um programa em C que solicite ao usuário três números inteiros e, em seguida, execute as
seguintes operações:
• Calcule a soma, subtração, multiplicação e divisão dos três números.
Público3
• Verifique, utilizando operadores relacionais, se o primeiro número é maior que o
segundo, e se o segundo é menor que o terceiro.
• Utilize operadores lógicos para verificar se o primeiro número é positivo e o segundo
número é par. Caso ambas as condições sejam verdadeiras, o programa deverá exibir
uma mensagem específica

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // variaveis
    int num1, num2, num3;
    float soma, subtracao, multiplicacao, divisao;
    float numeroMaior;
    
    // entrada de dados
    printf("\nDigite um Numero:");
    scanf("%d", &num1);
    
    printf("\nDigite um Numero:");
    scanf("%d", &num2);
    
    printf("\nDigite um Numero:");
    scanf("%d", &num3);
    
    // calculos
    soma = num1 + num2 + num3;
    subtracao = num1 - num2 - num3;
    multiplicacao = num1 * num2 * num3;
    divisao = num1 / num2 / num3;
    
    // Numero maior
    if(num1 < num2){
        numeroMaior = num2;
    }else if(num2 < num3){
        numeroMaior = num3;
    }else{
        numeroMaior = num1;
    }
    
    // Mensagem Especial
    if(num1 > 0 && num1 % 2 == 0){
        printf("\nMENSAGEM ESPECIAL! SEU NUMERO É POSITIVO E É PAR");
    }
    
    // Relatorio Final
    printf("\nA soma dos valores é: %.2f", soma);
    printf("\nA subtração dos valores é: %.2f", subtracao);
    printf("\nA multiplicação dos valores é: %.2f", multiplicacao);
    printf("\nA divisão dos valores é: %.2f", divisao);
}