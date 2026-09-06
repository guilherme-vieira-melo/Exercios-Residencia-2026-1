#include <stdio.h>
int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = num1 * num2;

    printf("O resultado da multiplicacao e: %d\n", resultado);

    return 0;
}