/*Neste caso, queremos saber a quantidade mínima de convites para cobrir o custo.
 Note que usamos a biblioteca math.h com a função ceil para arredondar para cima,
  pois não se vende "meio convite".*/
  
#include <stdio.h>
#include <math.h> // Necessário para a função ceil (arredondar para cima)

int main() {
    float custo_teatro, preco_convite;
    int quantidade;

    printf("Digite o custo do espetaculo: R$ ");
    scanf("%f", &custo_teatro);
    printf("Digite o preco do convite: R$ ");
    scanf("%f", &preco_convite);

    // Divide o custo pelo preço e arredonda para cima para garantir que o custo seja alcançado
    quantidade = ceil(custo_teatro / preco_convite);

    printf("Voce precisa vender pelo menos %d convites para cobrir o custo.\n", quantidade);

    return 0;
}
