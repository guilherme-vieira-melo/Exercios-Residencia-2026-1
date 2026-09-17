#include <stdio.h>

int main() {
    int n;
    long long fat = 1;
    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("%d! = %lld\n", n, fat);
    return 0;
}
