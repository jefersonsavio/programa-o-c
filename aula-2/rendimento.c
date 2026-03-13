#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, valor_total;

    printf("Digite o valor do deposito: R$ ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);

    // Calcula o rendimento
    rendimento = deposito * (taxa / 100);
    
    // Soma o rendimento ao valor inicial
    valor_total = deposito + rendimento;

    printf("\nValor do rendimento: R$ %.2f\n", rendimento);
    printf("Valor total depois do rendimento: R$ %.2f\n", valor_total);

    return 0;
}
