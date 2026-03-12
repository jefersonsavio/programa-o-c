#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base e a altura do triangulo: ");
    scanf("%f %f", &base, &altura);
    
    area = (base * altura) / 2;
    printf("A area do triangulo e: %.2f\n", area);
    
    return 0;
}