#include <stdio.h>

int main() {
    int soma = 0, qtd = 0;
    for (int i = 14; i <= 72; i += 2) {
        soma += i;
        qtd++;
    }
    printf("Media dos pares entre 13 e 73: %.2f\n", (float)soma / qtd);
    return 0;
}
