#include <stdio.h>

int main() {
    float salario, novo_salario;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario);

    // 25% de aumento é o mesmo que multiplicar por 1.25
    novo_salario = salario * 1.25;

    printf("O novo salario com aumento de 25%% é: R$ %.2f\n", novo_salario);

    return 0;
}
