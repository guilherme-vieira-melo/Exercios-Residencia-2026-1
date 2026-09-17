#include <stdio.h>

int main() {
    int k, n, pot = 1;
    printf("Digite os valores de k e n: ");
    scanf("%d %d", &k, &n);

    for (int i = 1; i <= n; i++) {
        pot *= k;
        printf("%d elevado a %d = %d\n", k, i, pot);
    }
    return 0;
}
