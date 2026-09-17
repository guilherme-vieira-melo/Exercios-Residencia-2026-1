#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    printf("Maior valor: %d\n", maior);
    return 0;
}
