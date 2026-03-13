#include <stdio.h>

int main() {
    float salario_base, salario_receber, imposto;

    printf("Digite o salario base: R$ ");
    scanf("%f", &salario_base);

    // O imposto é 10% do salário base
    imposto = salario_base * 0.10;
    
    // Cálculo final: Base + Gratificação - Imposto
    salario_receber = salario_base + 50.00 - imposto;

    printf("Gratificacao: R$ 50.00\n");
    printf("Imposto (10%%): R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", salario_receber);

    return 0;
}
