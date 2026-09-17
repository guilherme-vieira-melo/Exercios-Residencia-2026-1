#include <stdio.h>

int main() {
    int v[10], soma = 0, acima = 0;
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    float media = soma / 10.0;
    for (int i = 0; i < 10; i++) {
        if (v[i] > media) acima++;
    }
    printf("Media: %.2f | Elementos acima da media: %d\n", media, acima);
    return 0;
}
