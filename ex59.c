#include <stdio.h>

int main() {
    int V[10], maior, pos = 0;
    printf("Digite 10 elementos:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &V[i]);
        if (i == 0 || V[i] > maior) {
            maior = V[i];
            pos = i;
        }
    }
    printf("Maior elemento: %d na posicao %d\n", maior, pos);
    return 0;
}
