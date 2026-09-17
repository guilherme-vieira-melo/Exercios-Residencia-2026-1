#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) soma += i;
    printf("Soma dos 100 primeiros inteiros: %d\n", soma);
    return 0;
}
