#include <stdio.h>

int main() {
    int K, N, resultado = 1;
    printf("Digite os valores de K e N: ");
    scanf("%d %d", &K, &N);
    for (int i = 0; i < N; i++) resultado *= K;
    printf("%d elevado a %d = %d\n", K, N, resultado);
    return 0;
}
