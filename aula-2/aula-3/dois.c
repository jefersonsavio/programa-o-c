#include <stdio.h>
#include <math.h>   

main() {
    int quadrado, num;
    float raiz; printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num % 2==0) {
        raiz = sqrt(num);
        printf("O numero e par");
        printf("\nA raiz quadrada e %.3f", raiz);
    }else {
        quadrado = num * num;
        printf("O numero e impar");
        printf("\nO quadrado e %d", quadrado);
    }
}