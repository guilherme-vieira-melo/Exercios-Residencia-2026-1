#include <stdio.h>

int main() {
    int N, H = 0;
    printf("Digite N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) H += i;
    printf("Valor de H: %d\n", H);
    return 0;
}
