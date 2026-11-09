/******************************************************************************

Crie um programa em C que:
• Solicite ao usuário o valor da sua hora de trabalho e a quantidade de horas trabalhadas
no mês.
• Calcule o salário bruto utilizando a função calcular_salario_bruto().
• Calcule o desconto de 9% sobre o salário bruto utilizando a função calcular_desconto().
• Calcule o salário líquido utilizando a função calcular_salario_liquido(), que deve subtrair o
desconto do valor bruto.
• Exiba o salário bruto, o desconto e o salário líquido ao usuário.


*******************************************************************************/
#include <stdio.h>

// Funcao para calcular o salario bruto
float calcular_salario_bruto(float valor_hora, float horas_trabalhadas) {
    return valor_hora * horas_trabalhadas;
}

// Funcao para calcular o desconto de 9%
float calcular_desconto(float salario_bruto) {
    return salario_bruto * 0.09;
}

// Funcao para calcular o salario liquido
float calcular_salario_liquido(float salario_bruto, float desconto) {
    return salario_bruto - desconto;
}

int main() {
    float valor_hora;
    float horas_trabalhadas;
    float salario_bruto;
    float desconto;
    float salario_liquido;

    // Entrada de dados
    printf("\nDigite o valor da hora trabalhada: R$ ");
    scanf("%f", &valor_hora);

    printf("\nDigite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    // Realizacao dos calculos
    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);
    desconto = calcular_desconto(salario_bruto);
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    // Exibicao dos resultados
    printf("\n===== RESULTADO DO SALARIO =====");
    printf("\nSalario bruto: R$ %.2f", salario_bruto);
    printf("\nDesconto (9%%): R$ %.2f", desconto);
    printf("\nSalario liquido: R$ %.2f", salario_liquido);

}