#include <stdio.h>

int main() {
    int v[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Soma: %d\n", soma);
    return 0;
}
