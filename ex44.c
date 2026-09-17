#include <stdio.h>

int main() {
    int val, soma = 0, qtd = 0;
    printf("Digite varios numeros positivos (negativo para encerrar):\n");

    while (1) {
        scanf("%d", &val);
        if (val < 0) break;
        soma += val;
        qtd++;
    }

    if (qtd > 0) {
        printf("Soma: %d | Media: %.2f\n", soma, (float)soma / qtd);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }
    return 0;
}
