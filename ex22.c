#include <stdio.h>

int main() {
    int a, b, op;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Escolha a operacao (1-Adicao, 2-Subtracao, 3-Divisao, 4-Multiplicacao): ");
    scanf("%d", &op);

    switch(op) {
        case 1: printf("Resultado: %d\n", a + b); break;
        case 2: printf("Resultado: %d\n", a - b); break;
        case 3: 
            if (b != 0) printf("Resultado: %.2f\n", (float)a / b);
            else printf("Erro: Divisao por zero!\n");
            break;
        case 4: printf("Resultado: %d\n", a * b); break;
        default: printf("Operacao invalida!\n");
    }
    return 0;
}
