#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if (a == b) {
        printf("Eles sao iguais.\n");
    } else {
        printf("Eles sao diferentes.\n");
        printf("O maior e: %d\n", (a > b) ? a : b);
    }
    return 0;
}
