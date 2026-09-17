#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiros: ");
    scanf("%d", &valor);
    if (valor >= 0) printf("%d\n", valor);
    else printf("%d\n", -valor);
    return 0;
}
