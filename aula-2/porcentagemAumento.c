#include <stdio.h>

int main() {
    float salario, percentual, aumento, novo_salario;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    // Calcula o valor absoluto do aumento e o novo total
    aumento = salario * (percentual / 100);
    novo_salario = salario + aumento;

    printf("\n--- Resultado ---\n");
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novo_salario);

    return 0;
}
