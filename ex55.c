#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &v[i]);
        if (i % 2 != 0) v[i] *= 5;
    }
    printf("Vetor resultante: ");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
