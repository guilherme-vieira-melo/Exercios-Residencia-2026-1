#include <stdio.h>

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
    return 0;
}
